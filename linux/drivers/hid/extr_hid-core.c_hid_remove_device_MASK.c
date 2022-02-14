
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int status; scalar_t__ dev_rsize; int * dev_rdesc; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_1)
{
 if (VAR_1->status & VAR_0) {
  FUNC_0(&VAR_1->dev);
  FUNC_1(VAR_1);
  VAR_1->status &= ~VAR_0;
 }
 FUNC_2(VAR_1->dev_rdesc);
 VAR_1->dev_rdesc = ((void*)0);
 VAR_1->dev_rsize = 0;
}
