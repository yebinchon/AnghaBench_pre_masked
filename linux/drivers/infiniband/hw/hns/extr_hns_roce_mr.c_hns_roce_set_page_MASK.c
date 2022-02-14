
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_mr {int dummy; } ;
struct hns_roce_mr {int npages; int * pbl_buf; } ;


 struct hns_roce_mr* FUNC_0 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_1(struct ib_mr *VAR_0, u64 VAR_1)
{
 struct hns_roce_mr *VAR_2 = FUNC_0(VAR_0);

 VAR_2->pbl_buf[VAR_2->npages++] = VAR_1;

 return 0;
}
