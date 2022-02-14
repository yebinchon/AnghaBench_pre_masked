
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_xfer_ent {unsigned int shift; int base; } ;
struct ata_timing {int mode; unsigned short cycle; unsigned short udma; } ;





 struct ata_timing* FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 struct ata_xfer_ent* VAR_0 ;

u8 FUNC_2(unsigned int VAR_1, int VAR_2)
{
 u8 VAR_3 = 0xff, VAR_4 = 0xff;
 const struct ata_xfer_ent *VAR_5;
 const struct ata_timing *VAR_6;

 for (VAR_5 = VAR_0; VAR_5->shift >= 0; VAR_5++)
  if (VAR_5->shift == VAR_1)
   VAR_3 = VAR_5->base;

 for (VAR_6 = FUNC_0(VAR_3);
      VAR_6 && FUNC_1(VAR_6->mode) == VAR_1; VAR_6++) {
  unsigned short VAR_7;

  switch (VAR_1) {
  case 129:
  case 130:
   VAR_7 = VAR_6->cycle;
   break;
  case 128:
   VAR_7 = VAR_6->udma;
   break;
  default:
   return 0xff;
  }

  if (VAR_2 > VAR_7)
   break;

  VAR_4 = VAR_6->mode;
 }

 return VAR_4;
}
