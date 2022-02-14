
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {int dirty_shutdown; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nfit_mem* FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (char*,char*,int) ;
 struct nvdimm* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nvdimm *VAR_3 = FUNC_2(VAR_0);
 struct nfit_mem *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4->dirty_shutdown);
}
