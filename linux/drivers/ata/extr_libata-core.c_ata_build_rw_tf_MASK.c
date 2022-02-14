
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ata_taskfile {int flags; unsigned int nsect; int hob_feature; int feature; int hob_lbah; int hob_lbam; int hob_lbal; int lbah; int lbam; int lbal; int device; int hob_nsect; int command; int protocol; } ;
struct ata_device {int flags; int sectors; int heads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 scalar_t__ FUNC_2 (struct ata_taskfile*,struct ata_device*) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ata_taskfile *VAR_18, struct ata_device *VAR_19,
      u64 VAR_20, u32 VAR_21, unsigned int VAR_22,
      unsigned int VAR_23, int VAR_24)
{
 VAR_18->flags |= VAR_11 | VAR_9;
 VAR_18->flags |= VAR_22;

 if (FUNC_1(VAR_19) && !FUNC_3(VAR_23)) {

  if (!FUNC_5(VAR_20, VAR_21))
   return -VAR_16;

  VAR_18->protocol = VAR_7;
  VAR_18->flags |= VAR_12 | VAR_13;

  if (VAR_18->flags & VAR_14)
   VAR_18->command = VAR_1;
  else
   VAR_18->command = VAR_0;

  VAR_18->nsect = VAR_23 << 3;
  VAR_18->hob_feature = (VAR_21 >> 8) & 0xff;
  VAR_18->feature = VAR_21 & 0xff;

  VAR_18->hob_lbah = (VAR_20 >> 40) & 0xff;
  VAR_18->hob_lbam = (VAR_20 >> 32) & 0xff;
  VAR_18->hob_lbal = (VAR_20 >> 24) & 0xff;
  VAR_18->lbah = (VAR_20 >> 16) & 0xff;
  VAR_18->lbam = (VAR_20 >> 8) & 0xff;
  VAR_18->lbal = VAR_20 & 0xff;

  VAR_18->device = VAR_5;
  if (VAR_18->flags & VAR_10)
   VAR_18->device |= 1 << 7;

  if (VAR_19->flags & VAR_4) {
   if (VAR_24 == VAR_17)
    VAR_18->hob_nsect |= VAR_6 <<
       VAR_8;
  }
 } else if (VAR_19->flags & VAR_2) {
  VAR_18->flags |= VAR_12;

  if (FUNC_4(VAR_20, VAR_21)) {

   VAR_18->device |= (VAR_20 >> 24) & 0xf;
  } else if (FUNC_5(VAR_20, VAR_21)) {
   if (!(VAR_19->flags & VAR_3))
    return -VAR_16;


   VAR_18->flags |= VAR_13;

   VAR_18->hob_nsect = (VAR_21 >> 8) & 0xff;

   VAR_18->hob_lbah = (VAR_20 >> 40) & 0xff;
   VAR_18->hob_lbam = (VAR_20 >> 32) & 0xff;
   VAR_18->hob_lbal = (VAR_20 >> 24) & 0xff;
  } else

   return -VAR_16;

  if (FUNC_6(FUNC_2(VAR_18, VAR_19) < 0))
   return -VAR_15;

  VAR_18->nsect = VAR_21 & 0xff;

  VAR_18->lbah = (VAR_20 >> 16) & 0xff;
  VAR_18->lbam = (VAR_20 >> 8) & 0xff;
  VAR_18->lbal = VAR_20 & 0xff;

  VAR_18->device |= VAR_5;
 } else {

  u32 VAR_25, VAR_26, VAR_27, VAR_28;


  if (!FUNC_4(VAR_20, VAR_21))
   return -VAR_16;

  if (FUNC_6(FUNC_2(VAR_18, VAR_19) < 0))
   return -VAR_15;


  VAR_28 = (u32)VAR_20 / VAR_19->sectors;
  VAR_27 = VAR_28 / VAR_19->heads;
  VAR_26 = VAR_28 % VAR_19->heads;
  VAR_25 = (u32)VAR_20 % VAR_19->sectors + 1;

  FUNC_0("block %u track %u cyl %u head %u sect %u\n",
   (u32)VAR_20, VAR_28, VAR_27, VAR_26, VAR_25);





  if ((VAR_27 >> 16) || (VAR_26 >> 4) || (VAR_25 >> 8) || (!VAR_25))
   return -VAR_16;

  VAR_18->nsect = VAR_21 & 0xff;
  VAR_18->lbal = VAR_25;
  VAR_18->lbam = VAR_27;
  VAR_18->lbah = VAR_27 >> 8;
  VAR_18->device |= VAR_26;
 }

 return 0;
}
