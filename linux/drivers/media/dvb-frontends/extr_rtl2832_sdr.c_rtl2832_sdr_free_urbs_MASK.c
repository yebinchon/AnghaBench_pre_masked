
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_sdr_dev {int urbs_initialized; scalar_t__* urb_list; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rtl2832_sdr_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct rtl2832_sdr_dev *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;
 int VAR_2;

 FUNC_1(VAR_0);

 for (VAR_2 = VAR_0->urbs_initialized - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0->urb_list[VAR_2]) {
   FUNC_0(&VAR_1->dev, "free urb=%d\n", VAR_2);

   FUNC_2(VAR_0->urb_list[VAR_2]);
  }
 }
 VAR_0->urbs_initialized = 0;

 return 0;
}
