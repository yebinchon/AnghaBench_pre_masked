
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_buf_region {int hopnum; int offset; int count; } ;


 int VAR_0 ;

void FUNC_0(struct hns_roce_buf_region *VAR_1, int VAR_2,
         int VAR_3, int VAR_4)
{
 if (VAR_2 == VAR_0)
  VAR_1->hopnum = 0;
 else
  VAR_1->hopnum = VAR_2;

 VAR_1->offset = VAR_3;
 VAR_1->count = VAR_4;
}
