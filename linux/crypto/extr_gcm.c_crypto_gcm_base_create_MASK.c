
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (struct rtattr*) ;
 int FUNC_3 (struct crypto_template*,struct rtattr**,char const*,char const*) ;

__attribute__((used)) static int FUNC_4(struct crypto_template *VAR_0,
      struct rtattr **VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_2(VAR_1[1]);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_1[2]);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
