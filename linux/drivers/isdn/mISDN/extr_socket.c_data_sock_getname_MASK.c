
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_mISDN {int sapi; int tei; int channel; int dev; int family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {int addr; int nr; } ;
struct TYPE_6__ {TYPE_2__ ch; TYPE_1__* dev; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2, struct sockaddr *VAR_3,
    int VAR_4)
{
 struct sockaddr_mISDN *VAR_5 = (struct sockaddr_mISDN *) VAR_3;
 struct sock *VAR_6 = VAR_2->sk;

 if (!FUNC_0(VAR_6)->dev)
  return -VAR_1;

 FUNC_1(VAR_6);

 VAR_5->family = VAR_0;
 VAR_5->dev = FUNC_0(VAR_6)->dev->id;
 VAR_5->channel = FUNC_0(VAR_6)->ch.nr;
 VAR_5->sapi = FUNC_0(VAR_6)->ch.addr & 0xff;
 VAR_5->tei = (FUNC_0(VAR_6)->ch.addr >> 8) & 0xff;
 FUNC_2(VAR_6);
 return sizeof(*VAR_5);
}
