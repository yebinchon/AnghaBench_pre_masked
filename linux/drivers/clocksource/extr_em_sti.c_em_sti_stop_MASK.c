
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_sti_priv {int* active; int lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct em_sti_priv*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct em_sti_priv *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_5 = VAR_2->active[VAR_1] | VAR_2->active[VAR_0];
 VAR_2->active[VAR_3] = 0;
 VAR_6 = VAR_2->active[VAR_1] | VAR_2->active[VAR_0];

 if (VAR_5 && !VAR_6)
  FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock, VAR_4);
}
