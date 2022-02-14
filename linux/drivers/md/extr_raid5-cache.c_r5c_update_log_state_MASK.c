
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {int last_checkpoint; int log_start; TYPE_1__* rdev; } ;
struct r5conf {int cache_state; } ;
typedef int sector_t ;
struct TYPE_4__ {struct r5conf* private; } ;
struct TYPE_3__ {TYPE_2__* mddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct r5l_log*) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (struct r5l_log*,int ,int ) ;
 int FUNC_4 (struct r5l_log*,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void FUNC_7(struct r5l_log *VAR_2)
{
 struct r5conf *VAR_3 = VAR_2->rdev->mddev->private;
 sector_t VAR_4;
 sector_t VAR_5;
 bool VAR_6 = 0;

 if (!FUNC_1(VAR_2))
  return;

 VAR_4 = FUNC_3(VAR_2, VAR_2->log_start,
           VAR_2->last_checkpoint);
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_4 < 2 * VAR_5)
  FUNC_5(VAR_0, &VAR_3->cache_state);
 else {
  if (FUNC_6(VAR_0, &VAR_3->cache_state))
   VAR_6 = 1;
  FUNC_0(VAR_0, &VAR_3->cache_state);
 }
 if (VAR_4 < 3 * VAR_5)
  FUNC_5(VAR_1, &VAR_3->cache_state);
 else
  FUNC_0(VAR_1, &VAR_3->cache_state);

 if (VAR_6)
  FUNC_4(VAR_2, 0);
}
