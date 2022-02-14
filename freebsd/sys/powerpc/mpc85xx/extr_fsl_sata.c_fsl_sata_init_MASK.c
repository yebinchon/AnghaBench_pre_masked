
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int work_bus; } ;
struct fsl_sata_channel {int r_mem; TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
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
 int VAR_13 ;
 struct fsl_sata_channel* FUNC_2 (int ) ;
 int FUNC_3 (struct fsl_sata_channel*) ;
 int FUNC_4 (struct fsl_sata_channel*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_14)
{
 struct fsl_sata_channel *VAR_15 = FUNC_2(VAR_14);
 uint64_t VAR_16;
 uint32_t VAR_17;


 VAR_17 = FUNC_0(VAR_15->r_mem, VAR_3);
 VAR_17 &= ~VAR_6;
 VAR_17 |= VAR_5;
 FUNC_1(VAR_15->r_mem, VAR_3, VAR_17 & ~VAR_7);
 FUNC_4(VAR_15, VAR_9,
     VAR_10, 0, 1000);

 VAR_16 = VAR_15->dma.work_bus + VAR_0;
 FUNC_1(VAR_15->r_mem, VAR_2, VAR_16);
 VAR_17 &= ~VAR_4;
 VAR_17 &= ~VAR_8;
 FUNC_1(VAR_15->r_mem, VAR_3, VAR_17);
 VAR_17 = FUNC_0(VAR_15->r_mem, VAR_13);
 FUNC_1(VAR_15->r_mem, VAR_13, VAR_17 & ~VAR_1);
 FUNC_1(VAR_15->r_mem, VAR_11, (1 << VAR_12));
 FUNC_3(VAR_15);
 return (0);
}
