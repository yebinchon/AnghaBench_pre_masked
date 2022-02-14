
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtp_data {int x_size; int y_size; int maxcontacts; int resolution; } ;
struct input_dev {int propbit; int evbit; } ;
struct hidpp_device {int quirks; struct wtp_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hidpp_device *VAR_13,
          struct input_dev *VAR_14)
{
 struct wtp_data *VAR_15 = VAR_13->private_data;

 FUNC_1(VAR_5, VAR_14->evbit);
 FUNC_1(VAR_6, VAR_14->evbit);
 FUNC_0(VAR_8, VAR_14->evbit);
 FUNC_0(VAR_7, VAR_14->evbit);

 FUNC_4(VAR_14, VAR_0, 0, VAR_15->x_size, 0, 0);
 FUNC_2(VAR_14, VAR_0, VAR_15->resolution);
 FUNC_4(VAR_14, VAR_1, 0, VAR_15->y_size, 0, 0);
 FUNC_2(VAR_14, VAR_1, VAR_15->resolution);


 FUNC_4(VAR_14, VAR_2, 0, 50, 0, 0);

 FUNC_5(VAR_14, VAR_6, VAR_3);

 if (VAR_13->quirks & VAR_9)
  FUNC_5(VAR_14, VAR_6, VAR_4);
 else
  FUNC_1(VAR_12, VAR_14->propbit);

 FUNC_3(VAR_14, VAR_15->maxcontacts, VAR_11 |
  VAR_10);
}
