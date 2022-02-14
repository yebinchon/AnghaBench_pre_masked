
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ready; int * pages_entry; int * pages; int num_cpu_pages; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct radeon_device *VAR_0)
{
 if (VAR_0->gart.ready) {

  FUNC_1(VAR_0, 0, VAR_0->gart.num_cpu_pages);
 }
 VAR_0->gart.ready = 0;
 FUNC_2(VAR_0->gart.pages);
 FUNC_2(VAR_0->gart.pages_entry);
 VAR_0->gart.pages = ((void*)0);
 VAR_0->gart.pages_entry = ((void*)0);

 FUNC_0(VAR_0);
}
