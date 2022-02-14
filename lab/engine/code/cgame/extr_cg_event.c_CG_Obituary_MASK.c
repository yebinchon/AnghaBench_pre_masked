
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int targetName ;
typedef int gender_t ;
struct TYPE_13__ {int otherEntityNum; int otherEntityNum2; int eventParm; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_14__ {int gender; } ;
typedef TYPE_4__ clientInfo_t ;
typedef int attackerName ;
struct TYPE_19__ {char* killerName; TYPE_2__* snap; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ value; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ gametype; TYPE_4__* clientinfo; } ;
struct TYPE_11__ {int clientNum; scalar_t__* persistant; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (char*,double,int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_5 (char const*,char*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_6 (char*,char*,int) ;
 double VAR_9 ;
 int VAR_10 ;
 TYPE_9__ VAR_11 ;
 TYPE_8__ VAR_12 ;
 TYPE_7__ VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_5__ VAR_15 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char*,...) ;

__attribute__((used)) static void FUNC_10( entityState_t *VAR_16 ) {
 int VAR_17;
 int VAR_18, VAR_19;
 char *VAR_20;
 char *VAR_21;
 const char *VAR_22;
 const char *VAR_23;
 char VAR_24[32];
 char VAR_25[32];
 gender_t VAR_26;
 clientInfo_t *VAR_27;

 VAR_18 = VAR_16->otherEntityNum;
 VAR_19 = VAR_16->otherEntityNum2;
 VAR_17 = VAR_16->eventParm;

 if ( VAR_13.value == 0 ) {
  return;
 }
 if ( VAR_18 < 0 || VAR_18 >= VAR_6 ) {
  FUNC_2( "CG_Obituary: target out of range" );
 }
 VAR_27 = &VAR_15.clientinfo[VAR_18];

 if ( VAR_19 < 0 || VAR_19 >= VAR_6 ) {
  VAR_19 = VAR_2;
  VAR_23 = ((void*)0);
 } else {
  VAR_23 = FUNC_1( VAR_1 + VAR_19 );
 }

 VAR_22 = FUNC_1( VAR_1 + VAR_18 );
 if ( !VAR_22 ) {
  return;
 }
 FUNC_6( VAR_24, FUNC_5( VAR_22, "n" ), sizeof(VAR_24) - 2);
 FUNC_7( VAR_24, VAR_10 );

 VAR_21 = "";



 switch( VAR_17 ) {
 case 132:
  VAR_20 = "suicides";
  break;
 case 151:
  VAR_20 = "cratered";
  break;
 case 152:
  VAR_20 = "was squished";
  break;
 case 128:
  VAR_20 = "sank like a rock";
  break;
 case 133:
  VAR_20 = "melted";
  break;
 case 144:
  VAR_20 = "does a back flip into the lava";
  break;
 case 131:
  VAR_20 = "saw the light";
  break;
 case 129:
  VAR_20 = "was in the wrong place";
  break;
 default:
  VAR_20 = ((void*)0);
  break;
 }

 if (VAR_19 == VAR_18) {
  VAR_26 = VAR_27->gender;
  switch (VAR_17) {





  case 147:
   if ( VAR_26 == VAR_3 )
    VAR_20 = "tripped on her own grenade";
   else if ( VAR_26 == VAR_4 )
    VAR_20 = "tripped on its own grenade";
   else
    VAR_20 = "tripped on his own grenade";
   break;
  case 135:
   if ( VAR_26 == VAR_3 )
    VAR_20 = "blew herself up";
   else if ( VAR_26 == VAR_4 )
    VAR_20 = "blew itself up";
   else
    VAR_20 = "blew himself up";
   break;
  case 139:
   if ( VAR_26 == VAR_3 )
    VAR_20 = "melted herself";
   else if ( VAR_26 == VAR_4 )
    VAR_20 = "melted itself";
   else
    VAR_20 = "melted himself";
   break;
  case 154:
   VAR_20 = "should have used a smaller gun";
   break;
  default:
   if ( VAR_26 == VAR_3 )
    VAR_20 = "killed herself";
   else if ( VAR_26 == VAR_4 )
    VAR_20 = "killed itself";
   else
    VAR_20 = "killed himself";
   break;
  }
 }

 if (VAR_20) {
  FUNC_4( "%s %s.\n", VAR_24, VAR_20);
  return;
 }


 if ( VAR_19 == VAR_11.snap->ps.clientNum ) {
  char *VAR_28;

  if ( VAR_15.gametype < VAR_5 ) {
   VAR_28 = FUNC_9("You tagged %s\n%s place with %i", VAR_24,
    FUNC_3( VAR_11.snap->ps.persistant[VAR_7] + 1 ),
    VAR_11.snap->ps.persistant[VAR_8] );
  } else {
   VAR_28 = FUNC_9("You tagged %s", VAR_24 );
  }





  FUNC_0( VAR_28, VAR_9 * 0.30, VAR_0 );



 }


 if ( !VAR_23 ) {
  VAR_19 = VAR_2;
  FUNC_8( VAR_25, "noname" );
 } else {
  FUNC_6( VAR_25, FUNC_5( VAR_23, "n" ), sizeof(VAR_25) - 2);
  FUNC_7( VAR_25, VAR_10 );

  if ( VAR_18 == VAR_11.snap->ps.clientNum ) {
   FUNC_6( VAR_11.killerName, VAR_25, sizeof( VAR_11.killerName ) );
  }
 }

 if ( VAR_19 != VAR_2 ) {
  switch (VAR_17) {
  case 149:
   VAR_20 = "was caught by";
   break;
  case 150:
   VAR_20 = "was pummeled by";
   break;
  case 142:
   VAR_20 = "was machinegunned by";
   break;
  case 134:
   VAR_20 = "was gunned down by";
   break;
  case 148:
   VAR_20 = "ate";
   VAR_21 = "'s grenade";
   break;
  case 147:
   VAR_20 = "was shredded by";
   VAR_21 = "'s shrapnel";
   break;
  case 136:
   VAR_20 = "ate";
   VAR_21 = "'s rocket";
   break;
  case 135:
   VAR_20 = "almost dodged";
   VAR_21 = "'s rocket";
   break;
  case 140:
   VAR_20 = "was melted by";
   VAR_21 = "'s plasmagun";
   break;
  case 139:
   VAR_20 = "was melted by";
   VAR_21 = "'s plasmagun";
   break;
  case 137:
   VAR_20 = "was railed by";
   break;
  case 143:
   VAR_20 = "was electrocuted by";
   break;
  case 155:
  case 154:
   VAR_20 = "was blasted by";
   VAR_21 = "'s BFG";
   break;
  case 130:
   VAR_20 = "tried to invade";
   VAR_21 = "'s personal space";
   break;
  default:
   VAR_20 = "was killed by";
   break;
  }

  if (VAR_20) {
   FUNC_4( "%s %s %s%s\n",
    VAR_24, VAR_20, VAR_25, VAR_21);
   return;
  }
 }


 FUNC_4( "%s died.\n", VAR_24 );
}
