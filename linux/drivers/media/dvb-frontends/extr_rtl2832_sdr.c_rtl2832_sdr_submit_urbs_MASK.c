
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_sdr_dev {int urbs_initialized; int urbs_submitted; int * urb_list; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct rtl2832_sdr_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rtl2832_sdr_dev *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->pdev;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->urbs_initialized; VAR_3++) {
  FUNC_0(&VAR_2->dev, "submit urb=%d\n", VAR_3);
  VAR_4 = FUNC_3(VAR_1->urb_list[VAR_3], VAR_0);
  if (VAR_4) {
   FUNC_1(&VAR_2->dev,
    "Could not submit urb no. %d - get them all back\n",
    VAR_3);
   FUNC_2(VAR_1);
   return VAR_4;
  }
  VAR_1->urbs_submitted++;
 }

 return 0;
}
