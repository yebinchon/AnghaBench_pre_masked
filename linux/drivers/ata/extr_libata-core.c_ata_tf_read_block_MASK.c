
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ata_taskfile {int flags; int device; int lbah; int lbam; int lbal; scalar_t__ hob_lbal; scalar_t__ hob_lbam; scalar_t__ hob_lbah; } ;
struct ata_device {int heads; int sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*,char*) ;

u64 FUNC_1(const struct ata_taskfile *VAR_3, struct ata_device *VAR_4)
{
 u64 VAR_5 = 0;

 if (VAR_3->flags & VAR_0) {
  if (VAR_3->flags & VAR_1) {
   VAR_5 |= (u64)VAR_3->hob_lbah << 40;
   VAR_5 |= (u64)VAR_3->hob_lbam << 32;
   VAR_5 |= (u64)VAR_3->hob_lbal << 24;
  } else
   VAR_5 |= (VAR_3->device & 0xf) << 24;

  VAR_5 |= VAR_3->lbah << 16;
  VAR_5 |= VAR_3->lbam << 8;
  VAR_5 |= VAR_3->lbal;
 } else {
  u32 VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_3->lbam | (VAR_3->lbah << 8);
  VAR_7 = VAR_3->device & 0xf;
  VAR_8 = VAR_3->lbal;

  if (!VAR_8) {
   FUNC_0(VAR_4,
         "device reported invalid CHS sector 0\n");
   return VAR_2;
  }

  VAR_5 = (VAR_6 * VAR_4->heads + VAR_7) * VAR_4->sectors + VAR_8 - 1;
 }

 return VAR_5;
}
