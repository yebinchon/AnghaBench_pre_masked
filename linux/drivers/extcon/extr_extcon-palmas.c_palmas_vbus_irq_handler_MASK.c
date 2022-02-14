
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
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct extcon_dev*,int ,int) ;
 int FUNC_2 (int ,int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct palmas_usb *VAR_9 = VAR_8;
 struct extcon_dev *VAR_10 = VAR_9->edev;
 unsigned int VAR_11;

 FUNC_2(VAR_9->palmas, VAR_4,
  VAR_2, &VAR_11);

 if (VAR_11 & VAR_3) {
  if (VAR_9->linkstat != VAR_6) {
   VAR_9->linkstat = VAR_6;
   FUNC_1(VAR_10, VAR_0, 1);
   FUNC_0(VAR_9->dev, "USB cable is attached\n");
  } else {
   FUNC_0(VAR_9->dev,
    "Spurious connect event detected\n");
  }
 } else if (!(VAR_11 & VAR_3)) {
  if (VAR_9->linkstat == VAR_6) {
   VAR_9->linkstat = VAR_5;
   FUNC_1(VAR_10, VAR_0, 0);
   FUNC_0(VAR_9->dev, "USB cable is detached\n");
  } else {
   FUNC_0(VAR_9->dev,
    "Spurious disconnect event detected\n");
  }
 }

 return VAR_1;
}
