
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uiOpenTypeFeatures ;
struct feature {int value; } ;


 scalar_t__ FUNC_0 (struct feature*,int const*) ;
 struct feature FUNC_1 (char,char,char,char) ;

int FUNC_2(const uiOpenTypeFeatures *VAR_0, char VAR_1, char VAR_2, char VAR_3, char VAR_4, uint32_t *VAR_5)
{
 const struct feature *VAR_6;
 struct feature VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6 = (const struct feature *) FUNC_0(&VAR_7, VAR_0);
 if (VAR_6 == ((void*)0))
  return 0;
 *VAR_5 = VAR_6->value;
 return 1;
}
