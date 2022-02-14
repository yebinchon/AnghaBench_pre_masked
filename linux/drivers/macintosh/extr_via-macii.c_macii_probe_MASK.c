
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ adb_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (VAR_2->adb_type != VAR_1)
  return -VAR_0;

 VAR_3 = VAR_4;

 FUNC_0("adb: Mac II ADB Driver v1.0 for Unified ADB\n");
 return 0;
}
