
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ata_device {scalar_t__ n_sectors; scalar_t__ n_native_sectors; unsigned int class; int horkage; int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,char*,int) ;
 int FUNC_4 (struct ata_device*,char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct ata_device*,unsigned int) ;
 int FUNC_6 (struct ata_device*,char*,...) ;

int FUNC_7(struct ata_device *VAR_8, unsigned int VAR_9,
         unsigned int VAR_10)
{
 u64 VAR_11 = VAR_8->n_sectors;
 u64 VAR_12 = VAR_8->n_native_sectors;
 int VAR_13;

 if (!FUNC_2(VAR_8))
  return -VAR_7;


 if (FUNC_0(VAR_9) &&
     VAR_9 != VAR_0 &&
     VAR_9 != VAR_1 &&
     VAR_9 != VAR_3 &&
     VAR_9 != VAR_2) {
  FUNC_4(VAR_8, "class mismatch %u != %u\n",
        VAR_8->class, VAR_9);
  VAR_13 = -VAR_7;
  goto fail;
 }


 VAR_13 = FUNC_5(VAR_8, VAR_10);
 if (VAR_13)
  goto fail;


 VAR_13 = FUNC_1(VAR_8);
 if (VAR_13)
  goto fail;


 if (VAR_8->class != VAR_0 || !VAR_11 ||
     VAR_8->n_sectors == VAR_11)
  return 0;


 FUNC_6(VAR_8, "n_sectors mismatch %llu != %llu\n",
       (unsigned long long)VAR_11,
       (unsigned long long)VAR_8->n_sectors);






 if (VAR_8->n_native_sectors == VAR_12 &&
     VAR_8->n_sectors > VAR_11 && VAR_8->n_sectors == VAR_12) {
  FUNC_6(VAR_8,
        "new n_sectors matches native, probably "
        "late HPA unlock, n_sectors updated\n");

  return 0;
 }







 if (VAR_8->n_native_sectors == VAR_12 &&
     VAR_8->n_sectors < VAR_11 && VAR_11 == VAR_12 &&
     !(VAR_8->horkage & VAR_5)) {
  FUNC_6(VAR_8,
        "old n_sectors matches native, probably "
        "late HPA lock, will try to unlock HPA\n");

  VAR_8->flags |= VAR_4;
  VAR_13 = -VAR_6;
 } else
  VAR_13 = -VAR_7;


 VAR_8->n_native_sectors = VAR_12;
 VAR_8->n_sectors = VAR_11;
 fail:
 FUNC_3(VAR_8, "revalidation failed (errno=%d)\n", VAR_13);
 return VAR_13;
}
