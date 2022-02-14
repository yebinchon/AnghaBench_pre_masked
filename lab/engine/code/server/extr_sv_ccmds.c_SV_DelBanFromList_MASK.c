
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isexception; int subnet; int ip; } ;
typedef TYPE_1__ serverBan_t ;
typedef scalar_t__ qboolean ;
typedef int netadr_t ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char*,char) ;

__attribute__((used)) static void FUNC_10(qboolean VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6, VAR_7;
 netadr_t VAR_8;
 char *VAR_9;


 if ( !VAR_0->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if(FUNC_0() != 2)
 {
  FUNC_2 ("Usage: %s (ip[/subnet] | num)\n", FUNC_1(0));
  return;
 }

 VAR_9 = FUNC_1(1);

 if(FUNC_9(VAR_9, '.') || FUNC_9(VAR_9, ':'))
 {
  serverBan_t *VAR_10;

  if(FUNC_6(&VAR_8, &VAR_7, VAR_9))
  {
   FUNC_2("Error: Invalid address %s\n", VAR_9);
   return;
  }

  VAR_4 = 0;

  while(VAR_4 < VAR_2)
  {
   VAR_10 = &VAR_1[VAR_4];

   if(VAR_10->isexception == VAR_3 &&
      VAR_10->subnet >= VAR_7 &&
      FUNC_4(VAR_10->ip, VAR_8, VAR_7))
   {
    FUNC_2("Deleting %s %s/%d\n",
        VAR_3 ? "exception" : "ban",
        FUNC_3(VAR_10->ip), VAR_10->subnet);

    FUNC_5(VAR_4);
   }
   else
    VAR_4++;
  }
 }
 else
 {
  VAR_6 = FUNC_8(FUNC_1(1));

  if(VAR_6 < 1 || VAR_6 > VAR_2)
  {
   FUNC_2("Error: Invalid ban number given\n");
   return;
  }

  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   if(VAR_1[VAR_4].isexception == VAR_3)
   {
    VAR_5++;

    if(VAR_5 == VAR_6)
    {
     FUNC_2("Deleting %s %s/%d\n",
        VAR_3 ? "exception" : "ban",
        FUNC_3(VAR_1[VAR_4].ip), VAR_1[VAR_4].subnet);

     FUNC_5(VAR_4);

     break;
    }
   }
  }
 }

 FUNC_7();
}
