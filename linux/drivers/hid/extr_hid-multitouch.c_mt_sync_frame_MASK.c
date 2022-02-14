
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_device {int mt_io_flags; } ;
struct mt_application {int quirks; scalar_t__ left_button_state; scalar_t__ num_received; scalar_t__ timestamp; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct input_dev*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct mt_device*,struct mt_application*,struct input_dev*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mt_device *VAR_7, struct mt_application *VAR_8,
     struct input_dev *VAR_9)
{
 if (VAR_8->quirks & VAR_6)
  FUNC_1(VAR_9, VAR_1, VAR_0, VAR_8->left_button_state);

 FUNC_2(VAR_9);
 FUNC_1(VAR_9, VAR_2, VAR_3, VAR_8->timestamp);
 FUNC_3(VAR_9);

 FUNC_4(VAR_7, VAR_8, VAR_9);

 VAR_8->num_received = 0;
 VAR_8->left_button_state = 0;

 if (FUNC_6(VAR_4, &VAR_7->mt_io_flags))
  FUNC_5(VAR_5, &VAR_7->mt_io_flags);
 else
  FUNC_0(VAR_5, &VAR_7->mt_io_flags);
 FUNC_0(VAR_4, &VAR_7->mt_io_flags);
}
