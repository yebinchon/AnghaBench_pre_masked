
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ktd2692_led_config_data {int movie_max_microamp; int max_brightness; int flash_max_microamp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ktd2692_led_config_data *VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4;

 VAR_2 = VAR_0;
 VAR_3 = FUNC_0(VAR_1->flash_max_microamp)
  / VAR_0;

 do {
  VAR_4 = VAR_3 * VAR_2;
  VAR_2--;
 } while ((VAR_4 > VAR_1->movie_max_microamp) &&
  (VAR_2 > 0));

 VAR_1->max_brightness = VAR_2;
}
