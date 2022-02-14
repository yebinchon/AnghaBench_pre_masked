
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct dc_bios {scalar_t__ bios_size; int * bios; } ;



uint8_t *FUNC_0(struct dc_bios *VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2)
{
 if (VAR_0->bios && VAR_1 + VAR_2 < VAR_0->bios_size)
  return VAR_0->bios + VAR_1;
 else
  return ((void*)0);
}
