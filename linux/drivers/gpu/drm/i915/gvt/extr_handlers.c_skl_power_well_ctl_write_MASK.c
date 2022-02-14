
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct TYPE_2__ {int dev_priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_0,
  unsigned int VAR_1, void *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = *(u32 *)VAR_2;

 if (FUNC_0(VAR_0->gvt->dev_priv))
  VAR_4 &= (1 << 31) | (1 << 29);
 else
  VAR_4 &= (1 << 31) | (1 << 29) | (1 << 9) |
   (1 << 7) | (1 << 5) | (1 << 3) | (1 << 1);
 VAR_4 |= (VAR_4 >> 1);

 return FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
}
