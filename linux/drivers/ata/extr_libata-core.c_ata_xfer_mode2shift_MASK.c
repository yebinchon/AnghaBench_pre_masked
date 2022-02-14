
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_xfer_ent {scalar_t__ shift; unsigned long base; unsigned long bits; } ;


 struct ata_xfer_ent* VAR_0 ;

int FUNC_0(unsigned long VAR_1)
{
 const struct ata_xfer_ent *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->shift >= 0; VAR_2++)
  if (VAR_1 >= VAR_2->base && VAR_1 < VAR_2->base + VAR_2->bits)
   return VAR_2->shift;
 return -1;
}
