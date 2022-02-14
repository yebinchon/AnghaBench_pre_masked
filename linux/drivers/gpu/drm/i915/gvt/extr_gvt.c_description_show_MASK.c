
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct intel_vgpu_type {int fence; int weight; int resolution; int high_gm_size; int low_gm_size; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {void* gvt; } ;


 int FUNC_0 (int ) ;
 struct intel_vgpu_type* FUNC_1 (void*,int ) ;
 TYPE_1__* FUNC_2 (struct device*) ;
 int FUNC_3 (struct kobject*) ;
 int FUNC_4 (char*,char*,int,int,int,char*,int) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct kobject *VAR_0, struct device *VAR_1,
  char *VAR_2)
{
 struct intel_vgpu_type *VAR_3;
 void *VAR_4 = FUNC_2(VAR_1)->gvt;

 VAR_3 = FUNC_1(VAR_4, FUNC_3(VAR_0));
 if (!VAR_3)
  return 0;

 return FUNC_4(VAR_2, "low_gm_size: %dMB\nhigh_gm_size: %dMB\n"
         "fence: %d\nresolution: %s\n"
         "weight: %d\n",
         FUNC_0(VAR_3->low_gm_size),
         FUNC_0(VAR_3->high_gm_size),
         VAR_3->fence, FUNC_5(VAR_3->resolution),
         VAR_3->weight);
}
