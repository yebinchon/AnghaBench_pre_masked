
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sack_bytes_rexmit; struct sackhole* nexthole; } ;
struct tcpcb {TYPE_1__ sackhint; int t_inpcb; } ;
struct sackhole {int end; int rxmit; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct sackhole* FUNC_2 (struct sackhole*,int ) ;
 int VAR_0 ;

struct sackhole *
FUNC_3(struct tcpcb *VAR_1, int *VAR_2)
{
 struct sackhole *VAR_3 = ((void*)0);

 FUNC_0(VAR_1->t_inpcb);
 *VAR_2 = VAR_1->sackhint.sack_bytes_rexmit;
 VAR_3 = VAR_1->sackhint.nexthole;
 if (VAR_3 == ((void*)0) || FUNC_1(VAR_3->rxmit, VAR_3->end))
  goto out;
 while ((VAR_3 = FUNC_2(VAR_3, VAR_0)) != ((void*)0)) {
  if (FUNC_1(VAR_3->rxmit, VAR_3->end)) {
   VAR_1->sackhint.nexthole = VAR_3;
   break;
  }
 }
out:
 return (VAR_3);
}
