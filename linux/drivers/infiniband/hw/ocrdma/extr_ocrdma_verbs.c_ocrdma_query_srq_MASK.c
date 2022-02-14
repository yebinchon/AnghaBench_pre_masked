
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_srq {int dummy; } ;
struct ib_srq_attr {int dummy; } ;
struct ib_srq {int dummy; } ;


 struct ocrdma_srq* FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (struct ocrdma_srq*,struct ib_srq_attr*) ;

int FUNC_2(struct ib_srq *VAR_0, struct ib_srq_attr *VAR_1)
{
 int VAR_2;
 struct ocrdma_srq *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_3, VAR_1);
 return VAR_2;
}
