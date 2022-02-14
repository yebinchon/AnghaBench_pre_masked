
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ trans_mode; } ;
struct dsi_data {TYPE_1__ vm_timings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dsi_data*,int ) ;
 int FUNC_2 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dsi_data *VAR_2)
{
 bool VAR_3;
 u32 VAR_4;

 if (VAR_2->vm_timings.trans_mode == VAR_1)
  VAR_3 = 1;
 else
  VAR_3 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_4, 1, 9, 9);
 VAR_4 = FUNC_0(VAR_4, 1, 10, 10);
 VAR_4 = FUNC_0(VAR_4, 1, 11, 11);
 VAR_4 = FUNC_0(VAR_4, 1, 15, 15);
 VAR_4 = FUNC_0(VAR_4, VAR_3, 16, 16);
 VAR_4 = FUNC_0(VAR_4, 1, 17, 17);
 VAR_4 = FUNC_0(VAR_4, VAR_3, 18, 18);
 FUNC_2(VAR_2, VAR_0, VAR_4);
}
