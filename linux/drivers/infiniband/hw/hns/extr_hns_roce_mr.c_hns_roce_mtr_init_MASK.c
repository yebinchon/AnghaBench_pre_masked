
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_mtr {int buf_pg_shift; int hem_list; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct hns_roce_mtr *VAR_0, int VAR_1,
         int VAR_2)
{
 FUNC_0(&VAR_0->hem_list, VAR_1);
 VAR_0->buf_pg_shift = VAR_2;
}
