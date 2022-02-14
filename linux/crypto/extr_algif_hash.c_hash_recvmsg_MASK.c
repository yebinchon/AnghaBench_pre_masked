
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct hash_ctx {int result; int wait; int req; scalar_t__ more; } ;
struct alg_sock {struct hash_ctx* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int ) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sock*,struct hash_ctx*) ;
 int FUNC_8 (struct sock*,struct hash_ctx*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct msghdr*,int,size_t) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_1, struct msghdr *VAR_2, size_t VAR_3,
   int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 struct alg_sock *VAR_6 = FUNC_1(VAR_5);
 struct hash_ctx *VAR_7 = VAR_6->private;
 unsigned VAR_8 = FUNC_2(FUNC_5(&VAR_7->req));
 bool VAR_9;
 int VAR_10;

 if (VAR_3 > VAR_8)
  VAR_3 = VAR_8;
 else if (VAR_3 < VAR_8)
  VAR_2->msg_flags |= VAR_0;

 FUNC_9(VAR_5);
 VAR_9 = VAR_7->result;
 VAR_10 = FUNC_7(VAR_5, VAR_7);
 if (VAR_10)
  goto unlock;

 FUNC_0(&VAR_7->req, ((void*)0), VAR_7->result, 0);

 if (!VAR_9 && !VAR_7->more) {
  VAR_10 = FUNC_6(FUNC_4(&VAR_7->req),
          &VAR_7->wait);
  if (VAR_10)
   goto unlock;
 }

 if (!VAR_9 || VAR_7->more) {
  VAR_7->more = 0;
  VAR_10 = FUNC_6(FUNC_3(&VAR_7->req),
          &VAR_7->wait);
  if (VAR_10)
   goto unlock;
 }

 VAR_10 = FUNC_10(VAR_2, VAR_7->result, VAR_3);

unlock:
 FUNC_8(VAR_5, VAR_7);
 FUNC_11(VAR_5);

 return VAR_10 ?: VAR_3;
}
