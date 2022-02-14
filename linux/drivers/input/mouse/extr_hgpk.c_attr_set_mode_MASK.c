
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct input_dev* dev; struct hgpk_data* private; } ;
struct input_dev {int dummy; } ;
struct hgpk_data {int mode; } ;
typedef size_t ssize_t ;
typedef enum hgpk_mode { ____Placeholder_hgpk_mode } hgpk_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct input_dev*,struct input_dev*,int) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct psmouse*,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct psmouse *VAR_5, void *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct hgpk_data *VAR_9 = VAR_5->private;
 enum hgpk_mode VAR_10 = VAR_9->mode;
 enum hgpk_mode VAR_11 = FUNC_0(VAR_7, VAR_8);
 struct input_dev *VAR_12 = VAR_5->dev;
 struct input_dev *VAR_13;
 int VAR_14;

 if (VAR_11 == VAR_2)
  return -VAR_0;

 if (VAR_10 == VAR_11)
  return VAR_8;

 VAR_13 = FUNC_3();
 if (!VAR_13)
  return -VAR_1;

 FUNC_7(VAR_5, VAR_4);


 VAR_9->mode = VAR_11;
 VAR_14 = FUNC_1(VAR_5, 0);
 if (VAR_14)
  goto err_try_restore;

 FUNC_2(VAR_13, VAR_12, VAR_11);

 FUNC_7(VAR_5, VAR_3);

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14)
  goto err_try_restore;

 VAR_5->dev = VAR_13;
 FUNC_6(VAR_12);

 return VAR_8;

err_try_restore:
 FUNC_4(VAR_13);
 VAR_9->mode = VAR_10;
 FUNC_1(VAR_5, 0);

 return VAR_14;
}
