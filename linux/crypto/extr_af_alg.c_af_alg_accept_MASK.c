
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int ops; int state; } ;
struct sock {int dummy; } ;
struct alg_sock {unsigned int nokey_refcnt; struct af_alg_type const* type; struct sock* parent; int refcnt; int private; } ;
typedef struct af_alg_type {int (* accept ) (int ,struct sock*) ;int (* accept_nokey ) (int ,struct sock*) ;int ops_nokey; int ops; } const af_alg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct alg_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sock*) ;
 int FUNC_4 (struct sock*,struct socket*) ;
 struct sock* FUNC_5 (int ,int ,int ,int *,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,struct sock*) ;
 int FUNC_10 (int ,struct sock*) ;

int FUNC_11(struct sock *VAR_7, struct socket *VAR_8, bool VAR_9)
{
 struct alg_sock *VAR_10 = FUNC_0(VAR_7);
 const struct af_alg_type *VAR_11;
 struct sock *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 FUNC_1(VAR_7);
 VAR_11 = VAR_10->type;

 VAR_14 = -VAR_0;
 if (!VAR_11)
  goto unlock;

 VAR_12 = FUNC_5(FUNC_8(VAR_7), VAR_4, VAR_3, &VAR_6, VAR_9);
 VAR_14 = -VAR_2;
 if (!VAR_12)
  goto unlock;

 FUNC_7(VAR_8, VAR_12);
 FUNC_4(VAR_12, VAR_8);
 FUNC_3(VAR_7, VAR_12);

 VAR_14 = VAR_11->accept(VAR_10->private, VAR_12);

 VAR_13 = VAR_14 == -VAR_1;
 if (VAR_13 && VAR_11->accept_nokey)
  VAR_14 = VAR_11->accept_nokey(VAR_10->private, VAR_12);

 if (VAR_14)
  goto unlock;

 if (VAR_13 || !VAR_10->refcnt++)
  FUNC_6(VAR_7);
 VAR_10->nokey_refcnt += VAR_13;
 FUNC_0(VAR_12)->parent = VAR_7;
 FUNC_0(VAR_12)->type = VAR_11;
 FUNC_0(VAR_12)->nokey_refcnt = VAR_13;

 VAR_8->ops = VAR_11->ops;
 VAR_8->state = VAR_5;

 if (VAR_13)
  VAR_8->ops = VAR_11->ops_nokey;

 VAR_14 = 0;

unlock:
 FUNC_2(VAR_7);

 return VAR_14;
}
