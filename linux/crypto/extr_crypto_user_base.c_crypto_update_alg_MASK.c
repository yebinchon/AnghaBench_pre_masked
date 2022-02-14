
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct crypto_user_alg {int cru_driver_name; int cru_name; } ;
struct crypto_alg {int cra_priority; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct crypto_alg* FUNC_1 (struct crypto_user_alg*,int) ;
 int VAR_5 ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct crypto_alg*,int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct nlattr*) ;
 struct crypto_user_alg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_7, struct nlmsghdr *VAR_8,
        struct nlattr **VAR_9)
{
 struct crypto_alg *VAR_10;
 struct crypto_user_alg *VAR_11 = FUNC_8(VAR_8);
 struct nlattr *VAR_12 = VAR_9[VAR_1];
 FUNC_0(VAR_6);

 if (!FUNC_6(VAR_7, VAR_0))
  return -VAR_4;

 if (!FUNC_9(VAR_11->cru_name) || !FUNC_9(VAR_11->cru_driver_name))
  return -VAR_2;

 if (VAR_12 && !FUNC_10(VAR_11->cru_driver_name))
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_11, 1);
 if (!VAR_10)
  return -VAR_3;

 FUNC_5(&VAR_5);

 FUNC_4(VAR_10, &VAR_6, ((void*)0));

 if (VAR_12)
  VAR_10->cra_priority = FUNC_7(VAR_12);

 FUNC_11(&VAR_5);

 FUNC_2(VAR_10);
 FUNC_3(&VAR_6);

 return 0;
}
