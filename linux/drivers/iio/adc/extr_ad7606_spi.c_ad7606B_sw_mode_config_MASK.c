
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int channels; } ;
struct ad7606_state {unsigned long* oversampling_avail; TYPE_1__* bops; int * write_os; int write_scale; int num_os_ratios; TYPE_2__* gpio_os; } ;
struct TYPE_4__ {int info; int desc; } ;
struct TYPE_3__ {int (* reg_write ) (struct ad7606_state*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,unsigned long*) ;
 struct ad7606_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct ad7606_state*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6)
{
 struct ad7606_state *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8[3] = {1};







 if (VAR_7->gpio_os) {
  FUNC_1(FUNC_0(VAR_8),
          VAR_7->gpio_os->desc, VAR_7->gpio_os->info, VAR_8);
 }

 VAR_7->oversampling_avail = VAR_2;
 VAR_7->num_os_ratios = FUNC_0(VAR_2);

 VAR_7->write_scale = VAR_4;
 VAR_7->write_os = &VAR_3;


 VAR_7->bops->reg_write(VAR_7,
       VAR_0,
       VAR_1);





 VAR_6->channels = VAR_5;

 return 0;
}
