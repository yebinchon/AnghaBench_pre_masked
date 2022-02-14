
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_adc {TYPE_1__* cfg; } ;
struct iio_trigger {int name; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int extsel; scalar_t__ name; } ;
struct TYPE_3__ {TYPE_2__* trigs; } ;


 int VAR_0 ;
 struct stm32_adc* FUNC_0 (struct iio_dev*) ;
 scalar_t__ FUNC_1 (struct iio_trigger*) ;
 scalar_t__ FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
         struct iio_trigger *VAR_2)
{
 struct stm32_adc *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;


 for (VAR_4 = 0; VAR_3->cfg->trigs[VAR_4].name; VAR_4++) {




  if ((FUNC_2(VAR_2) ||
       FUNC_1(VAR_2)) &&
      !FUNC_3(VAR_3->cfg->trigs[VAR_4].name, VAR_2->name)) {
   return VAR_3->cfg->trigs[VAR_4].extsel;
  }
 }

 return -VAR_0;
}
