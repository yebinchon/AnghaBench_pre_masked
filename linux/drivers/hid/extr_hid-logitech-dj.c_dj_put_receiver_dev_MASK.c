
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct dj_receiver_dev {int kref; struct hid_device* hidpp; struct hid_device* keyboard; struct hid_device* mouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dj_receiver_dev* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_2)
{
 struct dj_receiver_dev *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_0);

 if (VAR_3->mouse == VAR_2)
  VAR_3->mouse = ((void*)0);
 if (VAR_3->keyboard == VAR_2)
  VAR_3->keyboard = ((void*)0);
 if (VAR_3->hidpp == VAR_2)
  VAR_3->hidpp = ((void*)0);

 FUNC_1(&VAR_3->kref, VAR_1);

 FUNC_3(&VAR_0);
}
