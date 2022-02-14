
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int sg; } ;
struct hash_ctx {int more; int wait; int req; int result; TYPE_1__ sgl; } ;
struct alg_sock {struct hash_ctx* private; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,size_t) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct sock*,struct hash_ctx*) ;
 int FUNC_8 (struct sock*,struct hash_ctx*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,struct page*,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_13(struct socket *VAR_2, struct page *VAR_3,
        int VAR_4, size_t VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_2->sk;
 struct alg_sock *VAR_8 = FUNC_1(VAR_7);
 struct hash_ctx *VAR_9 = VAR_8->private;
 int VAR_10;

 if (VAR_6 & VAR_1)
  VAR_6 |= VAR_0;

 FUNC_9(VAR_7);
 FUNC_11(VAR_9->sgl.sg, 1);
 FUNC_12(VAR_9->sgl.sg, VAR_3, VAR_5, VAR_4);

 if (!(VAR_6 & VAR_0)) {
  VAR_10 = FUNC_7(VAR_7, VAR_9);
  if (VAR_10)
   goto unlock;
 } else if (!VAR_9->more)
  FUNC_8(VAR_7, VAR_9);

 FUNC_0(&VAR_9->req, VAR_9->sgl.sg, VAR_9->result, VAR_5);

 if (!(VAR_6 & VAR_0)) {
  if (VAR_9->more)
   VAR_10 = FUNC_3(&VAR_9->req);
  else
   VAR_10 = FUNC_2(&VAR_9->req);
 } else {
  if (!VAR_9->more) {
   VAR_10 = FUNC_4(&VAR_9->req);
   VAR_10 = FUNC_6(VAR_10, &VAR_9->wait);
   if (VAR_10)
    goto unlock;
  }

  VAR_10 = FUNC_5(&VAR_9->req);
 }

 VAR_10 = FUNC_6(VAR_10, &VAR_9->wait);
 if (VAR_10)
  goto unlock;

 VAR_9->more = VAR_6 & VAR_0;

unlock:
 FUNC_10(VAR_7);

 return VAR_10 ?: VAR_5;
}
