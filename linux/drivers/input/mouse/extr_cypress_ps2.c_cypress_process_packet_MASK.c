
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; struct input_dev* dev; } ;
struct input_mt_pos {int y; int x; } ;
struct input_dev {int dummy; } ;
struct cytp_report_data {int contact_cnt; int middle; int right; int left; struct cytp_contact* contacts; } ;
struct cytp_data {int dummy; } ;
struct cytp_contact {int z; int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct psmouse*,struct cytp_data*,struct cytp_report_data*) ;
 int FUNC_1 (struct input_dev*,int*,struct input_mt_pos*,int,int ) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*) ;

__attribute__((used)) static void FUNC_9(struct psmouse *VAR_8, bool VAR_9)
{
 int VAR_10;
 struct input_dev *VAR_11 = VAR_8->dev;
 struct cytp_data *VAR_12 = VAR_8->private;
 struct cytp_report_data VAR_13;
 struct cytp_contact *VAR_14;
 struct input_mt_pos VAR_15[VAR_6];
 int VAR_16[VAR_6];
 int VAR_17;

 FUNC_0(VAR_8, VAR_12, &VAR_13);

 VAR_17 = VAR_13.contact_cnt;
 if (VAR_17 > VAR_6)
  VAR_17 = VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_17; VAR_10++) {
  VAR_14 = &VAR_13.contacts[VAR_10];
  VAR_15[VAR_10].x = VAR_14->x;
  VAR_15[VAR_10].y = VAR_14->y;
 }

 FUNC_1(VAR_11, VAR_16, VAR_15, VAR_17, 0);

 for (VAR_10 = 0; VAR_10 < VAR_17; VAR_10++) {
  VAR_14 = &VAR_13.contacts[VAR_10];
  FUNC_4(VAR_11, VAR_16[VAR_10]);
  FUNC_3(VAR_11, VAR_7, 1);
  FUNC_6(VAR_11, VAR_0, VAR_14->x);
  FUNC_6(VAR_11, VAR_1, VAR_14->y);
  FUNC_6(VAR_11, VAR_2, VAR_14->z);
 }

 FUNC_5(VAR_11);

 FUNC_2(VAR_11, VAR_13.contact_cnt);

 FUNC_7(VAR_11, VAR_3, VAR_13.left);
 FUNC_7(VAR_11, VAR_5, VAR_13.right);
 FUNC_7(VAR_11, VAR_4, VAR_13.middle);

 FUNC_8(VAR_11);
}
