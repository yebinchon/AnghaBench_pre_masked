
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ata_xfer_ent {int shift; scalar_t__ base; scalar_t__ bits; } ;


 struct ata_xfer_ent* VAR_0 ;

unsigned long FUNC_0(u8 VAR_1)
{
 const struct ata_xfer_ent *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->shift >= 0; VAR_2++)
  if (VAR_1 >= VAR_2->base && VAR_1 < VAR_2->base + VAR_2->bits)
   return ((2 << (VAR_2->shift + VAR_1 - VAR_2->base)) - 1)
    & ~((1 << VAR_2->shift) - 1);
 return 0;
}
