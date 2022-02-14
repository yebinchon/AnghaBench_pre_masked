
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto4xx_device {int gdr; int gdr_pa; TYPE_1__* core_dev; } ;
struct ce_gd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static u32 FUNC_1(struct crypto4xx_device *VAR_3)
{
 VAR_3->gdr = FUNC_0(VAR_3->core_dev->device,
          sizeof(struct ce_gd) * VAR_2,
          &VAR_3->gdr_pa, VAR_1);
 if (!VAR_3->gdr)
  return -VAR_0;

 return 0;
}
