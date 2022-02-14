
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_gvt_mpt {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ hypervisor_type; int dev; struct intel_gvt_mpt* mpt; int initialized; } ;
struct TYPE_3__ {scalar_t__ gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ,void*,int *) ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_7 ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct intel_gvt_mpt *VAR_8)
{
 int VAR_9;
 void *VAR_10;

 if (!VAR_5.initialized)
  return -VAR_1;

 if (VAR_8->type != VAR_2 &&
     VAR_8->type != VAR_3)
  return -VAR_0;


 if (!FUNC_5(VAR_4))
  return -VAR_1;

 VAR_5.mpt = VAR_8;
 VAR_5.hypervisor_type = VAR_8->type;
 VAR_10 = (void *)FUNC_3(VAR_5.dev)->gvt;

 VAR_9 = FUNC_2(VAR_5.dev, VAR_10,
          &VAR_6);
 if (VAR_9 < 0) {
  FUNC_1("Failed to init %s hypervisor module\n",
   VAR_7[VAR_5.hypervisor_type]);
  FUNC_4(VAR_4);
  return -VAR_1;
 }
 FUNC_0("Running with hypervisor %s in host mode\n",
       VAR_7[VAR_5.hypervisor_type]);
 return 0;
}
