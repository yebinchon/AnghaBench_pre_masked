
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct island_bitmap {int * bits; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct island_bitmap *VAR_1, const struct island_bitmap *VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  VAR_1->bits[VAR_3] |= VAR_2->bits[VAR_3];
}
