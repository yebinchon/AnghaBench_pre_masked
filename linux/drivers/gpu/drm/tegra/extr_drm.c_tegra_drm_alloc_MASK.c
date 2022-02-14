
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t shift; int domain; int limit; } ;
struct tegra_drm {TYPE_1__ carveout; scalar_t__ domain; } ;
struct iova {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (size_t) ;
 int VAR_6 ;
 int FUNC_2 (int *,struct iova*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 struct iova* FUNC_4 (int *,size_t,int ,int) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (scalar_t__,int ,int ,size_t,int) ;
 size_t FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,struct iova*) ;
 int FUNC_10 (void*) ;

void *FUNC_11(struct tegra_drm *VAR_7, size_t VAR_8, dma_addr_t *VAR_9)
{
 struct iova *VAR_10;
 void *VAR_11;
 gfp_t VAR_12;
 int VAR_13;

 if (VAR_7->domain)
  VAR_8 = FUNC_8(&VAR_7->carveout.domain, VAR_8);
 else
  VAR_8 = FUNC_1(VAR_8);

 VAR_12 = VAR_3 | VAR_6;
 if (!VAR_7->domain) {






  VAR_12 |= VAR_2;
 }

 VAR_11 = (void *)FUNC_3(VAR_12, FUNC_6(VAR_8));
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 if (!VAR_7->domain) {




  *VAR_9 = FUNC_10(VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_4(&VAR_7->carveout.domain,
      VAR_8 >> VAR_7->carveout.shift,
      VAR_7->carveout.limit, 1);
 if (!VAR_10) {
  VAR_13 = -VAR_0;
  goto free_pages;
 }

 *VAR_9 = FUNC_9(&VAR_7->carveout.domain, VAR_10);
 VAR_13 = FUNC_7(VAR_7->domain, *VAR_9, FUNC_10(VAR_11),
   VAR_8, VAR_4 | VAR_5);
 if (VAR_13 < 0)
  goto free_iova;

 return VAR_11;

free_iova:
 FUNC_2(&VAR_7->carveout.domain, VAR_10);
free_pages:
 FUNC_5((unsigned long)VAR_11, FUNC_6(VAR_8));

 return FUNC_0(VAR_13);
}
