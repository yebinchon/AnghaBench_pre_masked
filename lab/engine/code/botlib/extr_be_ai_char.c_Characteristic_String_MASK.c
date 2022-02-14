
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* c; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_9__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_6__ {int string; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;


 TYPE_3__* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4(int VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 bot_character_t *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7) return;

 if (!FUNC_1(VAR_3, VAR_4)) return;

 if (VAR_7->c[VAR_4].type == VAR_0)
 {
  FUNC_2(VAR_5, VAR_7->c[VAR_4].value.string, VAR_6-1);
  VAR_5[VAR_6-1] = '\0';
 }
 else
 {
  VAR_2.Print(VAR_1, "characteristic %d is not a string\n", VAR_4);
 }
}
