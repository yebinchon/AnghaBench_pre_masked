
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_scsi_args {TYPE_1__* dev; } ;
struct TYPE_2__ {int zac_zoned_cap; int zac_zones_max_open; int zac_zones_optimal_nonseq; int zac_zones_optimal_open; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_scsi_args *VAR_0, u8 *VAR_1)
{



 VAR_1[1] = 0xb6;
 VAR_1[3] = 0x3C;




 if (VAR_0->dev->zac_zoned_cap & 1)
  VAR_1[4] |= 1;
 FUNC_0(VAR_0->dev->zac_zones_optimal_open, &VAR_1[8]);
 FUNC_0(VAR_0->dev->zac_zones_optimal_nonseq, &VAR_1[12]);
 FUNC_0(VAR_0->dev->zac_zones_max_open, &VAR_1[16]);

 return 0;
}
