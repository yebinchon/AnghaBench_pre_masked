
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_2__* display_config; TYPE_1__ platform_descriptor; } ;
struct TYPE_4__ {scalar_t__ min_core_set_clock_in_sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 if (FUNC_1(VAR_3->platform_descriptor.platformCaps,
    VAR_0)) {
  uint32_t VAR_4 = VAR_3->display_config->min_core_set_clock_in_sr;
  if (VAR_4 == 0)
   VAR_4 = VAR_2;

  FUNC_0("Setting Deep Sleep Clock: %d\n", VAR_4);

  FUNC_2(VAR_3,
    VAR_1,
    VAR_4);
 }

 return 0;
}
