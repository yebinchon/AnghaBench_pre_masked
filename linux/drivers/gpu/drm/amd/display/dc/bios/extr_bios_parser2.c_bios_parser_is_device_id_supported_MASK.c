
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct device_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v1_4; } ;
struct bios_parser {TYPE_2__ object_info_tbl; } ;
struct TYPE_3__ {int supporteddevices; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int FUNC_1 (struct device_id) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(
 struct dc_bios *VAR_0,
 struct device_id VAR_1)
{
 struct bios_parser *VAR_2 = FUNC_0(VAR_0);

 uint32_t VAR_3 = FUNC_1(VAR_1);

 return (FUNC_2(VAR_2->object_info_tbl.v1_4->supporteddevices) &
        VAR_3) != 0;
}
