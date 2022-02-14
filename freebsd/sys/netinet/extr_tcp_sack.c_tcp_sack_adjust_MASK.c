
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_fack; int snd_nxt; int t_inpcb; int snd_holes; } ;
struct sackhole {int end; int start; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct sackhole* FUNC_3 (int *) ;
 struct sackhole* FUNC_4 (struct sackhole*,int ) ;
 int VAR_0 ;

void
FUNC_5(struct tcpcb *VAR_1)
{
 struct sackhole *VAR_2, *VAR_3 = FUNC_3(&VAR_1->snd_holes);

 FUNC_0(VAR_1->t_inpcb);
 if (VAR_3 == ((void*)0))
  return;
 if (FUNC_1(VAR_1->snd_nxt, VAR_1->snd_fack))
  return;





 while ((VAR_2 = FUNC_4(VAR_3, VAR_0)) != ((void*)0)) {
  if (FUNC_2(VAR_1->snd_nxt, VAR_3->end))
   return;
  if (FUNC_1(VAR_1->snd_nxt, VAR_2->start))
   VAR_3 = VAR_2;
  else {
   VAR_1->snd_nxt = VAR_2->start;
   return;
  }
 }
 if (FUNC_2(VAR_1->snd_nxt, VAR_3->end))
  return;
 VAR_1->snd_nxt = VAR_1->snd_fack;
}
