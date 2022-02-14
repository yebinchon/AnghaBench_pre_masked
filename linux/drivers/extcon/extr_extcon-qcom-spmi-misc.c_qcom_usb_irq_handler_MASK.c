
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_usb_extcon_info {int debounce_jiffies; int wq_detcable; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct qcom_usb_extcon_info *VAR_4 = VAR_3;

 FUNC_0(VAR_1, &VAR_4->wq_detcable,
      VAR_4->debounce_jiffies);

 return VAR_0;
}
