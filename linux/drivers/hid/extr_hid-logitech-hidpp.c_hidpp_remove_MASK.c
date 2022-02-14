
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidpp_device {int send_mutex; int work; } ;
struct TYPE_2__ {int kobj; } ;
struct hid_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;
 void FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_1)
{
 struct hidpp_device *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return FUNC_2(VAR_1);

 FUNC_4(&VAR_1->dev.kobj, &VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(&VAR_2->work);
 FUNC_3(&VAR_2->send_mutex);
}
