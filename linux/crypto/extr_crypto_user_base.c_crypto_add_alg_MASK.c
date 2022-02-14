
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct crypto_user_alg {char* cru_name; char* cru_driver_name; int cru_mask; int cru_type; } ;
struct crypto_alg {int cra_priority; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_2 (struct crypto_user_alg*,int) ;
 struct crypto_alg* FUNC_3 (char const*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct nlattr*) ;
 struct crypto_user_alg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
     struct nlattr **VAR_8)
{
 int VAR_9 = 0;
 const char *VAR_10;
 struct crypto_alg *VAR_11;
 struct crypto_user_alg *VAR_12 = FUNC_8(VAR_7);
 struct nlattr *VAR_13 = VAR_8[VAR_1];

 if (!FUNC_6(VAR_6, VAR_0))
  return -VAR_4;

 if (!FUNC_9(VAR_12->cru_name) || !FUNC_9(VAR_12->cru_driver_name))
  return -VAR_3;

 if (FUNC_10(VAR_12->cru_driver_name))
  VAR_9 = 1;

 if (VAR_13 && !VAR_9)
  return -VAR_3;

 VAR_11 = FUNC_2(VAR_12, VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_11);
  return -VAR_2;
 }

 if (FUNC_10(VAR_12->cru_driver_name))
  VAR_10 = VAR_12->cru_driver_name;
 else
  VAR_10 = VAR_12->cru_name;

 VAR_11 = FUNC_3(VAR_10, VAR_12->cru_type, VAR_12->cru_mask);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_5(&VAR_5);

 if (VAR_13)
  VAR_11->cra_priority = FUNC_7(VAR_13);

 FUNC_11(&VAR_5);

 FUNC_4(VAR_11);

 return 0;
}
