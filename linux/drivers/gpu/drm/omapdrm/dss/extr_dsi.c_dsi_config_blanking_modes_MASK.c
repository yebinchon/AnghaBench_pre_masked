
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int blanking_mode; int hfp_blanking_mode; int hbp_blanking_mode; int hsa_blanking_mode; } ;
struct dsi_data {TYPE_1__ vm_timings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (struct dsi_data*,int ) ;
 int FUNC_2 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dsi_data *VAR_1)
{
 int VAR_2 = VAR_1->vm_timings.blanking_mode;
 int VAR_3 = VAR_1->vm_timings.hfp_blanking_mode;
 int VAR_4 = VAR_1->vm_timings.hbp_blanking_mode;
 int VAR_5 = VAR_1->vm_timings.hsa_blanking_mode;
 u32 VAR_6;





 VAR_6 = FUNC_1(VAR_1, VAR_0);
 VAR_6 = FUNC_0(VAR_6, VAR_2, 20, 20);
 VAR_6 = FUNC_0(VAR_6, VAR_3, 21, 21);
 VAR_6 = FUNC_0(VAR_6, VAR_4, 22, 22);
 VAR_6 = FUNC_0(VAR_6, VAR_5, 23, 23);
 FUNC_2(VAR_1, VAR_0, VAR_6);
}
