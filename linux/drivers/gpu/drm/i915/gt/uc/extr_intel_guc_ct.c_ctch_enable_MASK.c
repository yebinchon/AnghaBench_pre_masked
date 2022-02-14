
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_guc_ct_channel {int enabled; int owner; TYPE_1__* ctbs; int vma; } ;
struct intel_guc {int dummy; } ;
struct TYPE_2__ {int desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct intel_guc*,int ,int ) ;
 int FUNC_4 (struct intel_guc*,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (struct intel_guc*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct intel_guc *VAR_5,
         struct intel_guc_ct_channel *VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2(!VAR_6->vma);

 FUNC_2(VAR_6->enabled);


 VAR_7 = FUNC_6(VAR_5, VAR_6->vma);




 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->ctbs); VAR_9++) {
  FUNC_2((VAR_9 != VAR_1) && (VAR_9 != VAR_0));
  FUNC_5(VAR_6->ctbs[VAR_9].desc,
     VAR_7 + VAR_4/4 * VAR_9 + VAR_4/2,
     VAR_4/4,
     VAR_6->owner);
 }




 VAR_8 = FUNC_4(VAR_5,
         VAR_7 + VAR_4/4 * VAR_0,
         VAR_2);
 if (FUNC_7(VAR_8))
  goto err_out;

 VAR_8 = FUNC_4(VAR_5,
         VAR_7 + VAR_4/4 * VAR_1,
         VAR_3);
 if (FUNC_7(VAR_8))
  goto err_deregister;

 VAR_6->enabled = 1;

 return 0;

err_deregister:
 FUNC_3(VAR_5,
     VAR_6->owner,
     VAR_2);
err_out:
 FUNC_1("CT: can't open channel %d; err=%d\n", VAR_6->owner, VAR_8);
 return VAR_8;
}
