
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct msghdr*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2, struct msghdr *VAR_3,
   size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 int VAR_7 = 0;

 FUNC_2(VAR_6);
 while (FUNC_3(VAR_3)) {
  int VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_8 <= 0) {
   if (VAR_8 == -VAR_1 || VAR_8 == -VAR_0 || !VAR_7)
    VAR_7 = VAR_8;
   goto out;
  }

  VAR_7 += VAR_8;
 }

out:
 FUNC_1(VAR_6);
 FUNC_4(VAR_6);
 return VAR_7;
}
