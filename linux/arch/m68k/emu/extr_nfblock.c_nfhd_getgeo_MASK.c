
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfhd_device {int blocks; int bshift; } ;
struct hd_geometry {int cylinders; int heads; int sectors; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct nfhd_device* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct nfhd_device *VAR_2 = VAR_0->bd_disk->private_data;

 VAR_1->cylinders = VAR_2->blocks >> (6 - VAR_2->bshift);
 VAR_1->heads = 4;
 VAR_1->sectors = 16;

 return 0;
}
