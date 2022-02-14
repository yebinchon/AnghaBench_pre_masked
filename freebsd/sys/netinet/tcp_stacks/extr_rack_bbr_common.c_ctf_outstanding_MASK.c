
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ snd_una; scalar_t__ snd_max; } ;



uint32_t
FUNC_0(struct tcpcb *VAR_0)
{
 return(VAR_0->snd_max - VAR_0->snd_una);
}
