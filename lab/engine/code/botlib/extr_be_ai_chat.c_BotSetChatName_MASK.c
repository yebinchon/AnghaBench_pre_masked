
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; char* name; } ;
typedef TYPE_1__ bot_chatstate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(int VAR_0, char *VAR_1, int VAR_2)
{
 bot_chatstate_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3) return;
 VAR_3->client = VAR_2;
 FUNC_1(VAR_3->name, 0, sizeof(VAR_3->name));
 FUNC_2(VAR_3->name, VAR_1, sizeof(VAR_3->name)-1);
 VAR_3->name[sizeof(VAR_3->name)-1] = '\0';
}
