
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct cp2112_device {int xfer_status; int xfer_avail; struct hid_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hid_device*,int*,int,int ) ;
 int FUNC_2 (struct cp2112_device*,int *) ;
 int FUNC_3 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct cp2112_device *VAR_2)
{
 struct hid_device *VAR_3 = VAR_2->hdev;
 u8 VAR_4[2];
 int VAR_5;

 VAR_4[0] = VAR_0;
 VAR_4[1] = 0x01;
 FUNC_0(&VAR_2->xfer_avail, 0);

 VAR_5 = FUNC_1(VAR_3, VAR_4, 2, VAR_1);
 if (VAR_5 < 0) {
  FUNC_3(VAR_3, "Error requesting status: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2, &VAR_2->xfer_avail);
 if (VAR_5)
  return VAR_5;

 return VAR_2->xfer_status;
}
