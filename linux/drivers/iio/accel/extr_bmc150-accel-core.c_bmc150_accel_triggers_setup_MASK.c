
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iio_dev {int id; int name; } ;
struct device {int dummy; } ;
struct bmc150_accel_trigger {TYPE_2__* indio_trig; int setup; struct bmc150_accel_data* data; int intr; } ;
struct bmc150_accel_data {struct bmc150_accel_trigger* triggers; int regmap; } ;
struct TYPE_8__ {int setup; int intr; int name; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_7__ {int * ops; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (struct bmc150_accel_data*,int) ;
 TYPE_2__* FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct bmc150_accel_trigger*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
           struct bmc150_accel_data *VAR_5)
{
 struct device *VAR_6 = FUNC_4(VAR_5->regmap);
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct bmc150_accel_trigger *VAR_9 = &VAR_5->triggers[VAR_7];

  VAR_9->indio_trig = FUNC_1(VAR_6,
     VAR_3[VAR_7].name,
             VAR_4->name,
             VAR_4->id);
  if (!VAR_9->indio_trig) {
   VAR_8 = -VAR_1;
   break;
  }

  VAR_9->indio_trig->dev.parent = VAR_6;
  VAR_9->indio_trig->ops = &VAR_2;
  VAR_9->intr = VAR_3[VAR_7].intr;
  VAR_9->data = VAR_5;
  VAR_9->setup = VAR_3[VAR_7].setup;
  FUNC_3(VAR_9->indio_trig, VAR_9);

  VAR_8 = FUNC_2(VAR_9->indio_trig);
  if (VAR_8)
   break;
 }

 if (VAR_8)
  FUNC_0(VAR_5, VAR_7 - 1);

 return VAR_8;
}
