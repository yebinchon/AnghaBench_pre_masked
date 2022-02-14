
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* global; } ;
struct etnaviv_iommuv2_context {int* stlb_dma; int* mtlb_cpu; scalar_t__* stlb_cpu; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int*,int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct etnaviv_iommuv2_context *VAR_5,
       int VAR_6)
{
 if (VAR_5->stlb_cpu[VAR_6])
  return 0;

 VAR_5->stlb_cpu[VAR_6] =
   FUNC_0(VAR_5->base.global->dev, VAR_4,
         &VAR_5->stlb_dma[VAR_6],
         VAR_1);

 if (!VAR_5->stlb_cpu[VAR_6])
  return -VAR_0;

 FUNC_1(VAR_5->stlb_cpu[VAR_6], VAR_2,
   VAR_4 / sizeof(u32));

 VAR_5->mtlb_cpu[VAR_6] =
   VAR_5->stlb_dma[VAR_6] | VAR_3;

 return 0;
}
