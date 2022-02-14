
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_poke_loc {void const* addr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct text_poke_loc *VAR_2 = (struct text_poke_loc *) VAR_1;

 if (VAR_0 < VAR_2->addr)
  return -1;
 if (VAR_0 > VAR_2->addr)
  return 1;
 return 0;
}
