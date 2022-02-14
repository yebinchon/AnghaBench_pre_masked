
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct msghdr*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_1, struct msghdr *VAR_2,
       size_t VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 int VAR_6 = 0;

 FUNC_2(VAR_5);
 while (FUNC_3(VAR_2)) {
  int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_7 <= 0) {
   if (VAR_7 == -VAR_0 || !VAR_6)
    VAR_6 = VAR_7;
   goto out;
  }

  VAR_6 += VAR_7;
 }

out:
 FUNC_1(VAR_5);
 FUNC_4(VAR_5);
 return VAR_6;
}
