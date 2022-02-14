
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {scalar_t__ family; int dsm_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nfit_mem* FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (char*,char*,int ) ;
 struct nvdimm* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nvdimm *VAR_4 = FUNC_2(VAR_1);
 struct nfit_mem *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->family < 0)
  return -VAR_0;
 return FUNC_1(VAR_3, "%#lx\n", VAR_5->dsm_mask);
}
