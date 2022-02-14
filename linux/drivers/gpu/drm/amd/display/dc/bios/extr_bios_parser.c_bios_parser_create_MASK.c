
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_bios {int dummy; } ;
struct bp_init_data {int dummy; } ;
struct bios_parser {struct dc_bios base; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bios_parser*,struct bp_init_data*,int) ;
 int FUNC_2 (struct bios_parser*) ;
 struct bios_parser* FUNC_3 (int,int ) ;

struct dc_bios *FUNC_4(
 struct bp_init_data *VAR_1,
 enum dce_version VAR_2)
{
 struct bios_parser *VAR_3 = ((void*)0);

 VAR_3 = FUNC_3(sizeof(struct bios_parser), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(VAR_3, VAR_1, VAR_2))
  return &VAR_3->base;

 FUNC_2(VAR_3);
 FUNC_0();
 return ((void*)0);
}
