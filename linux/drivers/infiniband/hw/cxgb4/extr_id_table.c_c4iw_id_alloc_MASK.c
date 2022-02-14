
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c4iw_id_table {int max; int last; int flags; int lock; scalar_t__ start; int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

u32 FUNC_6(struct c4iw_id_table *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_4(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_1(VAR_2->table, VAR_2->max, VAR_2->last);
 if (VAR_4 >= VAR_2->max)
  VAR_4 = FUNC_0(VAR_2->table, VAR_2->max);

 if (VAR_4 < VAR_2->max) {
  if (VAR_2->flags & VAR_0)
   VAR_2->last += FUNC_2() % VAR_1;
  else
   VAR_2->last = VAR_4 + 1;
  if (VAR_2->last >= VAR_2->max)
   VAR_2->last = 0;
  FUNC_3(VAR_4, VAR_2->table);
  VAR_4 += VAR_2->start;
 } else
  VAR_4 = -1;

 FUNC_5(&VAR_2->lock, VAR_3);
 return VAR_4;
}
