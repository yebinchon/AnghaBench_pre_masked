
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_step {int member_0; int * member_1; } ;
struct opal_mbr_data {scalar_t__ enable_disable; int key; } ;
struct opal_dev {int dev_lock; } ;


 int FUNC_0 (struct opal_step const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct opal_dev*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_9,
       struct opal_mbr_data *VAR_10)
{
 u8 VAR_11 = VAR_10->enable_disable == VAR_3 ?
  VAR_4 : VAR_1;

 const struct opal_step VAR_12[] = {
  { VAR_8, &VAR_10->key },
  { VAR_6, &VAR_11 },
  { VAR_5, },
  { VAR_8, &VAR_10->key },
  { VAR_7, &VAR_11 },
  { VAR_5, }
 };
 int VAR_13;

 if (VAR_10->enable_disable != VAR_3 &&
     VAR_10->enable_disable != VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_9->dev_lock);
 FUNC_4(VAR_9);
 VAR_13 = FUNC_1(VAR_9, VAR_12, FUNC_0(VAR_12));
 FUNC_3(&VAR_9->dev_lock);

 return VAR_13;
}
