
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_idx_que {int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_idx_que *VAR_1,
       unsigned long VAR_2)
{
 int VAR_3;

 if (FUNC_3(FUNC_0(VAR_1->bitmap, VAR_2)))
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1->bitmap, VAR_2);

 FUNC_1(VAR_1->bitmap, VAR_3, 1);

 return VAR_3;
}
