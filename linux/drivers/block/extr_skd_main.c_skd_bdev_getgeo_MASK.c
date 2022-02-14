
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct skd_device {int disk; scalar_t__ read_cap_is_valid; TYPE_2__* pdev; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_6__ {int comm; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int disk_name; struct skd_device* private_data; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_2, struct hd_geometry *VAR_3)
{
 struct skd_device *VAR_4;
 u64 VAR_5;

 VAR_4 = VAR_2->bd_disk->private_data;

 FUNC_0(&VAR_4->pdev->dev, "%s: CMD[%s] getgeo device\n",
  VAR_2->bd_disk->disk_name, VAR_1->comm);

 if (VAR_4->read_cap_is_valid) {
  VAR_5 = FUNC_1(VAR_4->disk);
  VAR_3->heads = 64;
  VAR_3->sectors = 255;
  VAR_3->cylinders = (VAR_5) / (255 * 64);

  return 0;
 }
 return -VAR_0;
}
