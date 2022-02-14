
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bit_map {int used; int first_free; int lock; int map; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;

void FUNC_5(struct bit_map *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0->used < VAR_2)
  FUNC_0();
 FUNC_2(&VAR_0->lock);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (FUNC_4(VAR_1 + VAR_3, VAR_0->map) == 0)
   FUNC_0();
  FUNC_1(VAR_1 + VAR_3, VAR_0->map);
 }
 if (VAR_1 < VAR_0->first_free)
  VAR_0->first_free = VAR_1;
 VAR_0->used -= VAR_2;
 FUNC_3(&VAR_0->lock);
}
