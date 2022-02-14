
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (struct rtattr*) ;
 int FUNC_3 (struct crypto_template*,struct rtattr**,char*,char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct crypto_template *VAR_2, struct rtattr **VAR_3)
{
 const char *VAR_4;
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];

 VAR_4 = FUNC_2(VAR_3[1]);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (FUNC_4(VAR_5, VAR_0, "ctr(%s)",
       VAR_4) >= VAR_0)
  return -VAR_1;

 if (FUNC_4(VAR_6, VAR_0, "cbcmac(%s)",
       VAR_4) >= VAR_0)
  return -VAR_1;

 return FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
}
