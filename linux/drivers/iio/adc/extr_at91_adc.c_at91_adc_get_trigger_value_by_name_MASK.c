
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int id; int name; } ;
struct at91_adc_trigger {scalar_t__ value; int name; } ;
struct at91_adc_state {int trigger_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct at91_adc_state* FUNC_0 (struct iio_dev*) ;
 char* FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
          struct at91_adc_trigger *VAR_4,
          const char *VAR_5)
{
 struct at91_adc_state *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->trigger_number; VAR_7++) {
  char *VAR_8 = FUNC_1(VAR_2,
    "%s-dev%d-%s",
    VAR_3->name,
    VAR_3->id,
    VAR_4[VAR_7].name);
  if (!VAR_8)
   return -VAR_1;

  if (FUNC_3(VAR_5, VAR_8) == 0) {
   FUNC_2(VAR_8);
   if (VAR_4[VAR_7].value == 0)
    return -VAR_0;
   return VAR_4[VAR_7].value;
  }

  FUNC_2(VAR_8);
 }

 return -VAR_0;
}
