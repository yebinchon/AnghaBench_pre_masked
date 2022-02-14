
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_usb {scalar_t__ linkstat; int dev; int palmas; struct extcon_dev* edev; } ;
struct extcon_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct extcon_dev*,int ,int) ;
 int FUNC_2 (int ,int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_12, void *VAR_13)
{
 unsigned int VAR_14, VAR_15;
 struct palmas_usb *VAR_16 = VAR_13;
 struct extcon_dev *VAR_17 = VAR_16->edev;

 FUNC_2(VAR_16->palmas, VAR_9,
  VAR_5, &VAR_14);
 FUNC_2(VAR_16->palmas, VAR_9,
  VAR_6, &VAR_15);

 if ((VAR_14 & VAR_8) &&
    (VAR_15 & VAR_8)) {
  FUNC_3(VAR_16->palmas, VAR_9,
   VAR_4,
   VAR_3);
  VAR_16->linkstat = VAR_11;
  FUNC_1(VAR_17, VAR_0, 1);
  FUNC_0(VAR_16->dev, "USB-HOST cable is attached\n");
 } else if ((VAR_14 & VAR_7) &&
    (VAR_15 & VAR_7)) {
  FUNC_3(VAR_16->palmas, VAR_9,
   VAR_4,
   VAR_2);
  VAR_16->linkstat = VAR_10;
  FUNC_1(VAR_17, VAR_0, 0);
  FUNC_0(VAR_16->dev, "USB-HOST cable is detached\n");
 } else if ((VAR_16->linkstat == VAR_11) &&
    (!(VAR_14 & VAR_8))) {
  VAR_16->linkstat = VAR_10;
  FUNC_1(VAR_17, VAR_0, 0);
  FUNC_0(VAR_16->dev, "USB-HOST cable is detached\n");
 } else if ((VAR_16->linkstat == VAR_10) &&
    (VAR_15 & VAR_8)) {
  VAR_16->linkstat = VAR_11;
  FUNC_1(VAR_17, VAR_0, 1);
  FUNC_0(VAR_16->dev, " USB-HOST cable is attached\n");
 }

 return VAR_1;
}
