
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_bitmap {int max; int reserved_top; int top; int mask; int lock; int last; int table; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hns_roce_bitmap *VAR_0,
    unsigned long VAR_1, int VAR_2,
    int VAR_3)
{
 int VAR_4;

 VAR_1 &= VAR_0->max + VAR_0->reserved_top - 1;

 FUNC_2(&VAR_0->lock);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_1 + VAR_4, VAR_0->table);

 if (!VAR_3)
  VAR_0->last = FUNC_1(VAR_0->last, VAR_1);
 VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
         & VAR_0->mask;
 FUNC_3(&VAR_0->lock);
}
