
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_bitmap {unsigned long max; unsigned long last; int top; int reserved_top; int mask; int lock; int table; } ;


 unsigned long FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hns_roce_bitmap *VAR_0, unsigned long *VAR_1)
{
 int VAR_2 = 0;

 FUNC_3(&VAR_0->lock);
 *VAR_1 = FUNC_1(VAR_0->table, VAR_0->max, VAR_0->last);
 if (*VAR_1 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
          & VAR_0->mask;
  *VAR_1 = FUNC_0(VAR_0->table, VAR_0->max);
 }

 if (*VAR_1 < VAR_0->max) {
  FUNC_2(*VAR_1, VAR_0->table);
  VAR_0->last = (*VAR_1 + 1);
  if (VAR_0->last == VAR_0->max)
   VAR_0->last = 0;
  *VAR_1 |= VAR_0->top;
 } else {
  VAR_2 = -1;
 }

 FUNC_4(&VAR_0->lock);

 return VAR_2;
}
