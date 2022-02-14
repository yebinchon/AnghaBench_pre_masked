
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,struct nvdimm*,int ,struct nd_cmd_dimm_flags*,int,int *) ;} ;
struct nvdimm {int dummy; } ;
struct nfit_blk {int dimm_flags; } ;
struct nd_cmd_dimm_flags {scalar_t__ status; int flags; } ;
typedef int flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nd_cmd_dimm_flags*,int ,int) ;
 int FUNC_1 (struct nvdimm_bus_descriptor*,struct nvdimm*,int ,struct nd_cmd_dimm_flags*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct nvdimm_bus_descriptor *VAR_5,
  struct nvdimm *VAR_6, struct nfit_blk *VAR_7)
{
 struct nd_cmd_dimm_flags VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_9 = VAR_5->ndctl(VAR_5, VAR_6, VAR_2, &VAR_8,
   sizeof(VAR_8), ((void*)0));

 if (VAR_9 >= 0 && VAR_8.status == 0)
  VAR_7->dimm_flags = VAR_8.flags;
 else if (VAR_9 == -VAR_0) {

  VAR_7->dimm_flags = VAR_3 | VAR_4;
  VAR_9 = 0;
 } else
  VAR_9 = -VAR_1;

 return VAR_9;
}
