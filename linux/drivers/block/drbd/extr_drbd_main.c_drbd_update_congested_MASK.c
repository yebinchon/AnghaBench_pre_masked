
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_wmem_queued; int sk_sndbuf; } ;
struct TYPE_4__ {TYPE_1__* socket; } ;
struct drbd_connection {int flags; TYPE_2__ data; } ;
struct TYPE_3__ {struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct drbd_connection *VAR_1)
{
 struct sock *VAR_2 = VAR_1->data.socket->sk;
 if (VAR_2->sk_wmem_queued > VAR_2->sk_sndbuf * 4 / 5)
  FUNC_0(VAR_0, &VAR_1->flags);
}
