
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lenovo_drvdata_cptkbd {int fn_lock; int sensitivity; scalar_t__ middlebutton_state; } ;
struct TYPE_2__ {int kobj; } ;
struct hid_device {scalar_t__ product; scalar_t__ type; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lenovo_drvdata_cptkbd* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*,struct lenovo_drvdata_cptkbd*) ;
 int FUNC_4 (struct hid_device*,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,int,int) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_5)
{
 int VAR_6;
 struct lenovo_drvdata_cptkbd *VAR_7;


 if (VAR_5->product == VAR_3
   && VAR_5->type != VAR_2) {
  FUNC_1(VAR_5, "Ignoring keyboard half of device\n");
  return 0;
 }

 VAR_7 = FUNC_0(&VAR_5->dev,
     sizeof(*VAR_7),
     VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_5, "can't alloc keyboard descriptor\n");
  return -VAR_0;
 }
 FUNC_3(VAR_5, VAR_7);





 VAR_6 = FUNC_6(VAR_5, 0x01, 0x03);
 if (VAR_6)
  FUNC_4(VAR_5, "Failed to switch F7/9/11 mode: %d\n", VAR_6);


 VAR_6 = FUNC_6(VAR_5, 0x09, 0x01);
 if (VAR_6)
  FUNC_4(VAR_5, "Failed to switch middle button: %d\n", VAR_6);


 VAR_7->middlebutton_state = 0;
 VAR_7->fn_lock = 1;
 VAR_7->sensitivity = 0x05;
 FUNC_5(VAR_5);

 VAR_6 = FUNC_7(&VAR_5->dev.kobj, &VAR_4);
 if (VAR_6)
  FUNC_4(VAR_5, "Could not create sysfs group: %d\n", VAR_6);

 return 0;
}
