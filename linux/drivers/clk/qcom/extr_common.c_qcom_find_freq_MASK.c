
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {long freq; } ;



const
struct freq_tbl *FUNC_0(const struct freq_tbl *VAR_0, unsigned long VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 for (; VAR_0->freq; VAR_0++)
  if (VAR_1 <= VAR_0->freq)
   return VAR_0;


 return VAR_0 - 1;
}
