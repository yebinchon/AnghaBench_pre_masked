
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_step {int member_0; TYPE_1__* member_1; } ;
struct TYPE_2__ {scalar_t__ who; } ;
struct opal_new_pw {TYPE_1__ new_user_pw; TYPE_1__ session; } ;
struct opal_dev {int dev_lock; } ;


 int FUNC_0 (struct opal_step const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct opal_dev*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_5, struct opal_new_pw *VAR_6)
{
 const struct opal_step VAR_7[] = {
  { VAR_4, &VAR_6->session },
  { VAR_3, &VAR_6->new_user_pw },
  { VAR_2, }
 };
 int VAR_8;

 if (VAR_6->session.who > VAR_1 ||
     VAR_6->new_user_pw.who > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_5->dev_lock);
 FUNC_4(VAR_5);
 VAR_8 = FUNC_1(VAR_5, VAR_7, FUNC_0(VAR_7));
 FUNC_3(&VAR_5->dev_lock);

 return VAR_8;
}
