
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int member_0; struct opal_key* member_1; } ;
struct opal_key {int dummy; } ;
struct opal_dev {int dev_lock; } ;


 int FUNC_0 (struct opal_step const*) ;
 int FUNC_1 (struct opal_dev*) ;
 int FUNC_2 (struct opal_dev*,struct opal_step const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct opal_dev*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_3, struct opal_key *VAR_4, bool VAR_5)
{

 const struct opal_step VAR_6[] = {
  { VAR_2, VAR_4 },
  { VAR_0, }
 };
 const struct opal_step VAR_7[] = {
  { VAR_1, VAR_4 },
  { VAR_0, }
 };

 int VAR_8;

 FUNC_3(&VAR_3->dev_lock);
 FUNC_5(VAR_3);
 if (VAR_5)
  VAR_8 = FUNC_2(VAR_3, VAR_7,
        FUNC_0(VAR_7));
 else
  VAR_8 = FUNC_2(VAR_3, VAR_6,
        FUNC_0(VAR_6));
 FUNC_4(&VAR_3->dev_lock);





 if (!VAR_8)
  FUNC_1(VAR_3);

 return VAR_8;
}
