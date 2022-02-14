
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int claimed; int (* hiddev_disconnect ) (struct hid_device*) ;int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;

void FUNC_4(struct hid_device *VAR_4)
{
 FUNC_0(&VAR_4->dev, &VAR_3);
 if (VAR_4->claimed & VAR_2)
  FUNC_1(VAR_4);
 if (VAR_4->claimed & VAR_0)
  VAR_4->hiddev_disconnect(VAR_4);
 if (VAR_4->claimed & VAR_1)
  FUNC_2(VAR_4);
 VAR_4->claimed = 0;
}
