
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum reboot_mode { ____Placeholder_reboot_mode } reboot_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(enum reboot_mode VAR_1, const char *VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_0);


 if((VAR_3 & 0xffff0000) == 0x7ff00000)
  FUNC_1((VAR_3 & 0xffff) | 0x7ee00000, VAR_0);

 FUNC_2();
}
