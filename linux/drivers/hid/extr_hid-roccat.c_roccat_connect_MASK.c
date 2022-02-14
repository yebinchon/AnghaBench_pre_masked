
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roccat_device {unsigned int minor; int exist; int report_size; scalar_t__ cbuf_end; struct hid_device* hid; int cbuf_lock; int readers_lock; int readers; int wait; int dev; } ;
struct hid_device {TYPE_1__* driver; int dev; } ;
struct class {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct class*,int *,int ,int *,char*,char*,int ,unsigned int) ;
 struct roccat_device** VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct roccat_device*) ;
 struct roccat_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;

int FUNC_11(struct class *VAR_7, struct hid_device *VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 struct roccat_device *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_7(sizeof(struct roccat_device), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_9(&VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
  if (VAR_4[VAR_10])
   continue;
  break;
 }

 if (VAR_10 < VAR_3) {
  VAR_4[VAR_10] = VAR_11;
 } else {
  FUNC_10(&VAR_5);
  FUNC_6(VAR_11);
  return -VAR_0;
 }

 VAR_11->dev = FUNC_4(VAR_7, &VAR_8->dev,
   FUNC_2(VAR_6, VAR_10), ((void*)0),
   "%s%s%d", "roccat", VAR_8->driver->name, VAR_10);

 if (FUNC_1(VAR_11->dev)) {
  VAR_4[VAR_10] = ((void*)0);
  FUNC_10(&VAR_5);
  VAR_12 = FUNC_3(VAR_11->dev);
  FUNC_6(VAR_11);
  return VAR_12;
 }

 FUNC_10(&VAR_5);

 FUNC_5(&VAR_11->wait);
 FUNC_0(&VAR_11->readers);
 FUNC_8(&VAR_11->readers_lock);
 FUNC_8(&VAR_11->cbuf_lock);
 VAR_11->minor = VAR_10;
 VAR_11->hid = VAR_8;
 VAR_11->exist = 1;
 VAR_11->cbuf_end = 0;
 VAR_11->report_size = VAR_9;

 return VAR_10;
}
