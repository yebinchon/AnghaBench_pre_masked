
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_srq {int wqe_shift; int buf; } ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static void *FUNC_1(struct hns_roce_srq *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->buf, VAR_1 << VAR_0->wqe_shift);
}
