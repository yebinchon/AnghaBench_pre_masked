
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 int FUNC_3 (struct device*,int ,struct regulator*) ;
 struct regulator* FUNC_4 (struct device*,char const*) ;
 int FUNC_5 (struct regulator*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, const char *VAR_2)
{
 struct regulator *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_1, "Failed to enable %s: %d\n", VAR_2, VAR_4);
  return VAR_4;
 }

 return FUNC_3(VAR_1, VAR_0,
     VAR_3);
}
