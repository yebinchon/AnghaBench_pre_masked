
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct alg_sock {struct af_alg_ctx* private; } ;
struct af_alg_ctx {int more; scalar_t__ used; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 struct alg_sock* FUNC_2 (struct sock*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sock*) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sock*,long*,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_9(struct sock *VAR_8, unsigned VAR_9)
{
 FUNC_0(VAR_6, VAR_7);
 struct alg_sock *VAR_10 = FUNC_2(VAR_8);
 struct af_alg_ctx *VAR_11 = VAR_10->private;
 long VAR_12;
 int VAR_13 = -VAR_1;

 if (VAR_9 & VAR_3)
  return -VAR_0;

 FUNC_6(VAR_4, VAR_8);

 FUNC_1(FUNC_7(VAR_8), &VAR_6);
 for (;;) {
  if (FUNC_4(VAR_5))
   break;
  VAR_12 = VAR_2;
  if (FUNC_8(VAR_8, &VAR_12, (VAR_11->used || !VAR_11->more),
      &VAR_6)) {
   VAR_13 = 0;
   break;
  }
 }
 FUNC_3(FUNC_7(VAR_8), &VAR_6);

 FUNC_5(VAR_4, VAR_8);

 return VAR_13;
}
