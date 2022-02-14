
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_sndbuf; } ;
struct msghdr {int msg_flags; int msg_iter; } ;
struct TYPE_3__ {int * sg; } ;
struct hash_ctx {int more; int wait; int req; int * result; TYPE_1__ sgl; } ;
struct alg_sock {struct hash_ctx* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 struct alg_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct sock*,struct hash_ctx*) ;
 int FUNC_9 (struct sock*,struct hash_ctx*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct msghdr*) ;
 int FUNC_13 (struct sock*) ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_3, struct msghdr *VAR_4,
   size_t VAR_5)
{
 int VAR_6 = VAR_0 * VAR_2;
 struct sock *VAR_7 = VAR_3->sk;
 struct alg_sock *VAR_8 = FUNC_3(VAR_7);
 struct hash_ctx *VAR_9 = VAR_8->private;
 long VAR_10 = 0;
 int VAR_11;

 if (VAR_6 > VAR_7->sk_sndbuf)
  VAR_6 = VAR_7->sk_sndbuf;

 FUNC_11(VAR_7);
 if (!VAR_9->more) {
  if ((VAR_4->msg_flags & VAR_1))
   FUNC_9(VAR_7, VAR_9);

  VAR_11 = FUNC_7(FUNC_5(&VAR_9->req), &VAR_9->wait);
  if (VAR_11)
   goto unlock;
 }

 VAR_9->more = 0;

 while (FUNC_12(VAR_4)) {
  int VAR_12 = FUNC_12(VAR_4);

  if (VAR_12 > VAR_6)
   VAR_12 = VAR_6;

  VAR_12 = FUNC_1(&VAR_9->sgl, &VAR_4->msg_iter, VAR_12);
  if (VAR_12 < 0) {
   VAR_11 = VAR_10 ? 0 : VAR_12;
   goto unlock;
  }

  FUNC_2(&VAR_9->req, VAR_9->sgl.sg, ((void*)0), VAR_12);

  VAR_11 = FUNC_7(FUNC_6(&VAR_9->req),
          &VAR_9->wait);
  FUNC_0(&VAR_9->sgl);
  if (VAR_11)
   goto unlock;

  VAR_10 += VAR_12;
  FUNC_10(&VAR_4->msg_iter, VAR_12);
 }

 VAR_11 = 0;

 VAR_9->more = VAR_4->msg_flags & VAR_1;
 if (!VAR_9->more) {
  VAR_11 = FUNC_8(VAR_7, VAR_9);
  if (VAR_11)
   goto unlock;

  FUNC_2(&VAR_9->req, ((void*)0), VAR_9->result, 0);
  VAR_11 = FUNC_7(FUNC_4(&VAR_9->req),
          &VAR_9->wait);
 }

unlock:
 FUNC_13(VAR_7);

 return VAR_11 ?: VAR_10;
}
