
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct TYPE_2__ {int gpio_gap; int psmode; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct btmrvl_private*) ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (struct btmrvl_private*) ;
 int FUNC_3 (struct btmrvl_private*,int) ;
 int FUNC_4 (struct btmrvl_private*) ;
 int FUNC_5 (struct btmrvl_private*,int ) ;
 struct btmrvl_private* FUNC_6 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_1)
{
 struct btmrvl_private *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->btmrvl_dev.gpio_gap = 0xfffe;

 FUNC_0(VAR_2);

 FUNC_2(VAR_2);

 FUNC_3(VAR_2, 0x01);

 VAR_2->btmrvl_dev.psmode = 1;
 FUNC_1(VAR_2);

 FUNC_4(VAR_2);

 return 0;
}
