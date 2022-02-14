
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct dc_bios {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v1_1; } ;
struct bios_parser {TYPE_2__ object_info_tbl; } ;
struct TYPE_3__ {int usConnectorObjectTableOffset; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int FUNC_1 (struct bios_parser*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct dc_bios *VAR_0)
{
 struct bios_parser *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1,
  FUNC_2(VAR_1->object_info_tbl.v1_1->usConnectorObjectTableOffset));
}
