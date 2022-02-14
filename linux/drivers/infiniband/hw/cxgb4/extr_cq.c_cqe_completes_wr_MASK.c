
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qid; } ;
struct t4_wq {TYPE_1__ sq; } ;
struct t4_cqe {int dummy; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;
 scalar_t__ FUNC_1 (struct t4_cqe*) ;
 scalar_t__ FUNC_2 (struct t4_cqe*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct t4_cqe*) ;
 scalar_t__ FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (int,char*,int ) ;
 scalar_t__ FUNC_6 (struct t4_wq*) ;

__attribute__((used)) static int FUNC_7(struct t4_cqe *VAR_3, struct t4_wq *VAR_4)
{
 if (FUNC_2(VAR_3)) {
  FUNC_5(1, "Unexpected DRAIN CQE qp id %u!\n", VAR_4->sq.qid);
  return 0;
 }

 if (FUNC_0(VAR_3) == VAR_2)
  return 0;

 if ((FUNC_0(VAR_3) == VAR_0) && FUNC_3(VAR_3))
  return 0;

 if ((FUNC_0(VAR_3) == VAR_1) && FUNC_4(VAR_3))
  return 0;

 if (FUNC_1(VAR_3) && FUNC_3(VAR_3) && FUNC_6(VAR_4))
  return 0;
 return 1;
}
