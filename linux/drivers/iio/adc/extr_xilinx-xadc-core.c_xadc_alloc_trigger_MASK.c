
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


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (int) ;
 int FUNC_1 (struct iio_dev*) ;
 struct iio_trigger* FUNC_2 (char*,int ,int ,char const*) ;
 int FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (struct iio_trigger*) ;
 int FUNC_5 (struct iio_trigger*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct iio_trigger *FUNC_6(struct iio_dev *VAR_2,
 const char *VAR_3)
{
 struct iio_trigger *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2("%s%d-%s", VAR_2->name,
    VAR_2->id, VAR_3);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_4->dev.parent = VAR_2->dev.parent;
 VAR_4->ops = &VAR_1;
 FUNC_5(VAR_4, FUNC_1(VAR_2));

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto error_free_trig;

 return VAR_4;

error_free_trig:
 FUNC_3(VAR_4);
 return FUNC_0(VAR_5);
}
