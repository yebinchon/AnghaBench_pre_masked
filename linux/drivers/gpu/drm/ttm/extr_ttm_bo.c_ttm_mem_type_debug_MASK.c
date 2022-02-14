
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {TYPE_1__* func; int default_caching; int available_caching; int size; int gpu_offset; int flags; int use_type; int has_type; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct drm_printer {int dummy; } ;
struct TYPE_2__ {int (* debug ) (struct ttm_mem_type_manager*,struct drm_printer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_printer*,char*,int ) ;
 int FUNC_1 (struct ttm_mem_type_manager*,struct drm_printer*) ;

__attribute__((used)) static void FUNC_2(struct ttm_bo_device *VAR_1, struct drm_printer *VAR_2,
          int VAR_3)
{
 struct ttm_mem_type_manager *VAR_4 = &VAR_1->man[VAR_3];

 FUNC_0(VAR_2, "    has_type: %d\n", VAR_4->has_type);
 FUNC_0(VAR_2, "    use_type: %d\n", VAR_4->use_type);
 FUNC_0(VAR_2, "    flags: 0x%08X\n", VAR_4->flags);
 FUNC_0(VAR_2, "    gpu_offset: 0x%08llX\n", VAR_4->gpu_offset);
 FUNC_0(VAR_2, "    size: %llu\n", VAR_4->size);
 FUNC_0(VAR_2, "    available_caching: 0x%08X\n", VAR_4->available_caching);
 FUNC_0(VAR_2, "    default_caching: 0x%08X\n", VAR_4->default_caching);
 if (VAR_3 != VAR_0)
  (*VAR_4->func->debug)(VAR_4, VAR_2);
}
