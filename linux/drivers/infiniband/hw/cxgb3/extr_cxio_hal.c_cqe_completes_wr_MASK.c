
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_wq {int rq_wptr; int rq_rptr; } ;
struct t3_cqe {int dummy; } ;


 scalar_t__ FUNC_0 (struct t3_cqe) ;
 scalar_t__ FUNC_1 (struct t3_cqe) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct t3_cqe) ;
 scalar_t__ FUNC_4 (struct t3_cqe) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct t3_cqe *VAR_3, struct t3_wq *VAR_4)
{
 if (FUNC_0(*VAR_3) == VAR_2)
  return 0;

 if ((FUNC_0(*VAR_3) == VAR_0) && FUNC_3(*VAR_3))
  return 0;

 if ((FUNC_0(*VAR_3) == VAR_1) && FUNC_4(*VAR_3))
  return 0;

 if (FUNC_1(*VAR_3) && FUNC_3(*VAR_3) &&
     FUNC_2(VAR_4->rq_rptr, VAR_4->rq_wptr))
  return 0;

 return 1;
}
