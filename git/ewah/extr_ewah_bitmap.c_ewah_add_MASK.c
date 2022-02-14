
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int bit_size; } ;
typedef scalar_t__ eword_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct ewah_bitmap*,int) ;
 size_t FUNC_1 (struct ewah_bitmap*,scalar_t__) ;

size_t FUNC_2(struct ewah_bitmap *VAR_1, eword_t VAR_2)
{
 VAR_1->bit_size += VAR_0;

 if (VAR_2 == 0)
  return FUNC_0(VAR_1, 0);

 if (VAR_2 == (eword_t)(~0))
  return FUNC_0(VAR_1, 1);

 return FUNC_1(VAR_1, VAR_2);
}
