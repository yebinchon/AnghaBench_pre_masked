
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roccat_device {int wait; int hid; scalar_t__ open; TYPE_1__* dev; scalar_t__ exist; } ;
struct TYPE_2__ {int class; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct roccat_device** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct roccat_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

void FUNC_7(int VAR_3)
{
 struct roccat_device *VAR_4;

 FUNC_4(&VAR_1);
 VAR_4 = VAR_0[VAR_3];
 FUNC_5(&VAR_1);

 VAR_4->exist = 0;

 FUNC_1(VAR_4->dev->class, FUNC_0(VAR_2, VAR_3));

 FUNC_4(&VAR_1);
 VAR_0[VAR_3] = ((void*)0);
 FUNC_5(&VAR_1);

 if (VAR_4->open) {
  FUNC_2(VAR_4->hid);
  FUNC_6(&VAR_4->wait);
 } else {
  FUNC_3(VAR_4);
 }
}
