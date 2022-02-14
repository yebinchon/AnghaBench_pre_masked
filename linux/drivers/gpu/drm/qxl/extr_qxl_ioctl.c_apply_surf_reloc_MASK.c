
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct qxl_reloc_info {int dst_offset; int dst_bo; TYPE_1__* src_bo; } ;
struct qxl_device {int dummy; } ;
struct TYPE_2__ {int surface_id; int is_primary; } ;


 int VAR_0 ;
 void* FUNC_0 (struct qxl_device*,int ,int) ;
 int FUNC_1 (struct qxl_device*,int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct qxl_device *VAR_1, struct qxl_reloc_info *VAR_2)
{
 uint32_t VAR_3 = 0;
 void *VAR_4;

 if (VAR_2->src_bo && !VAR_2->src_bo->is_primary)
  VAR_3 = VAR_2->src_bo->surface_id;

 VAR_4 = FUNC_0(VAR_1, VAR_2->dst_bo, VAR_2->dst_offset & VAR_0);
 *(uint32_t *)(VAR_4 + (VAR_2->dst_offset & ~VAR_0)) = VAR_3;
 FUNC_1(VAR_1, VAR_2->dst_bo, VAR_4);
}
