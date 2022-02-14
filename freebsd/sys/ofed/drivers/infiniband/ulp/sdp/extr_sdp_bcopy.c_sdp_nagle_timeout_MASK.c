
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_sndptr; } ;
struct socket {TYPE_1__ so_snd; } ;
struct sdp_sock {scalar_t__ state; int nagle_timer; struct socket* socket; scalar_t__ nagle_last_unacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct sdp_sock*) ;
 int FUNC_3 (struct socket*,char*,scalar_t__) ;
 int FUNC_4 (struct sdp_sock*,int ) ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct sdp_sock *VAR_4 = (struct sdp_sock *)VAR_3;
 struct socket *VAR_5 = VAR_4->socket;

 FUNC_3(VAR_5, "last_unacked = %ld\n", VAR_4->nagle_last_unacked);

 if (!FUNC_0(&VAR_4->nagle_timer))
  return;
 FUNC_1(&VAR_4->nagle_timer);

 if (!VAR_4->nagle_last_unacked)
  goto out;
 if (VAR_4->state == VAR_2)
  return;
 VAR_4->nagle_last_unacked = 0;
 FUNC_4(VAR_4, VAR_0);

 FUNC_5(VAR_4->socket);
out:
 if (VAR_5->so_snd.sb_sndptr)
  FUNC_2(&VAR_4->nagle_timer, VAR_1,
      FUNC_6, VAR_4);
}
