
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned long context; int subtype; int type; int first; struct TYPE_8__* next; } ;
typedef TYPE_2__ bot_matchtemplate_t ;
struct TYPE_9__ {char* string; int subtype; int type; TYPE_1__* variables; } ;
typedef TYPE_3__ bot_match_t ;
struct TYPE_7__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_5, bot_match_t *VAR_6, unsigned long int VAR_7)
{
 int VAR_8;
 bot_matchtemplate_t *VAR_9;

 FUNC_0(VAR_6->string, VAR_5, VAR_1);

 while(FUNC_2(VAR_6->string) &&
   VAR_6->string[FUNC_2(VAR_6->string)-1] == '\n')
 {
  VAR_6->string[FUNC_2(VAR_6->string)-1] = '\0';
 }

 for (VAR_9 = VAR_2; VAR_9; VAR_9 = VAR_9->next)
 {
  if (!(VAR_9->context & VAR_7)) continue;

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) VAR_6->variables[VAR_8].offset = -1;

  if (FUNC_1(VAR_9->first, VAR_6))
  {
   VAR_6->type = VAR_9->type;
   VAR_6->subtype = VAR_9->subtype;
   return VAR_4;
  }
 }
 return VAR_3;
}
