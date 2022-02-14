
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_alloc {int max; int mask; int table; int lock; scalar_t__ top; scalar_t__ last; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mthca_alloc *VAR_3, u32 VAR_4, u32 VAR_5,
       u32 VAR_6)
{
 int VAR_7;


 if (VAR_4 != 1 << (FUNC_2(VAR_4) - 1))
  return -VAR_0;

 VAR_3->last = 0;
 VAR_3->top = 0;
 VAR_3->max = VAR_4;
 VAR_3->mask = VAR_5;
 FUNC_5(&VAR_3->lock);
 VAR_3->table = FUNC_3(FUNC_0(VAR_4), sizeof(long),
         VAR_2);
 if (!VAR_3->table)
  return -VAR_1;

 FUNC_1(VAR_3->table, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
  FUNC_4(VAR_7, VAR_3->table);

 return 0;
}
