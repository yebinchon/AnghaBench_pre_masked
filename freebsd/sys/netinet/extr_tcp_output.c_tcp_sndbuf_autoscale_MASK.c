
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int snd_wnd; scalar_t__ snd_nxt; scalar_t__ snd_una; } ;
struct TYPE_3__ {int sb_flags; int sb_lowat; int sb_hiwat; } ;
struct socket {TYPE_1__ so_snd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,struct socket*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void
FUNC_3(struct tcpcb *VAR_6, struct socket *VAR_7, uint32_t VAR_8)
{
 if (VAR_3 && VAR_7->so_snd.sb_flags & VAR_0) {
  int VAR_9;

  VAR_9 = VAR_4 ? VAR_7->so_snd.sb_lowat : 0;
  if ((VAR_6->snd_wnd / 4 * 5) >= VAR_7->so_snd.sb_hiwat - VAR_9 &&
      FUNC_2(&VAR_7->so_snd) >=
      (VAR_7->so_snd.sb_hiwat / 8 * 7) - VAR_9 &&
      FUNC_2(&VAR_7->so_snd) < VAR_2 &&
      VAR_8 >= (FUNC_2(&VAR_7->so_snd) -
      (VAR_6->snd_nxt - VAR_6->snd_una))) {
   if (!FUNC_1(&VAR_7->so_snd,
       FUNC_0(VAR_7->so_snd.sb_hiwat + VAR_1,
        VAR_2), VAR_7, VAR_5))
    VAR_7->so_snd.sb_flags &= ~VAR_0;
  }
 }
}
