
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum efi_secureboot_mode { ____Placeholder_efi_secureboot_mode } efi_secureboot_mode ;
struct TYPE_2__ {int secure_boot; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;

bool FUNC_2(void)
{
 static enum efi_secureboot_mode VAR_4;
 static bool VAR_5;

 if (!VAR_5 && FUNC_0(VAR_0)) {
  VAR_4 = VAR_1.secure_boot;

  if (VAR_4 == VAR_3)
   VAR_4 = FUNC_1();
  VAR_5 = 1;
 }

 if (VAR_4 == VAR_2)
  return 1;
 else
  return 0;
}
