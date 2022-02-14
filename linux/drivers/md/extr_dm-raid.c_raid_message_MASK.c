
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int ro; scalar_t__ thread; int suspended; int recovery; scalar_t__ sync_thread; TYPE_1__* pers; } ;
struct raid_set {struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;
struct TYPE_2__ {int sync_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct mddev*,int ) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_10, unsigned int VAR_11, char **VAR_12,
   char *VAR_13, unsigned VAR_14)
{
 struct raid_set *VAR_15 = VAR_10->private;
 struct mddev *VAR_16 = &VAR_15->md;

 if (!VAR_16->pers || !VAR_16->pers->sync_request)
  return -VAR_1;

 if (!FUNC_5(VAR_12[0], "frozen"))
  FUNC_4(VAR_3, &VAR_16->recovery);
 else
  FUNC_0(VAR_3, &VAR_16->recovery);

 if (!FUNC_5(VAR_12[0], "idle") || !FUNC_5(VAR_12[0], "frozen")) {
  if (VAR_16->sync_thread) {
   FUNC_4(VAR_4, &VAR_16->recovery);
   FUNC_2(VAR_16);
  }
 } else if (FUNC_1(VAR_16, VAR_16->recovery) != VAR_9)
  return -VAR_0;
 else if (!FUNC_5(VAR_12[0], "resync"))
  ;
 else if (!FUNC_5(VAR_12[0], "recover"))
  FUNC_4(VAR_6, &VAR_16->recovery);
 else {
  if (!FUNC_5(VAR_12[0], "check")) {
   FUNC_4(VAR_2, &VAR_16->recovery);
   FUNC_4(VAR_7, &VAR_16->recovery);
   FUNC_4(VAR_8, &VAR_16->recovery);
  } else if (!FUNC_5(VAR_12[0], "repair")) {
   FUNC_4(VAR_7, &VAR_16->recovery);
   FUNC_4(VAR_8, &VAR_16->recovery);
  } else
   return -VAR_1;
 }
 if (VAR_16->ro == 2) {



  VAR_16->ro = 0;
  if (!VAR_16->suspended && VAR_16->sync_thread)
   FUNC_3(VAR_16->sync_thread);
 }
 FUNC_4(VAR_5, &VAR_16->recovery);
 if (!VAR_16->suspended && VAR_16->thread)
  FUNC_3(VAR_16->thread);

 return 0;
}
