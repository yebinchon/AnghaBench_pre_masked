
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_attr_type {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 int FUNC_1 (struct crypto_attr_type*) ;
 struct crypto_attr_type* FUNC_2 (struct rtattr**) ;
 int FUNC_3 (struct crypto_template*,struct rtattr**) ;

__attribute__((used)) static int FUNC_4(struct crypto_template *VAR_3, struct rtattr **VAR_4)
{
 struct crypto_attr_type *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if ((VAR_5->type ^ VAR_0) & VAR_1)
  return -VAR_2;

 return FUNC_3(VAR_3, VAR_4);
}
