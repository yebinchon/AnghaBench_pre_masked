
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pa12203001_data {int map; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct pa12203001_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 struct pa12203001_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->map, VAR_0[VAR_3].reg, VAR_0[VAR_3].val);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
