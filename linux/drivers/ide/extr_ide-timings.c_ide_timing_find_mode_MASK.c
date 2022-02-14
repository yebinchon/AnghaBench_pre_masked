
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_timing {int mode; } ;


 struct ide_timing* VAR_0 ;

struct ide_timing *FUNC_0(u8 VAR_1)
{
 struct ide_timing *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->mode != VAR_1; VAR_2++)
  if (VAR_2->mode == 0xff)
   return ((void*)0);
 return VAR_2;
}
