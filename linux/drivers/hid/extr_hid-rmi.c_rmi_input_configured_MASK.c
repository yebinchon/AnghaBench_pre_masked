
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct input_dev* input; } ;
struct rmi_data {int device_flags; int flags; TYPE_1__ xport; } ;
struct input_dev {int dummy; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 struct rmi_data* FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct hid_device*,int ) ;
 int FUNC_9 (struct hid_device*,int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct hid_device *VAR_3, struct hid_input *VAR_4)
{
 struct rmi_data *VAR_5 = FUNC_4(VAR_3);
 struct input_dev *VAR_6 = VAR_4->input;
 int VAR_7 = 0;

 if (!(VAR_5->device_flags & VAR_0))
  return 0;

 VAR_5->xport.input = VAR_6;

 FUNC_1(VAR_3, "Opening low level driver\n");
 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7)
  return VAR_7;


 FUNC_2(VAR_3);

 VAR_7 = FUNC_8(VAR_3, VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "failed to set rmi mode\n");
  goto exit;
 }

 VAR_7 = FUNC_9(VAR_3, 0);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "failed to set page select to 0.\n");
  goto exit;
 }

 VAR_7 = FUNC_7(&VAR_5->xport);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "failed to register transport driver\n");
  goto exit;
 }

 FUNC_10(VAR_2, &VAR_5->flags);

exit:
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 return VAR_7;
}
