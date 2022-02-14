
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_4__ {int parent; } ;
struct iio_dev {TYPE_2__ dev; int id; int name; } ;
struct at91_adc_trigger {int name; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (struct iio_trigger*,struct iio_dev*) ;

__attribute__((used)) static struct iio_trigger *FUNC_3(struct iio_dev *VAR_1,
           struct at91_adc_trigger *VAR_2)
{
 struct iio_trigger *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0("%s-dev%d-%s", VAR_1->name,
     VAR_1->id, VAR_2->name);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->dev.parent = VAR_1->dev.parent;
 FUNC_2(VAR_3, VAR_1);
 VAR_3->ops = &VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return ((void*)0);

 return VAR_3;
}
