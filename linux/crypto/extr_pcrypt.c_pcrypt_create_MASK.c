
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_attr_type {int type; int mask; } ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 int FUNC_1 (struct crypto_attr_type*) ;
 struct crypto_attr_type* FUNC_2 (struct rtattr**) ;
 int FUNC_3 (struct crypto_template*,struct rtattr**,int,int) ;

__attribute__((used)) static int FUNC_4(struct crypto_template *VAR_2, struct rtattr **VAR_3)
{
 struct crypto_attr_type *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 switch (VAR_4->type & VAR_4->mask & VAR_0) {
 case 128:
  return FUNC_3(VAR_2, VAR_3, VAR_4->type, VAR_4->mask);
 }

 return -VAR_1;
}
