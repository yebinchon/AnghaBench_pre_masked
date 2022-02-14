
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rsxx_cardinfo {int size8; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct rsxx_cardinfo* private_data; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct rsxx_cardinfo *VAR_2 = VAR_0->bd_disk->private_data;
 u64 VAR_3 = VAR_2->size8 >> 9;





 if (VAR_2->size8) {
  VAR_1->heads = 64;
  VAR_1->sectors = 16;
  FUNC_0(VAR_3, (VAR_1->heads * VAR_1->sectors));
  VAR_1->cylinders = VAR_3;
 } else {
  VAR_1->heads = 0;
  VAR_1->sectors = 0;
  VAR_1->cylinders = 0;
 }
 return 0;
}
