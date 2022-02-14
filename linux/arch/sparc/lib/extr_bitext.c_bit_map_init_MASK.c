
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bit_map {unsigned long* map; int size; int lock; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct bit_map*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bit_map *VAR_0, unsigned long *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_0, 0, sizeof *VAR_0);
 FUNC_2(&VAR_0->lock);
 VAR_0->map = VAR_1;
 VAR_0->size = VAR_2;
}
