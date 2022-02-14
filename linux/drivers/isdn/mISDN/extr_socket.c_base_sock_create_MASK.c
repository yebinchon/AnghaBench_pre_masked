
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_protocol; int sk_state; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (int *,struct sock*) ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *,int) ;
 int FUNC_3 (struct socket*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int
FUNC_5(struct net *VAR_13, struct socket *VAR_14, int VAR_15, int VAR_16)
{
 struct sock *VAR_17;

 if (VAR_14->type != VAR_7)
  return -VAR_3;
 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_17 = FUNC_2(VAR_13, VAR_6, VAR_4, &VAR_12, VAR_16);
 if (!VAR_17)
  return -VAR_1;

 FUNC_3(VAR_14, VAR_17);
 VAR_14->ops = &VAR_10;
 VAR_14->state = VAR_9;
 FUNC_4(VAR_17, VAR_8);
 VAR_17->sk_protocol = VAR_15;
 VAR_17->sk_state = VAR_5;
 FUNC_1(&VAR_11, VAR_17);

 return 0;
}
