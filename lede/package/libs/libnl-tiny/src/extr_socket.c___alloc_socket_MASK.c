
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nl_pid; void* nl_family; } ;
struct TYPE_3__ {void* nl_family; } ;
struct nl_sock {int s_fd; TYPE_2__ s_local; int s_seq_next; int s_seq_expect; TYPE_1__ s_peer; struct nl_cb* s_cb; } ;
struct nl_cb {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nl_sock* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct nl_sock*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct nl_sock *FUNC_4(struct nl_cb *VAR_2)
{
 struct nl_sock *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->s_fd = -1;
 VAR_3->s_cb = VAR_2;
 VAR_3->s_local.nl_family = VAR_0;
 VAR_3->s_peer.nl_family = VAR_0;
 VAR_3->s_seq_expect = VAR_3->s_seq_next = FUNC_3(0);
 VAR_3->s_local.nl_pid = FUNC_1();
 if (VAR_3->s_local.nl_pid == VAR_1) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
