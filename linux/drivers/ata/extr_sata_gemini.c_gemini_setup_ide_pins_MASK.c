
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_state {int dummy; } ;
typedef struct pinctrl_state pinctrl ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int FUNC_1 (struct pinctrl_state*) ;
 int FUNC_2 (struct device*,char*) ;
 struct pinctrl_state* FUNC_3 (struct device*) ;
 struct pinctrl_state* FUNC_4 (struct pinctrl_state*,char*) ;
 int FUNC_5 (struct pinctrl_state*,struct pinctrl_state*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct pinctrl *VAR_1;
 struct pinctrl_state *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_2 = FUNC_4(VAR_1, "ide");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_0, "could not select IDE state\n");
  return VAR_3;
 }

 return 0;
}
