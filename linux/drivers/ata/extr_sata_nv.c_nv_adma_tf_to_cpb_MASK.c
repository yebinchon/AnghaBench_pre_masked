
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int flags; int hob_feature; int hob_nsect; int hob_lbal; int hob_lbam; int hob_lbah; int feature; int nsect; int lbal; int lbam; int lbah; int device; int command; } ;
typedef int __le16 ;


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
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_taskfile *VAR_13, __le16 *VAR_14)
{
 unsigned int VAR_15 = 0;

 if (VAR_13->flags & VAR_8) {
  if (VAR_13->flags & VAR_9) {
   VAR_14[VAR_15++] = FUNC_0((VAR_2 << 8) | VAR_13->hob_feature | VAR_12);
   VAR_14[VAR_15++] = FUNC_0((VAR_6 << 8) | VAR_13->hob_nsect);
   VAR_14[VAR_15++] = FUNC_0((VAR_4 << 8) | VAR_13->hob_lbal);
   VAR_14[VAR_15++] = FUNC_0((VAR_5 << 8) | VAR_13->hob_lbam);
   VAR_14[VAR_15++] = FUNC_0((VAR_3 << 8) | VAR_13->hob_lbah);
   VAR_14[VAR_15++] = FUNC_0((VAR_2 << 8) | VAR_13->feature);
  } else
   VAR_14[VAR_15++] = FUNC_0((VAR_2 << 8) | VAR_13->feature | VAR_12);

  VAR_14[VAR_15++] = FUNC_0((VAR_6 << 8) | VAR_13->nsect);
  VAR_14[VAR_15++] = FUNC_0((VAR_4 << 8) | VAR_13->lbal);
  VAR_14[VAR_15++] = FUNC_0((VAR_5 << 8) | VAR_13->lbam);
  VAR_14[VAR_15++] = FUNC_0((VAR_3 << 8) | VAR_13->lbah);
 }

 if (VAR_13->flags & VAR_7)
  VAR_14[VAR_15++] = FUNC_0((VAR_1 << 8) | VAR_13->device);

 VAR_14[VAR_15++] = FUNC_0((VAR_0 << 8) | VAR_13->command | VAR_10);

 while (VAR_15 < 12)
  VAR_14[VAR_15++] = FUNC_0(VAR_11);

 return VAR_15;
}
