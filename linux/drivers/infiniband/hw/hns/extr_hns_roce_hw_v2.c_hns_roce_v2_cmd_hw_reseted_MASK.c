
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int is_reset; int dis_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static int FUNC_0(struct hns_roce_dev *VAR_4,
          unsigned long VAR_5,
          unsigned long VAR_6)
{
 VAR_4->is_reset = 1;
 VAR_4->dis_db = 1;

 if (VAR_6 == VAR_3 ||
     VAR_5 == VAR_2)
  return VAR_0;

 return VAR_1;
}
