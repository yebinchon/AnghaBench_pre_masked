
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct md_rdev {TYPE_2__* bdev; int kobj; } ;
typedef int sector_t ;
typedef int dev_t ;
struct TYPE_4__ {int bd_inode; } ;
struct TYPE_3__ {int (* load_super ) (struct md_rdev*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct md_rdev* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct md_rdev*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct md_rdev*) ;
 int FUNC_5 (int *,int *) ;
 struct md_rdev* FUNC_6 (int,int ) ;
 int FUNC_7 (struct md_rdev*,int ,int) ;
 int FUNC_8 (struct md_rdev*) ;
 int FUNC_9 (struct md_rdev*) ;
 int FUNC_10 (char*,int ,...) ;
 int VAR_5 ;
 int FUNC_11 (struct md_rdev*,int *,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_12 (struct md_rdev*) ;

__attribute__((used)) static struct md_rdev *FUNC_13(dev_t VAR_7, int VAR_8, int VAR_9)
{
 char VAR_10[VAR_0];
 int VAR_11;
 struct md_rdev *VAR_12;
 sector_t VAR_13;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return FUNC_0(-VAR_3);

 VAR_11 = FUNC_9(VAR_12);
 if (VAR_11)
  goto abort_free;
 VAR_11 = FUNC_1(VAR_12);
 if (VAR_11)
  goto abort_free;

 VAR_11 = FUNC_7(VAR_12, VAR_7, VAR_8 == -2);
 if (VAR_11)
  goto abort_free;

 FUNC_5(&VAR_12->kobj, &VAR_5);

 VAR_13 = FUNC_3(VAR_12->bdev->bd_inode) >> VAR_1;
 if (!VAR_13) {
  FUNC_10("md: %s has zero or unknown size, marking faulty!\n",
   FUNC_2(VAR_12->bdev,VAR_10));
  VAR_11 = -VAR_2;
  goto abort_free;
 }

 if (VAR_8 >= 0) {
  VAR_11 = VAR_6[VAR_8].
   load_super(VAR_12, ((void*)0), VAR_9);
  if (VAR_11 == -VAR_2) {
   FUNC_10("md: %s does not have a valid v%d.%d superblock, not importing!\n",
    FUNC_2(VAR_12->bdev,VAR_10),
    VAR_8, VAR_9);
   goto abort_free;
  }
  if (VAR_11 < 0) {
   FUNC_10("md: could not read %s's sb, not importing!\n",
    FUNC_2(VAR_12->bdev,VAR_10));
   goto abort_free;
  }
 }

 return VAR_12;

abort_free:
 if (VAR_12->bdev)
  FUNC_12(VAR_12);
 FUNC_8(VAR_12);
 FUNC_4(VAR_12);
 return FUNC_0(VAR_11);
}
