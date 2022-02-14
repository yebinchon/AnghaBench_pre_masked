
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {int reliableSequence; int reliableAcknowledge; int * reliableCommands; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2(const char *VAR_4, qboolean VAR_5)
{
 int VAR_6 = VAR_2.reliableSequence - VAR_2.reliableAcknowledge;





 if ((VAR_5 && VAR_6 > VAR_1) ||
     (!VAR_5 && VAR_6 >= VAR_1))
 {
  if(VAR_3)
   return;
  else
   FUNC_0(VAR_0, "Client command overflow");
 }

 FUNC_1(VAR_2.reliableCommands[++VAR_2.reliableSequence & (VAR_1 - 1)],
     VAR_4, sizeof(*VAR_2.reliableCommands));
}
