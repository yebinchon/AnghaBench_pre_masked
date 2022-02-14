
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int flags; int run_work; int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_hw_ctx*) ;
 int FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (struct blk_mq_hw_ctx*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct blk_mq_hw_ctx *VAR_1, bool VAR_2,
     unsigned long VAR_3)
{
 if (FUNC_8(FUNC_2(VAR_1)))
  return;

 if (!VAR_2 && !(VAR_1->flags & VAR_0)) {
  int VAR_4 = FUNC_4();
  if (FUNC_3(VAR_4, VAR_1->cpumask)) {
   FUNC_0(VAR_1);
   FUNC_7();
   return;
  }

  FUNC_7();
 }

 FUNC_5(FUNC_1(VAR_1), &VAR_1->run_work,
        FUNC_6(VAR_3));
}
