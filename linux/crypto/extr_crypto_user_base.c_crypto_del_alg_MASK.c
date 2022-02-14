
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct crypto_user_alg {int cru_driver_name; int cru_name; } ;
struct crypto_instance {int dummy; } ;
struct crypto_alg {int cra_flags; int cra_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct crypto_alg* FUNC_0 (struct crypto_user_alg*,int) ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (struct crypto_instance*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 struct crypto_user_alg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
     struct nlattr **VAR_8)
{
 struct crypto_alg *VAR_9;
 struct crypto_user_alg *VAR_10 = FUNC_4(VAR_7);
 int VAR_11;

 if (!FUNC_3(VAR_6, VAR_0))
  return -VAR_5;

 if (!FUNC_5(VAR_10->cru_name) || !FUNC_5(VAR_10->cru_driver_name))
  return -VAR_3;

 VAR_9 = FUNC_0(VAR_10, 1);
 if (!VAR_9)
  return -VAR_4;






 VAR_11 = -VAR_3;
 if (!(VAR_9->cra_flags & VAR_1))
  goto drop_alg;

 VAR_11 = -VAR_2;
 if (FUNC_6(&VAR_9->cra_refcnt) > 2)
  goto drop_alg;

 VAR_11 = FUNC_2((struct crypto_instance *)VAR_9);

drop_alg:
 FUNC_1(VAR_9);
 return VAR_11;
}
