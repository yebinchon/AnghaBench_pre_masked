
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_data {int device_flags; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct rmi_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,void*,int) ;
 int FUNC_3 (struct hid_device*,int ,int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct rmi_data *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_6->device_flags & VAR_2) {



  VAR_7 = FUNC_3(VAR_3, VAR_4[0], VAR_4,
    VAR_5, VAR_0, VAR_1);
 } else {
  VAR_7 = FUNC_2(VAR_3, (void *)VAR_4, VAR_5);
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "failed to write hid report (%d)\n", VAR_7);
  return VAR_7;
 }

 return VAR_7;
}
