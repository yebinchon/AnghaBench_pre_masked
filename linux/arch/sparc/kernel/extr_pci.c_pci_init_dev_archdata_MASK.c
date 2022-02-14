
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dev_archdata {int numa_node; struct platform_device* op; void* host_controller; void* stc; void* iommu; } ;



__attribute__((used)) static void FUNC_0(struct dev_archdata *VAR_0, void *VAR_1,
      void *VAR_2, void *VAR_3,
      struct platform_device *VAR_4,
      int VAR_5)
{
 VAR_0->iommu = VAR_1;
 VAR_0->stc = VAR_2;
 VAR_0->host_controller = VAR_3;
 VAR_0->op = VAR_4;
 VAR_0->numa_node = VAR_5;
}
