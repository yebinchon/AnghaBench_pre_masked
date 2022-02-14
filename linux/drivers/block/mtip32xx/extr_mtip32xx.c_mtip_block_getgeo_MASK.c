
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct driver_data {TYPE_2__* pdev; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int sector_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct driver_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct driver_data*,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1,
    struct hd_geometry *VAR_2)
{
 struct driver_data *VAR_3 = VAR_1->bd_disk->private_data;
 sector_t VAR_4;

 if (!VAR_3)
  return -VAR_0;

 if (!(FUNC_1(VAR_3, &VAR_4))) {
  FUNC_0(&VAR_3->pdev->dev,
   "Could not get drive capacity.\n");
  return -VAR_0;
 }

 VAR_2->heads = 224;
 VAR_2->sectors = 56;
 FUNC_2(VAR_4, (VAR_2->heads * VAR_2->sectors));
 VAR_2->cylinders = VAR_4;
 return 0;
}
