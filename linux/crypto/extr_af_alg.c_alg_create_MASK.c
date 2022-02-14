
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_destruct; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *,int) ;
 int FUNC_1 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
        int VAR_12)
{
 struct sock *VAR_13;
 int VAR_14;

 if (VAR_10->type != VAR_5)
  return -VAR_2;
 if (VAR_11 != 0)
  return -VAR_1;

 VAR_14 = -VAR_0;
 VAR_13 = FUNC_0(VAR_9, VAR_4, VAR_3, &VAR_6, VAR_12);
 if (!VAR_13)
  goto out;

 VAR_10->ops = &VAR_7;
 FUNC_1(VAR_10, VAR_13);

 VAR_13->sk_destruct = VAR_8;

 return 0;
out:
 return VAR_14;
}
