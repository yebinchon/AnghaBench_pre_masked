
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qxl_reloc_info {int dst_offset; int dst_bo; int src_offset; int src_bo; } ;
struct qxl_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct qxl_device*,int ,int) ;
 int FUNC_1 (struct qxl_device*,int ,void*) ;
 int FUNC_2 (struct qxl_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct qxl_device *VAR_1, struct qxl_reloc_info *VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2->dst_bo, VAR_2->dst_offset & VAR_0);
 *(uint64_t *)(VAR_3 + (VAR_2->dst_offset & ~VAR_0)) = FUNC_2(VAR_1,
                 VAR_2->src_bo,
                 VAR_2->src_offset);
 FUNC_1(VAR_1, VAR_2->dst_bo, VAR_3);
}
