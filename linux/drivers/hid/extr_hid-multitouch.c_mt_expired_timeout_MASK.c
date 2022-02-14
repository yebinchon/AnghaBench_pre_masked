
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mt_device {int mt_io_flags; struct hid_device* hdev; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct mt_device* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int VAR_2 ;
 struct mt_device* VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct mt_device *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 struct hid_device *VAR_6 = VAR_5->hdev;





 if (FUNC_3(VAR_1, &VAR_5->mt_io_flags))
  return;
 if (FUNC_4(VAR_0, &VAR_5->mt_io_flags))
  FUNC_2(VAR_6);
 FUNC_0(VAR_1, &VAR_5->mt_io_flags);
}
