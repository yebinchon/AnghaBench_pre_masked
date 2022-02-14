
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_keysc_priv {scalar_t__ iomem_base; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct sh_keysc_priv *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->iomem_base + (VAR_1 << 2));
}
