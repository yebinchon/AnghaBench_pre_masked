
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct intel_vgpu_type {unsigned int avail_instance; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {void* gvt; } ;


 struct intel_vgpu_type* FUNC_0 (void*,int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;
 int FUNC_2 (struct kobject*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_0,
     struct device *VAR_1, char *VAR_2)
{
 struct intel_vgpu_type *VAR_3;
 unsigned int VAR_4 = 0;
 void *VAR_5 = FUNC_1(VAR_1)->gvt;

 VAR_3 = FUNC_0(VAR_5, FUNC_2(VAR_0));
 if (!VAR_3)
  VAR_4 = 0;
 else
  VAR_4 = VAR_3->avail_instance;

 return FUNC_3(VAR_2, "%u\n", VAR_4);
}
