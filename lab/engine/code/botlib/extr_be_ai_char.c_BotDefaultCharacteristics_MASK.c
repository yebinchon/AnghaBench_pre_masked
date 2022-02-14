
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* c; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_6__ {char* string; int integer; int _float; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(bot_character_t *VAR_4, bot_character_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  if (VAR_4->c[VAR_6].type) continue;

  if (VAR_5->c[VAR_6].type == VAR_0)
  {
   VAR_4->c[VAR_6].type = VAR_0;
   VAR_4->c[VAR_6].value._float = VAR_5->c[VAR_6].value._float;
  }
  else if (VAR_5->c[VAR_6].type == VAR_1)
  {
   VAR_4->c[VAR_6].type = VAR_1;
   VAR_4->c[VAR_6].value.integer = VAR_5->c[VAR_6].value.integer;
  }
  else if (VAR_5->c[VAR_6].type == VAR_2)
  {
   VAR_4->c[VAR_6].type = VAR_2;
   VAR_4->c[VAR_6].value.string = (char *) FUNC_0(FUNC_2(VAR_5->c[VAR_6].value.string)+1);
   FUNC_1(VAR_4->c[VAR_6].value.string, VAR_5->c[VAR_6].value.string);
  }
 }
}
