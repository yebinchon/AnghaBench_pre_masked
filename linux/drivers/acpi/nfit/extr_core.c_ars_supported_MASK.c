
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {unsigned long const cmd_mask; } ;
struct nvdimm_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvdimm_bus_descriptor* FUNC_0 (struct nvdimm_bus*) ;

__attribute__((used)) static bool FUNC_1(struct nvdimm_bus *VAR_3)
{
 struct nvdimm_bus_descriptor *VAR_4 = FUNC_0(VAR_3);
 const unsigned long VAR_5 = 1 << VAR_0 | 1 << VAR_1
  | 1 << VAR_2;

 return (VAR_4->cmd_mask & VAR_5) == VAR_5;
}
