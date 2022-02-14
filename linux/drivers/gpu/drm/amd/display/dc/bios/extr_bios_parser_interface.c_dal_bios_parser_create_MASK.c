
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_bios {int dummy; } ;
struct bp_init_data {int dummy; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;


 struct dc_bios* FUNC_0 (struct bp_init_data*,int) ;
 struct dc_bios* FUNC_1 (struct bp_init_data*,int) ;

struct dc_bios *FUNC_2(
 struct bp_init_data *VAR_0,
 enum dce_version VAR_1)
{
 struct dc_bios *VAR_2 = ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1);


 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
