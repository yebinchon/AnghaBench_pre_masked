
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {unsigned long mask; unsigned long value; int alt_end_off; int alt_start_off; int end_off; int start_off; } ;


 int VAR_0 ;
 unsigned int* FUNC_0 (struct fixup_entry*,int ) ;
 scalar_t__ FUNC_1 (unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1, struct fixup_entry *VAR_2)
{
 unsigned int *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_3 = FUNC_0(VAR_2, VAR_2->start_off);
 VAR_4 = FUNC_0(VAR_2, VAR_2->end_off);
 VAR_5 = FUNC_0(VAR_2, VAR_2->alt_start_off);
 VAR_6 = FUNC_0(VAR_2, VAR_2->alt_end_off);

 if ((VAR_6 - VAR_5) > (VAR_4 - VAR_3))
  return 1;

 if ((VAR_1 & VAR_2->mask) == VAR_2->value)
  return 0;

 VAR_7 = VAR_5;
 VAR_8 = VAR_3;

 for (; VAR_7 < VAR_6; VAR_7++, VAR_8++) {
  if (FUNC_1(VAR_7, VAR_8, VAR_5, VAR_6))
   return 1;
 }

 for (; VAR_8 < VAR_4; VAR_8++)
  FUNC_2(VAR_8, VAR_0);

 return 0;
}
