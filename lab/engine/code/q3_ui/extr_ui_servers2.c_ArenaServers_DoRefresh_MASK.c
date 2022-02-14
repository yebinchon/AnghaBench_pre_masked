
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ refreshtime; scalar_t__ nextpingtime; size_t numqueriedservers; size_t numfavoriteaddresses; size_t currentping; char** favoriteaddresses; TYPE_1__* pinglist; } ;
struct TYPE_5__ {scalar_t__ realtime; } ;
struct TYPE_4__ {char* adrstr; int start; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,char*,int,int*) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,size_t,char*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 TYPE_2__ VAR_10 ;
 char* FUNC_15 (char*,char*) ;

__attribute__((used)) static void FUNC_16( void )
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 char VAR_15[VAR_3];
 char VAR_16[VAR_4];

 if (VAR_10.realtime < VAR_8.refreshtime)
 {
   if (VAR_9 != VAR_6) {
   if (VAR_9 == VAR_7) {
    if (!FUNC_14(VAR_0)) {
     return;
    }
   }
   if (FUNC_14(FUNC_2()) < 0) {

     return;
   }
   }
 } else if (VAR_9 == VAR_7) {
  if (!FUNC_14(VAR_0)) {

   FUNC_8( VAR_1, "localservers\n" );
   VAR_8.refreshtime = VAR_10.realtime + 5000;
   return;
  }
 }

 if (VAR_10.realtime < VAR_8.nextpingtime)
 {

  return;
 }


 VAR_8.nextpingtime = VAR_10.realtime + 10;


 VAR_14 = FUNC_1();
 for (VAR_11=0; VAR_11<VAR_5; VAR_11++)
 {
  FUNC_10( VAR_11, VAR_15, VAR_3, &VAR_13 );
  if (!VAR_15[0])
  {

   continue;
  }


  for (VAR_12=0; VAR_12<VAR_5; VAR_12++)
   if (!FUNC_6( VAR_15, VAR_8.pinglist[VAR_12].adrstr ))
    break;

  if (VAR_12 < VAR_5)
  {

   if (!VAR_13)
   {
    VAR_13 = VAR_10.realtime - VAR_8.pinglist[VAR_12].start;
    if (VAR_13 < VAR_14)
    {

     continue;
    }
   }

   if (VAR_13 > VAR_14)
   {

    VAR_16[0] = '\0';
    VAR_13 = VAR_14;


    if (VAR_9 == VAR_6) {
     FUNC_5( VAR_16, "hostname", VAR_15 );
     FUNC_5( VAR_16, "game", "???" );
    }
   }
   else
   {
    FUNC_11( VAR_11, VAR_16, VAR_4 );
   }


   FUNC_0( VAR_15, VAR_16, VAR_13 );


   VAR_8.pinglist[VAR_12].adrstr[0] = '\0';
     }


  FUNC_9( VAR_11 );
 }



 if (VAR_9 == VAR_6) {
   VAR_8.numqueriedservers = VAR_8.numfavoriteaddresses;
 } else {
   VAR_8.numqueriedservers = FUNC_14(FUNC_2());
 }






 for (VAR_11=0; VAR_11<VAR_5 && VAR_8.currentping < VAR_8.numqueriedservers; VAR_11++)
 {
  if (FUNC_12() >= VAR_5)
  {

   break;
  }


  for (VAR_12=0; VAR_12<VAR_5; VAR_12++)
   if (!VAR_8.pinglist[VAR_12].adrstr[0])
    break;

  if (VAR_12 >= VAR_5)

   break;



  if (VAR_9 == VAR_6) {
    FUNC_7( VAR_15, VAR_8.favoriteaddresses[VAR_8.currentping] );
  } else {
    FUNC_13(FUNC_2(), VAR_8.currentping, VAR_15, VAR_3 );
  }

  FUNC_7( VAR_8.pinglist[VAR_12].adrstr, VAR_15 );
  VAR_8.pinglist[VAR_12].start = VAR_10.realtime;

  FUNC_8( VAR_2, FUNC_15( "ping %s\n", VAR_15 ) );


  VAR_8.currentping++;
 }

 if (!FUNC_12())
 {

  FUNC_3();
  return;
 }


 FUNC_4();
}
