
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ddc {int pin_clock; } ;
struct dc_link {int ddc; int link_id; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum connector_id { ____Placeholder_connector_id } connector_id ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ddc*) ;
 scalar_t__ FUNC_3 (struct ddc*,int ,int ) ;
 struct ddc* FUNC_4 (int ) ;
 int FUNC_5 (struct ddc**) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

bool FUNC_9(struct dc_link *VAR_5)
{
 enum gpio_result VAR_6;
 uint32_t VAR_7 = 0;
 uint8_t VAR_8 = 0;
 struct ddc *VAR_9;

 enum connector_id VAR_10 =
  FUNC_7(VAR_5->link_id);

 bool VAR_11 =
  ((VAR_10 == VAR_0) ||
  (VAR_10 == VAR_1));

 VAR_9 = FUNC_4(VAR_5->ddc);

 if (!VAR_9) {
  FUNC_1();
  return VAR_11;
 }






 if (VAR_4 != FUNC_3(
  VAR_9, VAR_3, VAR_2)) {
  FUNC_5(&VAR_9);

  return VAR_11;
 }
 do {
  VAR_6 = FUNC_6(VAR_9->pin_clock, &VAR_7);
  FUNC_0(VAR_6 == VAR_4);
  if (VAR_7)
   FUNC_8(1000);
  else
   break;
 } while (VAR_8++ < 3);

 VAR_11 = (VAR_6 == VAR_4) && !VAR_7;

 FUNC_2(VAR_9);

 return VAR_11;
}
