
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int pd_bitmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_1, unsigned long *VAR_2)
{
 return FUNC_0(&VAR_1->pd_bitmap, VAR_2) ? -VAR_0 : 0;
}
