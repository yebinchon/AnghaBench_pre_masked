
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ddc_service {int transaction_type; int dongle_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddc_service*,int ) ;

uint32_t FUNC_1(struct ddc_service *VAR_4)
{
 uint32_t VAR_5 = 0;

 switch (VAR_4->transaction_type) {
 case 129:
  if ((VAR_2 == VAR_4->dongle_type) ||
   (VAR_0 == VAR_4->dongle_type) ||
   (VAR_1 ==
    VAR_4->dongle_type)) {

   VAR_5 = VAR_3;

   VAR_5 =
    FUNC_0(VAR_4, VAR_5);

  } else
   VAR_5 = 0;
  break;
 case 128:
  VAR_5 = VAR_3;
  break;
 default:
  break;
 }
 return VAR_5;
}
