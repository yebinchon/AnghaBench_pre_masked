
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct file {int dummy; } ;
struct alg_sock {struct af_alg_ctx* private; } ;
struct af_alg_ctx {scalar_t__ used; int more; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct file*,struct socket*,int *) ;

__poll_t FUNC_3(struct file *VAR_5, struct socket *VAR_6,
    poll_table *VAR_7)
{
 struct sock *VAR_8 = VAR_6->sk;
 struct alg_sock *VAR_9 = FUNC_1(VAR_8);
 struct af_alg_ctx *VAR_10 = VAR_9->private;
 __poll_t VAR_11;

 FUNC_2(VAR_5, VAR_6, VAR_7);
 VAR_11 = 0;

 if (!VAR_10->more || VAR_10->used)
  VAR_11 |= VAR_0 | VAR_2;

 if (FUNC_0(VAR_8))
  VAR_11 |= VAR_1 | VAR_4 | VAR_3;

 return VAR_11;
}
