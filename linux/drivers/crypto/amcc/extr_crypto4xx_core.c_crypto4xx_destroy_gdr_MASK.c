
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto4xx_device {int gdr_pa; int gdr; TYPE_1__* core_dev; } ;
struct ce_gd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct crypto4xx_device *VAR_1)
{
 FUNC_0(VAR_1->core_dev->device,
     sizeof(struct ce_gd) * VAR_0,
     VAR_1->gdr, VAR_1->gdr_pa);
}
