
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_classdev_flash {int dummy; } ;
struct as3645a {int timeout; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct as3645a*) ;
 struct as3645a* FUNC_2 (struct led_classdev_flash*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev_flash *VAR_0,
         u32 VAR_1)
{
 struct as3645a *VAR_2 = FUNC_2(VAR_0);

 VAR_2->timeout = FUNC_0(VAR_1);

 return FUNC_1(VAR_2);
}
