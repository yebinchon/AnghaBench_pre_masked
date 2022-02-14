
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ib_mr {int dummy; } ;
struct hns_roce_mr {scalar_t__ npages; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 struct hns_roce_mr* FUNC_1 (struct ib_mr*) ;

int FUNC_2(struct ib_mr *VAR_1, struct scatterlist *VAR_2, int VAR_3,
         unsigned int *VAR_4)
{
 struct hns_roce_mr *VAR_5 = FUNC_1(VAR_1);

 VAR_5->npages = 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);
}
