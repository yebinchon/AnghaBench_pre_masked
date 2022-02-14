
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ snd_numholes; } ;
struct sackhole {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int ,struct sackhole*) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_2, struct sackhole *VAR_3)
{

 FUNC_2(VAR_0, VAR_3);

 VAR_2->snd_numholes--;
 FUNC_1(&VAR_1, 1);

 FUNC_0(VAR_2->snd_numholes >= 0, ("tp->snd_numholes >= 0"));
 FUNC_0(VAR_1 >= 0, ("tcp_sack_globalholes >= 0"));
}
