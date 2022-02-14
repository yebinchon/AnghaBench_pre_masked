
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_link {int hpd_gpio; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct dc_link *VAR_0)
{
 uint32_t VAR_1;

 FUNC_1(VAR_0->hpd_gpio);
 FUNC_0(VAR_0->hpd_gpio, &VAR_1);
 FUNC_2(VAR_0->hpd_gpio);

 return VAR_1;
}
