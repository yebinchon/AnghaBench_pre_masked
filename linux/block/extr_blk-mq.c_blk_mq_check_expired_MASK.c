
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int ref; int (* end_io ) (struct request*,int ) ;} ;
struct blk_mq_hw_ctx {int dummy; } ;


 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*,unsigned long*) ;
 int FUNC_2 (struct request*,int) ;
 scalar_t__ FUNC_3 (struct request*,struct blk_mq_hw_ctx*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct request*,int ) ;

__attribute__((used)) static bool FUNC_7(struct blk_mq_hw_ctx *VAR_0,
  struct request *VAR_1, void *VAR_2, bool VAR_3)
{
 unsigned long *VAR_4 = VAR_2;





 if (!FUNC_1(VAR_1, VAR_4))
  return 1;
 if (!FUNC_5(&VAR_1->ref))
  return 1;







 if (FUNC_1(VAR_1, VAR_4))
  FUNC_2(VAR_1, VAR_3);

 if (FUNC_3(VAR_1, VAR_0))
  VAR_1->end_io(VAR_1, 0);
 else if (FUNC_4(&VAR_1->ref))
  FUNC_0(VAR_1);

 return 1;
}
