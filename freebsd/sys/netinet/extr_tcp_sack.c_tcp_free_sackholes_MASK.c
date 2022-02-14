
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * nexthole; scalar_t__ sack_bytes_rexmit; } ;
struct tcpcb {scalar_t__ snd_numholes; TYPE_1__ sackhint; int snd_holes; int t_inpcb; } ;
struct sackhole {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 struct sackhole* FUNC_2 (int *) ;
 int FUNC_3 (struct tcpcb*,struct sackhole*) ;

void
FUNC_4(struct tcpcb *VAR_0)
{
 struct sackhole *VAR_1;

 FUNC_0(VAR_0->t_inpcb);
 while ((VAR_1 = FUNC_2(&VAR_0->snd_holes)) != ((void*)0))
  FUNC_3(VAR_0, VAR_1);
 VAR_0->sackhint.sack_bytes_rexmit = 0;

 FUNC_1(VAR_0->snd_numholes == 0, ("tp->snd_numholes == 0"));
 FUNC_1(VAR_0->sackhint.nexthole == ((void*)0),
  ("tp->sackhint.nexthole == NULL"));
}
