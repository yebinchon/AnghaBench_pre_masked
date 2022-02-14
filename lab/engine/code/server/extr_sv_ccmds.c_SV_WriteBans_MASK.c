
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int writebuf ;
struct TYPE_4__ {int subnet; int ip; int isexception; } ;
typedef TYPE_1__ serverBan_t ;
typedef int filepath ;
typedef int fileHandle_t ;
struct TYPE_5__ {int * string; } ;


 int FUNC_0 (char*,int,char*,int ,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_4;
 fileHandle_t VAR_5;
 char VAR_6[VAR_0];

 if(!VAR_3->string || !*VAR_3->string)
  return;

 FUNC_0(VAR_6, sizeof(VAR_6), "%s/%s", FUNC_2(), *VAR_3->string);

 if((VAR_5 = FUNC_3(VAR_6)))
 {
  char VAR_7[128];
  serverBan_t *VAR_8;

  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   VAR_8 = &VAR_1[VAR_4];

   FUNC_0(VAR_7, sizeof(VAR_7), "%d %s %d\n",
        VAR_8->isexception, FUNC_5(VAR_8->ip), VAR_8->subnet);
   FUNC_4(VAR_7, FUNC_6(VAR_7), VAR_5);
  }

  FUNC_1(VAR_5);
 }
}
