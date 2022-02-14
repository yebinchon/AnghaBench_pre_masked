
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_dump {scalar_t__ dump_registered; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {scalar_t__ registered_regions; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fw_dump *VAR_3)
{
 s64 VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, 0, 0);
 if (VAR_4) {
  FUNC_1("Failed to un-register - unexpected Error(%lld).\n", VAR_4);
  return -VAR_0;
 }

 VAR_2->registered_regions = 0;
 VAR_3->dump_registered = 0;
 return 0;
}
