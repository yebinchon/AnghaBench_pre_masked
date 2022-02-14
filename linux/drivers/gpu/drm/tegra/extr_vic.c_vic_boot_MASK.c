
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int paddr; void* vaddr; } ;
struct TYPE_8__ {TYPE_2__ firmware; } ;
struct vic {int booted; int dev; TYPE_3__ falcon; TYPE_1__* config; } ;
struct iommu_fwspec {scalar_t__ num_ids; int* ids; } ;
struct TYPE_6__ {scalar_t__ supports_sid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
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
 int FUNC_3 (int ,char*) ;
 struct iommu_fwspec* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct vic*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct vic *VAR_13)
{
 u32 VAR_14, VAR_15;
 void *VAR_16;
 int VAR_17 = 0;

 if (VAR_13->booted)
  return 0;
 FUNC_8(VAR_13, FUNC_0(4) |
   VAR_0 |
   FUNC_1(4),
     VAR_2);

 VAR_17 = FUNC_5(&VAR_13->falcon);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_16 = VAR_13->falcon.firmware.vaddr;
 VAR_15 = *(u32 *)(VAR_16 + VAR_11);
 VAR_16 = VAR_13->falcon.firmware.vaddr +
  *(u32 *)(VAR_16 + VAR_12);
 VAR_14 = *(u32 *)(VAR_16 + VAR_1);

 FUNC_6(&VAR_13->falcon, VAR_5, 1);
 FUNC_6(&VAR_13->falcon, VAR_7,
         VAR_14);
 FUNC_6(&VAR_13->falcon, VAR_6,
         (VAR_13->falcon.firmware.paddr + VAR_15)
    >> 8);

 VAR_17 = FUNC_7(&VAR_13->falcon);
 if (VAR_17 < 0) {
  FUNC_3(VAR_13->dev,
   "failed to set application ID and FCE base\n");
  return VAR_17;
 }

 VAR_13->booted = 1;

 return 0;
}
