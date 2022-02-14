
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int bdev; } ;
struct TYPE_6__ {TYPE_1__* anon_inode; } ;
struct qxl_device {unsigned int surfaceram_size; scalar_t__ vram_size; TYPE_4__ mman; TYPE_3__* rom; TYPE_2__ ddev; } ;
struct TYPE_7__ {unsigned int ram_header_offset; } ;
struct TYPE_5__ {int i_mapping; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int ,int) ;
 int FUNC_3 (int *,int ,unsigned int) ;

int FUNC_4(struct qxl_device *VAR_4)
{
 int VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(&VAR_4->mman.bdev,
          &VAR_3,
          VAR_4->ddev.anon_inode->i_mapping,
          0);
 if (VAR_5) {
  FUNC_0("failed initializing buffer object driver(%d).\n", VAR_5);
  return VAR_5;
 }

 VAR_6 = VAR_4->rom->ram_header_offset / VAR_0;
 VAR_5 = FUNC_3(&VAR_4->mman.bdev, VAR_2,
      VAR_6);
 if (VAR_5) {
  FUNC_0("Failed initializing VRAM heap.\n");
  return VAR_5;
 }
 VAR_5 = FUNC_3(&VAR_4->mman.bdev, VAR_1,
      VAR_4->surfaceram_size / VAR_0);
 if (VAR_5) {
  FUNC_0("Failed initializing Surfaces heap.\n");
  return VAR_5;
 }
 FUNC_1("qxl: %uM of VRAM memory size\n",
   (unsigned int)VAR_4->vram_size / (1024 * 1024));
 FUNC_1("qxl: %luM of IO pages memory ready (VRAM domain)\n",
   ((unsigned int)VAR_6 * VAR_0) / (1024 * 1024));
 FUNC_1("qxl: %uM of Surface memory size\n",
   (unsigned int)VAR_4->surfaceram_size / (1024 * 1024));
 return 0;
}
