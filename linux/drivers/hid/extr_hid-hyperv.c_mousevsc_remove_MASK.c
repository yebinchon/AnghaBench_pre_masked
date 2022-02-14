
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousevsc_dev {int hid_device; } ;
struct hv_device {int channel; int device; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mousevsc_dev* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (struct mousevsc_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hv_device *VAR_0)
{
 struct mousevsc_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_0->device, 0);
 FUNC_5(VAR_0->channel);
 FUNC_2(VAR_1->hid_device);
 FUNC_1(VAR_1->hid_device);
 FUNC_4(VAR_1);

 return 0;
}
