
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad7606_state {TYPE_1__* bops; } ;
struct TYPE_2__ {int (* write_mask ) (struct ad7606_state*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ad7606_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ad7606_state*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2, int VAR_3)
{
 struct ad7606_state *VAR_4 = FUNC_0(VAR_2);

 return VAR_4->bops->write_mask(VAR_4, VAR_0,
         VAR_1, VAR_3 << 2);
}
