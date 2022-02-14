
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_xfer_ent {int shift; int bits; int base; } ;


 struct ata_xfer_ent* VAR_0 ;
 int FUNC_0 (unsigned long) ;

u8 FUNC_1(unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1) - 1;
 const struct ata_xfer_ent *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->shift >= 0; VAR_3++)
  if (VAR_2 >= VAR_3->shift && VAR_2 < VAR_3->shift + VAR_3->bits)
   return VAR_3->base + VAR_2 - VAR_3->shift;
 return 0xff;
}
