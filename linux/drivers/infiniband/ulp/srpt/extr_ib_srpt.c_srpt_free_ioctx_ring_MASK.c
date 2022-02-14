
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_ioctx {int dummy; } ;
struct srpt_device {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct srpt_ioctx**) ;
 int FUNC_1 (struct srpt_device*,struct srpt_ioctx*,struct kmem_cache*,int) ;

__attribute__((used)) static void FUNC_2(struct srpt_ioctx **VAR_0,
     struct srpt_device *VAR_1, int VAR_2,
     struct kmem_cache *VAR_3,
     enum dma_data_direction VAR_4)
{
 int VAR_5;

 if (!VAR_0)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  FUNC_1(VAR_1, VAR_0[VAR_5], VAR_3, VAR_4);
 FUNC_0(VAR_0);
}
