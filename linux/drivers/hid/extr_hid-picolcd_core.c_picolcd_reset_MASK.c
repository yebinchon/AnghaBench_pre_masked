
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int status; int lock; } ;
struct hid_report {int maxfield; int * field; } ;
struct hid_device {scalar_t__ product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct picolcd_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct picolcd_data*) ;
 int FUNC_5 (struct picolcd_data*) ;
 struct hid_report* FUNC_6 (int ,struct hid_device*) ;
 int FUNC_7 (struct picolcd_data*) ;
 int FUNC_8 (struct picolcd_data*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct hid_device *VAR_6)
{
 struct picolcd_data *VAR_7 = FUNC_0(VAR_6);
 struct hid_report *VAR_8 = FUNC_6(VAR_4, VAR_6);
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_7 || !VAR_8 || VAR_8->maxfield != 1)
  return -VAR_0;

 FUNC_9(&VAR_7->lock, VAR_9);
 if (VAR_6->product == VAR_5)
  VAR_7->status |= VAR_2;


 FUNC_2(VAR_8->field[0], 0, 1);
 if (VAR_7->status & VAR_3) {
  FUNC_10(&VAR_7->lock, VAR_9);
  return -VAR_0;
 }
 FUNC_1(VAR_6, VAR_8, VAR_1);
 FUNC_10(&VAR_7->lock, VAR_9);

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_8(VAR_7);
 FUNC_7(VAR_7);
 FUNC_4(VAR_7);
 FUNC_5(VAR_7);
 return 0;
}
