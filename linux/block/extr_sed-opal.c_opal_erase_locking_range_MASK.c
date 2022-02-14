
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int member_0; struct opal_session_info* member_1; } ;
struct opal_session_info {int dummy; } ;
struct opal_dev {int dev_lock; } ;


 int FUNC_0 (struct opal_step const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct opal_dev*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_3,
        struct opal_session_info *VAR_4)
{
 const struct opal_step VAR_5[] = {
  { VAR_2, VAR_4 },
  { VAR_1, VAR_4 },
  { VAR_0, }
 };
 int VAR_6;

 FUNC_2(&VAR_3->dev_lock);
 FUNC_4(VAR_3);
 VAR_6 = FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_5));
 FUNC_3(&VAR_3->dev_lock);

 return VAR_6;
}
