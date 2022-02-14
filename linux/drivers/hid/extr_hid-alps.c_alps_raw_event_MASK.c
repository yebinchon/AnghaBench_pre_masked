
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int product; } ;
struct alps_dev {int dummy; } ;



 struct alps_dev* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct alps_dev*,int *,int) ;
 int FUNC_2 (struct alps_dev*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0,
  struct hid_report *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct alps_dev *VAR_5 = FUNC_0(VAR_0);

 switch (VAR_0->product) {
 case 128:
  VAR_4 = FUNC_1(VAR_5, VAR_2, VAR_3);
  break;
 default:
  VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3);
  break;
 }
 return VAR_4;
}
