
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int member_0; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct opal_dev*,struct opal_step const*,int ) ;

__attribute__((used)) static int FUNC_1(struct opal_dev *VAR_1)
{
 const struct opal_step VAR_2 = {
  VAR_0,
 };

 return FUNC_0(VAR_1, &VAR_2, 0);
}
