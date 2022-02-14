
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;
struct tegra_drm {TYPE_1__ carveout; scalar_t__ domain; } ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__,int ,size_t) ;
 size_t FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct tegra_drm *VAR_0, size_t VAR_1, void *VAR_2,
      dma_addr_t VAR_3)
{
 if (VAR_0->domain)
  VAR_1 = FUNC_5(&VAR_0->carveout.domain, VAR_1);
 else
  VAR_1 = FUNC_0(VAR_1);

 if (VAR_0->domain) {
  FUNC_4(VAR_0->domain, VAR_3, VAR_1);
  FUNC_1(&VAR_0->carveout.domain,
     FUNC_6(&VAR_0->carveout.domain, VAR_3));
 }

 FUNC_2((unsigned long)VAR_2, FUNC_3(VAR_1));
}
