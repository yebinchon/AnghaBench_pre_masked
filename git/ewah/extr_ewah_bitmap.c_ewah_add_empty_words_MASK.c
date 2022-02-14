
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {size_t bit_size; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct ewah_bitmap*,int,size_t) ;

size_t FUNC_1(struct ewah_bitmap *VAR_1, int VAR_2, size_t VAR_3)
{
 if (VAR_3 == 0)
  return 0;

 VAR_1->bit_size += VAR_3 * VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
