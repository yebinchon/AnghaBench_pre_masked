
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hns_roce_bitmap {int table; scalar_t__ max; int lock; scalar_t__ reserved_top; scalar_t__ mask; scalar_t__ top; scalar_t__ last; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hns_roce_bitmap *VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 if (VAR_4 != FUNC_2(VAR_4))
  return -VAR_0;

 VAR_3->last = 0;
 VAR_3->top = 0;
 VAR_3->max = VAR_4 - VAR_7;
 VAR_3->mask = VAR_5;
 VAR_3->reserved_top = VAR_7;
 FUNC_4(&VAR_3->lock);
 VAR_3->table = FUNC_1(FUNC_0(VAR_3->max), sizeof(long),
    VAR_2);
 if (!VAR_3->table)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
  FUNC_3(VAR_8, VAR_3->table);

 return 0;
}
