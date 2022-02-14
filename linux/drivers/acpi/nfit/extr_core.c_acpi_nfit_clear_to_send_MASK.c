
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm {int dummy; } ;
struct nd_cmd_pkg {scalar_t__ nd_family; unsigned int nd_command; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvdimm_bus_descriptor*,struct nvdimm*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct nvdimm_bus_descriptor *VAR_4,
  struct nvdimm *VAR_5, unsigned int VAR_6, void *VAR_7)
{
 struct nd_cmd_pkg *VAR_8 = VAR_7;
 unsigned int VAR_9;

 if (VAR_5 && VAR_6 == VAR_1 &&
   VAR_8->nd_family == VAR_2) {
  VAR_9 = VAR_8->nd_command;
  if ((1 << VAR_9) & VAR_3)
   return -VAR_0;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
