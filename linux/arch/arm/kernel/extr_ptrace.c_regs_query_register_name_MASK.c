
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs_offset {char const* name; unsigned int offset; } ;


 struct pt_regs_offset* VAR_0 ;

const char *FUNC_0(unsigned int VAR_1)
{
 const struct pt_regs_offset *VAR_2;
 for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
  if (VAR_2->offset == VAR_1)
   return VAR_2->name;
 return ((void*)0);
}
