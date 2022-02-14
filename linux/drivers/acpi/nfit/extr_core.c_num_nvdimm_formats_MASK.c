
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {scalar_t__ memdev_bdw; scalar_t__ memdev_pmem; } ;


 struct nfit_mem* FUNC_0 (struct nvdimm*) ;

__attribute__((used)) static int FUNC_1(struct nvdimm *VAR_0)
{
 struct nfit_mem *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->memdev_pmem)
  VAR_2++;
 if (VAR_1->memdev_bdw)
  VAR_2++;
 return VAR_2;
}
