
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stp_sstpi {int dummy; } ;
struct clock_sync_data {unsigned long long clock_delta; int in_sync; int cpus; } ;
struct TYPE_3__ {int tmd; scalar_t__* todoff; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,unsigned long long*) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (unsigned long long) ;
 int FUNC_7 (unsigned long long) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int*,int) ;

__attribute__((used)) static int FUNC_12(void *VAR_4)
{
 struct clock_sync_data *VAR_5 = VAR_4;
 unsigned long long VAR_6;
 static int VAR_7;
 int VAR_8;

 FUNC_10();
 if (FUNC_11(&VAR_7, 1) == 0) {

  while (FUNC_3(&VAR_5->cpus) != 0)
   FUNC_8();
  VAR_8 = 0;
  if (VAR_2.todoff[0] || VAR_2.todoff[1] ||
      VAR_2.todoff[2] || VAR_2.todoff[3] ||
      VAR_2.tmd != 2) {
   VAR_8 = FUNC_4(VAR_3, VAR_1, 0,
     &VAR_6);
   if (VAR_8 == 0) {
    VAR_5->clock_delta = VAR_6;
    FUNC_6(VAR_6);
    VAR_8 = FUNC_5(VAR_3, &VAR_2,
      sizeof(struct stp_sstpi));
    if (VAR_8 == 0 && VAR_2.tmd != 2)
     VAR_8 = -VAR_0;
   }
  }
  VAR_5->in_sync = VAR_8 ? -VAR_0 : 1;
  FUNC_11(&VAR_7, 0);
 } else {

  FUNC_2(&VAR_5->cpus);

  while (FUNC_0(VAR_5->in_sync) == 0)
   FUNC_1(1);
 }
 if (VAR_5->in_sync != 1)

  FUNC_9(((void*)0));

 FUNC_7(VAR_5->clock_delta);

 return 0;
}
