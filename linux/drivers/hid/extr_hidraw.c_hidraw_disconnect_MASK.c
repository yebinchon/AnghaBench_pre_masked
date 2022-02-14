
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidraw {int dummy; } ;
struct hid_device {struct hidraw* hidraw; } ;


 int FUNC_0 (struct hidraw*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hid_device *VAR_1)
{
 struct hidraw *VAR_2 = VAR_1->hidraw;

 FUNC_1(&VAR_0);

 FUNC_0(VAR_2, 1);

 FUNC_2(&VAR_0);
}
