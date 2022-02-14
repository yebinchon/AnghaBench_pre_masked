
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct iio_trigger {scalar_t__ id; int dev; int list; int name; struct module* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;

int FUNC_10(struct iio_trigger *VAR_5,
      struct module *VAR_6)
{
 int VAR_7;

 VAR_5->owner = VAR_6;

 VAR_5->id = FUNC_4(&VAR_2, 0, 0, VAR_1);
 if (VAR_5->id < 0)
  return VAR_5->id;


 FUNC_1(&VAR_5->dev, "trigger%ld",
       (unsigned long) VAR_5->id);

 VAR_7 = FUNC_2(&VAR_5->dev);
 if (VAR_7)
  goto error_unregister_id;


 FUNC_7(&VAR_4);
 if (FUNC_0(VAR_5->name)) {
  FUNC_9("Duplicate trigger name '%s'\n", VAR_5->name);
  VAR_7 = -VAR_0;
  goto error_device_del;
 }
 FUNC_6(&VAR_5->list, &VAR_3);
 FUNC_8(&VAR_4);

 return 0;

error_device_del:
 FUNC_8(&VAR_4);
 FUNC_3(&VAR_5->dev);
error_unregister_id:
 FUNC_5(&VAR_2, VAR_5->id);
 return VAR_7;
}
