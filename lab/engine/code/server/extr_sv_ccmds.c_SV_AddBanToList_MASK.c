
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_14__ {int subnet; scalar_t__ isexception; TYPE_3__ ip; } ;
typedef TYPE_2__ serverBan_t ;
typedef scalar_t__ qboolean ;
typedef TYPE_3__ netadr_t ;
struct TYPE_13__ {TYPE_3__ remoteAddress; } ;
struct TYPE_16__ {TYPE_1__ netchan; } ;
typedef TYPE_4__ client_t ;
typedef int addy2 ;
struct TYPE_17__ {int integer; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__) ;
 scalar_t__ FUNC_5 (TYPE_3__,TYPE_3__,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int) ;
 TYPE_4__* FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_3__*,int*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 TYPE_6__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (char*,char) ;

__attribute__((used)) static void FUNC_13(qboolean VAR_6)
{
 char *VAR_7;
 char VAR_8[VAR_2];
 netadr_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 serverBan_t *VAR_13;


 if ( !VAR_3->integer ) {
  FUNC_3( "Server is not running.\n" );
  return;
 }

 VAR_11 = FUNC_1();

 if(VAR_11 < 2 || VAR_11 > 3)
 {
  FUNC_3 ("Usage: %s (ip[/subnet] | clientnum [subnet])\n", FUNC_2(0));
  return;
 }

 if(VAR_5 >= FUNC_0(VAR_4))
 {
  FUNC_3 ("Error: Maximum number of bans/exceptions exceeded.\n");
  return;
 }

 VAR_7 = FUNC_2(1);

 if(FUNC_12(VAR_7, '.') || FUNC_12(VAR_7, ':'))
 {


  if(FUNC_9(&VAR_9, &VAR_12, VAR_7))
  {
   FUNC_3("Error: Invalid address %s\n", VAR_7);
   return;
  }
 }
 else
 {
  client_t *VAR_14;



  VAR_14 = FUNC_8();

  if(!VAR_14)
  {
   FUNC_3("Error: Playernum %s does not exist.\n", FUNC_2(1));
   return;
  }

  VAR_9 = VAR_14->netchan.remoteAddress;

  if(VAR_11 == 3)
  {
   VAR_12 = FUNC_11(FUNC_2(2));

   if(VAR_9.type == VAR_0)
   {
    if(VAR_12 < 1 || VAR_12 > 32)
     VAR_12 = 32;
   }
   else
   {
    if(VAR_12 < 1 || VAR_12 > 128)
     VAR_12 = 128;
   }
  }
  else
   VAR_12 = (VAR_9.type == VAR_1) ? 128 : 32;
 }

 if(VAR_9.type != VAR_0 && VAR_9.type != VAR_1)
 {
  FUNC_3("Error: Can ban players connected via the internet only.\n");
  return;
 }


 for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  VAR_13 = &VAR_4[VAR_10];

  if(VAR_13->subnet <= VAR_12)
  {
   if((VAR_13->isexception || !VAR_6) && FUNC_5(VAR_13->ip, VAR_9, VAR_13->subnet))
   {
    FUNC_6(VAR_8, FUNC_4(VAR_9), sizeof(VAR_8));

    FUNC_3("Error: %s %s/%d supersedes %s %s/%d\n", VAR_13->isexception ? "Exception" : "Ban",
        FUNC_4(VAR_13->ip), VAR_13->subnet,
        VAR_6 ? "exception" : "ban", VAR_8, VAR_12);
    return;
   }
  }
  if(VAR_13->subnet >= VAR_12)
  {
   if(!VAR_13->isexception && VAR_6 && FUNC_5(VAR_13->ip, VAR_9, VAR_12))
   {
    FUNC_6(VAR_8, FUNC_4(VAR_13->ip), sizeof(VAR_8));

    FUNC_3("Error: %s %s/%d supersedes already existing %s %s/%d\n", VAR_6 ? "Exception" : "Ban",
        FUNC_4(VAR_9), VAR_12,
        VAR_13->isexception ? "exception" : "ban", VAR_8, VAR_13->subnet);
    return;
   }
  }
 }


 VAR_10 = 0;
 while(VAR_10 < VAR_5)
 {
  VAR_13 = &VAR_4[VAR_10];

  if(VAR_13->subnet > VAR_12 && (!VAR_13->isexception || VAR_6) && FUNC_5(VAR_13->ip, VAR_9, VAR_12))
   FUNC_7(VAR_10);
  else
   VAR_10++;
 }

 VAR_4[VAR_5].ip = VAR_9;
 VAR_4[VAR_5].subnet = VAR_12;
 VAR_4[VAR_5].isexception = VAR_6;

 VAR_5++;

 FUNC_10();

 FUNC_3("Added %s: %s/%d\n", VAR_6 ? "ban exception" : "ban",
     FUNC_4(VAR_9), VAR_12);
}
