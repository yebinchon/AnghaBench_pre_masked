
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_key {int dummy; } ;
typedef struct opal_key u8 ;
struct opal_step {int member_0; struct opal_key* member_1; } ;
struct opal_dev {int dummy; } ;


 int FUNC_0 (struct opal_step const*) ;
 struct opal_key VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct opal_dev *VAR_4, struct opal_key *VAR_5)
{
 u8 VAR_6 = VAR_0;
 const struct opal_step VAR_7[] = {
  { VAR_3, VAR_5 },
  { VAR_2, &VAR_6 },
  { VAR_1, }
 };

 return FUNC_1(VAR_4, VAR_7, FUNC_0(VAR_7));
}
