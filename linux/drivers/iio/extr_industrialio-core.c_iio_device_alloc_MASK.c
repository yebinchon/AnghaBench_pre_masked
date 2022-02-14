
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bus; int * type; int groups; } ;
struct iio_dev {scalar_t__ id; int buffer_list; TYPE_1__ dev; int channel_attr_list; int info_exist_lock; int mlock; int groups; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct iio_dev*) ;
 struct iio_dev* FUNC_7 (size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

struct iio_dev *FUNC_10(int VAR_5)
{
 struct iio_dev *VAR_6;
 size_t VAR_7;

 VAR_7 = sizeof(struct iio_dev);
 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_7, VAR_1);
  VAR_7 += VAR_5;
 }

 VAR_7 += VAR_1 - 1;

 VAR_6 = FUNC_7(VAR_7, VAR_0);

 if (VAR_6) {
  VAR_6->dev.groups = VAR_6->groups;
  VAR_6->dev.type = &VAR_3;
  VAR_6->dev.bus = &VAR_2;
  FUNC_4(&VAR_6->dev);
  FUNC_2(&VAR_6->dev, (void *)VAR_6);
  FUNC_8(&VAR_6->mlock);
  FUNC_8(&VAR_6->info_exist_lock);
  FUNC_1(&VAR_6->channel_attr_list);

  VAR_6->id = FUNC_5(&VAR_4, 0, 0, VAR_0);
  if (VAR_6->id < 0) {

   FUNC_9("failed to get device id\n");
   FUNC_6(VAR_6);
   return ((void*)0);
  }
  FUNC_3(&VAR_6->dev, "iio:device%d", VAR_6->id);
  FUNC_1(&VAR_6->buffer_list);
 }

 return VAR_6;
}
