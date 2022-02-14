
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int id; } ;
typedef TYPE_7__ menucommon_s ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_12__ {int curvalue; } ;
struct TYPE_11__ {int curvalue; } ;
struct TYPE_10__ {int curvalue; } ;
struct TYPE_9__ {int curvalue; } ;
struct TYPE_16__ {TYPE_6__ punkbuster; int list; TYPE_5__ showempty; TYPE_4__ showfull; TYPE_3__ sortkey; TYPE_2__ gametype; TYPE_1__ master; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,int ) ;
 int VAR_6 ;
 int FUNC_10 (char*,int,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 TYPE_8__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static void FUNC_15( void* VAR_14, int VAR_15 ) {
 int VAR_16;

 VAR_16 = ((menucommon_s*)VAR_14)->id;

 if( VAR_15 != VAR_4 && VAR_16 != 138 ) {
  return;
 }

 switch( VAR_16 ) {
 case 137:
  VAR_9.master.curvalue = FUNC_3(VAR_9.master.curvalue);
  FUNC_14( "ui_browserMaster", VAR_9.master.curvalue);
  break;

 case 139:
  FUNC_14( "ui_browserGameType", VAR_9.gametype.curvalue );
  VAR_12 = VAR_9.gametype.curvalue;
  FUNC_7();
  break;

 case 129:
  FUNC_14( "ui_browserSortKey", VAR_9.sortkey.curvalue );
  FUNC_4( VAR_9.sortkey.curvalue );
  FUNC_7();
  break;

 case 130:
  FUNC_14( "ui_browserShowFull", VAR_9.showfull.curvalue );
  VAR_11 = VAR_9.showfull.curvalue;
  FUNC_7();
  break;

 case 131:
  FUNC_14( "ui_browserShowEmpty", VAR_9.showempty.curvalue );
  VAR_10 = VAR_9.showempty.curvalue;
  FUNC_7();
  break;

 case 138:
  if( VAR_15 == VAR_5 ) {
   FUNC_8();
  }
  break;

 case 132:
  FUNC_9( &VAR_9.list, VAR_1 );
  break;

 case 133:
  FUNC_9( &VAR_9.list, VAR_0 );
  break;

 case 142:
  FUNC_6();
  FUNC_2();
  FUNC_11();
  break;

 case 135:
  FUNC_5();
  break;

 case 128:
  FUNC_12();
  break;

 case 140:
  FUNC_13( VAR_13 );
  break;

 case 141:
  FUNC_0();
  break;

 case 134:
  FUNC_1();
  FUNC_7();
  break;

 case 136:
  if (VAR_9.punkbuster.curvalue)
  {
   FUNC_10( "Enable Punkbuster?", VAR_6|VAR_7|VAR_8, 0, VAR_3 );
  }
  else
  {
   FUNC_10( "Disable Punkbuster?", VAR_6|VAR_7|VAR_8, 0, VAR_2 );
  }
  break;
 }
}
