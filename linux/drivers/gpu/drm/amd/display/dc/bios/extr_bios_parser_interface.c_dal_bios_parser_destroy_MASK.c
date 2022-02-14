
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_bios {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* bios_parser_destroy ) (struct dc_bios**) ;} ;


 int FUNC_0 (struct dc_bios**) ;

void FUNC_1(struct dc_bios **VAR_0)
{
 struct dc_bios *VAR_1 = *VAR_0;

 VAR_1->funcs->bios_parser_destroy(VAR_0);
}
