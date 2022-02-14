
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {int bd_disk; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{


 sector_t VAR_2 = FUNC_0(VAR_0->bd_disk);
 sector_t VAR_3 = VAR_2;

 VAR_1->heads = 0xff;
 VAR_1->sectors = 0x3f;
 FUNC_1(VAR_3, VAR_1->heads * VAR_1->sectors);
 VAR_1->cylinders = VAR_3;
 if ((sector_t)(VAR_1->cylinders + 1) * VAR_1->heads * VAR_1->sectors < VAR_2)
  VAR_1->cylinders = 0xffff;
 return 0;
}
