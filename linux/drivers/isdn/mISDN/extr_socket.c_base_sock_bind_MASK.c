
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_mISDN {scalar_t__ family; int dev; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_5, struct sockaddr *VAR_6, int VAR_7)
{
 struct sockaddr_mISDN *VAR_8 = (struct sockaddr_mISDN *) VAR_6;
 struct sock *VAR_9 = VAR_5->sk;
 int VAR_10 = 0;

 if (VAR_7 < sizeof(struct sockaddr_mISDN))
  return -VAR_2;

 if (!VAR_8 || VAR_8->family != VAR_0)
  return -VAR_2;

 FUNC_2(VAR_9);

 if (FUNC_0(VAR_9)->dev) {
  VAR_10 = -VAR_1;
  goto done;
 }

 FUNC_0(VAR_9)->dev = FUNC_1(VAR_8->dev);
 if (!FUNC_0(VAR_9)->dev) {
  VAR_10 = -VAR_3;
  goto done;
 }
 VAR_9->sk_state = VAR_4;

done:
 FUNC_3(VAR_9);
 return VAR_10;
}
