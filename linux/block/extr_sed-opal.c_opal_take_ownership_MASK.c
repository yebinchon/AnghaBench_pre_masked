
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int member_0; struct opal_key* member_1; } ;
struct opal_key {int dummy; } ;
struct opal_dev {int dev_lock; } ;


 int FUNC_0 (struct opal_step const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct opal_dev*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_6, struct opal_key *VAR_7)
{
 const struct opal_step VAR_8[] = {
  { VAR_5, },
  { VAR_2, },
  { VAR_1, },
  { VAR_4, VAR_7 },
  { VAR_3, VAR_7 },
  { VAR_1, }
 };
 int VAR_9;

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->dev_lock);
 FUNC_4(VAR_6);
 VAR_9 = FUNC_1(VAR_6, VAR_8, FUNC_0(VAR_8));
 FUNC_3(&VAR_6->dev_lock);

 return VAR_9;
}
