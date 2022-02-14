
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {scalar_t__ family; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct nfit_mem* FUNC_1 (struct nvdimm*) ;

__attribute__((used)) static bool FUNC_2(struct nvdimm *VAR_4, unsigned int VAR_5)
{
 struct nfit_mem *VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 && VAR_6->family == VAR_1
   && VAR_5 >= VAR_2
   && VAR_5 <= VAR_3)
  return FUNC_0(VAR_0);
 return 1;
}
