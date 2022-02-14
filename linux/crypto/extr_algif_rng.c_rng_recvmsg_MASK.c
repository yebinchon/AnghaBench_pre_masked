
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct rng_ctx {int drng; } ;
struct msghdr {int dummy; } ;
struct alg_sock {struct rng_ctx* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct alg_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (struct msghdr*,int *,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2, struct msghdr *VAR_3, size_t VAR_4,
         int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 struct alg_sock *VAR_7 = FUNC_0(VAR_6);
 struct rng_ctx *VAR_8 = VAR_7->private;
 int VAR_9 = -VAR_0;
 int VAR_10 = 0;
 u8 VAR_11[VAR_1];

 if (VAR_4 == 0)
  return 0;
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;





 FUNC_3(VAR_11, 0, VAR_4);







 VAR_10 = FUNC_1(VAR_8->drng, VAR_11, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_2(VAR_3, VAR_11, VAR_4);
 FUNC_4(VAR_11, VAR_4);

 return VAR_9 ? VAR_9 : VAR_4;
}
