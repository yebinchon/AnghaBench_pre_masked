
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct ahash_request {int dummy; } ;
struct hash_ctx {int more; struct ahash_request req; } ;
struct alg_sock {struct hash_ctx* private; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct socket*,int) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ahash_request*,char*) ;
 int FUNC_3 (struct ahash_request*,char*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_1, struct socket *VAR_2, int VAR_3,
         bool VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 struct alg_sock *VAR_6 = FUNC_1(VAR_5);
 struct hash_ctx *VAR_7 = VAR_6->private;
 struct ahash_request *VAR_8 = &VAR_7->req;
 char VAR_9[VAR_0];
 struct sock *VAR_10;
 struct alg_sock *VAR_11;
 struct hash_ctx *VAR_12;
 bool VAR_13;
 int VAR_14;

 FUNC_4(VAR_5);
 VAR_13 = VAR_7->more;
 VAR_14 = VAR_13 ? FUNC_2(VAR_8, VAR_9) : 0;
 FUNC_5(VAR_5);

 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_6->parent, VAR_2, VAR_4);
 if (VAR_14)
  return VAR_14;

 VAR_10 = VAR_2->sk;
 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = VAR_11->private;
 VAR_12->more = VAR_13;

 if (!VAR_13)
  return VAR_14;

 VAR_14 = FUNC_3(&VAR_12->req, VAR_9);
 if (VAR_14) {
  FUNC_6(VAR_10);
  FUNC_7(VAR_10);
 }

 return VAR_14;
}
