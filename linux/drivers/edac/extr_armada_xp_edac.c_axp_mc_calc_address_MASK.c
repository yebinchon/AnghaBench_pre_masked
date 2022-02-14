
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct axp_mc_drvdata {int width; scalar_t__* cs_addr_sel; } ;



__attribute__((used)) static uint32_t FUNC_0(struct axp_mc_drvdata *VAR_0,
        uint8_t VAR_1, uint8_t VAR_2, uint16_t VAR_3,
        uint16_t VAR_4)
{
 if (VAR_0->width == 8) {

  if (VAR_0->cs_addr_sel[VAR_1])

   return (((VAR_3 & 0xfff8) << 16) |
    ((VAR_2 & 0x7) << 16) |
    ((VAR_3 & 0x7) << 13) |
    ((VAR_4 & 0x3ff) << 3));
  else
   return (((VAR_3 & 0xffff << 16) |
     ((VAR_2 & 0x7) << 13) |
     ((VAR_4 & 0x3ff)) << 3));
 } else if (VAR_0->width == 4) {

  if (VAR_0->cs_addr_sel[VAR_1])

   return (((VAR_3 & 0xfff0) << 15) |
    ((VAR_2 & 0x7) << 16) |
    ((VAR_3 & 0xf) << 12) |
    ((VAR_4 & 0x3ff) << 2));
  else
   return (((VAR_3 & 0xffff << 15) |
     ((VAR_2 & 0x7) << 12) |
     ((VAR_4 & 0x3ff)) << 2));
 } else {

  if (VAR_0->cs_addr_sel[VAR_1])

   return (((VAR_3 & 0xffe0) << 14) |
    ((VAR_2 & 0x7) << 16) |
    ((VAR_3 & 0x1f) << 11) |
    ((VAR_4 & 0x3ff) << 1));
  else
   return (((VAR_3 & 0xffff << 14) |
     ((VAR_2 & 0x7) << 11) |
     ((VAR_4 & 0x3ff)) << 1));
 }
}
