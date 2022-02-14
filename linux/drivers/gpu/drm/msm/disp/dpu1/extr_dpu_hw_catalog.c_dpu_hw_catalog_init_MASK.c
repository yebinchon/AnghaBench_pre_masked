
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dpu_mdss_cfg {scalar_t__ hwversion; } ;
struct TYPE_3__ {scalar_t__ hw_rev; int (* cfg_init ) (struct dpu_mdss_cfg*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dpu_mdss_cfg* FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct dpu_mdss_cfg*) ;
 struct dpu_mdss_cfg* FUNC_4 (int,int ) ;
 int FUNC_5 (struct dpu_mdss_cfg*) ;

struct dpu_mdss_cfg *FUNC_6(u32 VAR_4)
{
 int VAR_5;
 struct dpu_mdss_cfg *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_2(-VAR_1);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (VAR_3[VAR_5].hw_rev == VAR_4) {
   VAR_3[VAR_5].cfg_init(VAR_6);
   VAR_6->hwversion = VAR_4;
   return VAR_6;
  }
 }

 FUNC_1("unsupported chipset id:%X\n", VAR_4);
 FUNC_3(VAR_6);
 return FUNC_2(-VAR_0);
}
