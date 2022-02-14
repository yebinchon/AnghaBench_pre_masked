
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad7606_state {TYPE_2__* chip_info; TYPE_1__* gpio_os; } ;
struct TYPE_4__ {scalar_t__ os_req_reset; } ;
struct TYPE_3__ {int info; int desc; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct ad7606_state*) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 struct ad7606_state* FUNC_4 (struct iio_dev*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1, int VAR_2)
{
 struct ad7606_state *VAR_3 = FUNC_4(VAR_1);
 FUNC_1(VAR_0, 3);

 VAR_0[0] = VAR_2;

 FUNC_3(FUNC_0(VAR_0), VAR_3->gpio_os->desc,
         VAR_3->gpio_os->info, VAR_0);


 if (VAR_3->chip_info->os_req_reset)
  FUNC_2(VAR_3);

 return 0;
}
