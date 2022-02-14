
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_bitmap {unsigned long max; unsigned long last; int top; int reserved_top; int mask; int lock; int table; } ;


 unsigned long FUNC_0 (int ,unsigned long,unsigned long,int,int) ;
 int FUNC_1 (struct hns_roce_bitmap*,unsigned long*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct hns_roce_bitmap *VAR_0, int VAR_1,
    int VAR_2, unsigned long *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 if (FUNC_2(VAR_1 == 1 && VAR_2 == 1))
  return FUNC_1(VAR_0, VAR_3);

 FUNC_4(&VAR_0->lock);

 *VAR_3 = FUNC_0(VAR_0->table, VAR_0->max,
       VAR_0->last, VAR_1, VAR_2 - 1);
 if (*VAR_3 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
          & VAR_0->mask;
  *VAR_3 = FUNC_0(VAR_0->table, VAR_0->max, 0,
        VAR_1, VAR_2 - 1);
 }

 if (*VAR_3 < VAR_0->max) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_3(*VAR_3 + VAR_5, VAR_0->table);

  if (*VAR_3 == VAR_0->last) {
   VAR_0->last = (*VAR_3 + VAR_1);
   if (VAR_0->last >= VAR_0->max)
    VAR_0->last = 0;
  }
  *VAR_3 |= VAR_0->top;
 } else {
  VAR_4 = -1;
 }

 FUNC_5(&VAR_0->lock);

 return VAR_4;
}
