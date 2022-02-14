
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_step {int member_0; int * member_1; } ;
struct opal_mbr_done {scalar_t__ done_flag; int key; } ;
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
 int FUNC_4 (struct opal_dev*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_8,
        struct opal_mbr_done *VAR_9)
{
 u8 VAR_10 = VAR_9->done_flag == VAR_2 ?
  VAR_4 : VAR_1;

 const struct opal_step VAR_11[] = {
  { VAR_7, &VAR_9->key },
  { VAR_6, &VAR_10 },
  { VAR_5, }
 };
 int VAR_12;

 if (VAR_9->done_flag != VAR_2 &&
     VAR_9->done_flag != VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_8->dev_lock);
 FUNC_4(VAR_8);
 VAR_12 = FUNC_1(VAR_8, VAR_11, FUNC_0(VAR_11));
 FUNC_3(&VAR_8->dev_lock);

 return VAR_12;
}
