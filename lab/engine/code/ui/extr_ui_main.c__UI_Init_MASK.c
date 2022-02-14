
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_17__ {double vidHeight; double vidWidth; } ;
struct TYPE_18__ {double yscale; double xscale; double bias; void* (* registerShaderNoMip ) (char*) ;scalar_t__ (* getCVarValue ) (char*) ;void* whiteShader; void* cursor; int * runCinematicFrame; int * drawCinematic; int * stopCinematic; int * playCinematic; int * stopBackgroundTrack; int * startBackgroundTrack; int * registerSound; int * ownerDrawWidth; int * Pause; int * Print; int * Error; int * executeText; int * keynumToStringBuf; int * getBindingBuf; int * setBinding; int * feederSelection; int * feederItemText; int * feederItemImage; int * feederCount; int * ownerDrawHandleKey; int * startLocalSound; int * getOverstrikeMode; int * setOverstrikeMode; int * drawTextWithCursor; int getCVarString; int (* setCVar ) (char*,char*) ;int * getTeamColor; int * runScript; int * ownerDrawVisible; int * getValue; int * ownerDrawItem; int * registerFont; int * renderScene; int * addRefEntityToScene; int * clearScene; int * drawTopBottom; int * drawSides; int * drawRect; int * fillRect; int * modelBounds; int * registerModel; int * textHeight; int * textWidth; int * drawText; int * drawStretchPic; int * drawHandlePic; int * setColor; TYPE_8__ glconfig; } ;
struct TYPE_12__ {int currentServerCinematic; } ;
struct TYPE_16__ {int currentCrosshair; int previewMovie; TYPE_3__ serverStatus; int effectsColor; TYPE_2__* gameTypes; TYPE_1__* mapList; scalar_t__ inGameLoad; scalar_t__ aliasCount; scalar_t__ characterCount; scalar_t__ teamCount; TYPE_9__ uiDC; } ;
struct TYPE_15__ {size_t integer; } ;
struct TYPE_14__ {size_t integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_11__ {int gtEnum; } ;
struct TYPE_10__ {int mapLoadName; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_15 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int * VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_16 (int *,char*,char*,int ) ;
 int FUNC_17 (char*,char*) ;
 int VAR_33 ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (TYPE_8__*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_20 () ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 void* FUNC_21 (char*) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 TYPE_7__ VAR_50 ;
 TYPE_6__ VAR_51 ;
 TYPE_5__ VAR_52 ;
 TYPE_4__ VAR_53 ;
 char* FUNC_22 (char*,int ) ;

void FUNC_23( qboolean VAR_54 ) {
 const char *VAR_55;



 FUNC_15();
 FUNC_7();

 FUNC_1();


 FUNC_19( &VAR_50.uiDC.glconfig );


 VAR_50.uiDC.yscale = VAR_50.uiDC.glconfig.vidHeight * (1.0/480.0);
 VAR_50.uiDC.xscale = VAR_50.uiDC.glconfig.vidWidth * (1.0/640.0);
 if ( VAR_50.uiDC.glconfig.vidWidth * 480 > VAR_50.uiDC.glconfig.vidHeight * 640 ) {

  VAR_50.uiDC.bias = 0.5 * ( VAR_50.uiDC.glconfig.vidWidth - ( VAR_50.uiDC.glconfig.vidHeight * (640.0/480.0) ) );
  VAR_50.uiDC.xscale = VAR_50.uiDC.yscale;
 }
 else {

  VAR_50.uiDC.bias = 0;
 }



 VAR_50.uiDC.registerShaderNoMip = &FUNC_21;
 VAR_50.uiDC.setColor = &VAR_24;
 VAR_50.uiDC.drawHandlePic = &VAR_8;
 VAR_50.uiDC.drawStretchPic = &VAR_41;
 VAR_50.uiDC.drawText = &VAR_4;
 VAR_50.uiDC.textWidth = &VAR_6;
 VAR_50.uiDC.textHeight = &VAR_3;
 VAR_50.uiDC.registerModel = &VAR_44;
 VAR_50.uiDC.modelBounds = &VAR_42;
 VAR_50.uiDC.fillRect = &VAR_13;
 VAR_50.uiDC.drawRect = &VAR_26;
 VAR_50.uiDC.drawSides = &VAR_27;
 VAR_50.uiDC.drawTopBottom = &VAR_28;
 VAR_50.uiDC.clearScene = &VAR_40;
 VAR_50.uiDC.addRefEntityToScene = &VAR_39;
 VAR_50.uiDC.renderScene = &VAR_45;
 VAR_50.uiDC.registerFont = &VAR_43;
 VAR_50.uiDC.ownerDrawItem = &VAR_16;
 VAR_50.uiDC.getValue = &VAR_15;
 VAR_50.uiDC.ownerDrawVisible = &VAR_18;
 VAR_50.uiDC.runScript = &VAR_23;
 VAR_50.uiDC.getTeamColor = &VAR_14;
 VAR_50.uiDC.setCVar = FUNC_17;
 VAR_50.uiDC.getCVarString = VAR_33;
 VAR_50.uiDC.getCVarValue = FUNC_18;
 VAR_50.uiDC.drawTextWithCursor = &VAR_5;
 VAR_50.uiDC.setOverstrikeMode = &VAR_38;
 VAR_50.uiDC.getOverstrikeMode = &VAR_35;
 VAR_50.uiDC.startLocalSound = &VAR_48;
 VAR_50.uiDC.ownerDrawHandleKey = &VAR_17;
 VAR_50.uiDC.feederCount = &VAR_9;
 VAR_50.uiDC.feederItemImage = &VAR_10;
 VAR_50.uiDC.feederItemText = &VAR_11;
 VAR_50.uiDC.feederSelection = &VAR_12;
 VAR_50.uiDC.setBinding = &VAR_37;
 VAR_50.uiDC.getBindingBuf = &VAR_34;
 VAR_50.uiDC.keynumToStringBuf = &VAR_36;
 VAR_50.uiDC.executeText = &VAR_32;
 VAR_50.uiDC.Error = &VAR_0;
 VAR_50.uiDC.Print = &VAR_1;
 VAR_50.uiDC.Pause = &VAR_20;
 VAR_50.uiDC.ownerDrawWidth = &VAR_19;
 VAR_50.uiDC.registerSound = &VAR_46;
 VAR_50.uiDC.startBackgroundTrack = &VAR_47;
 VAR_50.uiDC.stopBackgroundTrack = &VAR_49;
 VAR_50.uiDC.playCinematic = &VAR_21;
 VAR_50.uiDC.stopCinematic = &VAR_25;
 VAR_50.uiDC.drawCinematic = &VAR_7;
 VAR_50.uiDC.runCinematicFrame = &VAR_22;

 FUNC_2(&VAR_50.uiDC);

 FUNC_4();

 VAR_50.uiDC.cursor = FUNC_21( "menu/art/3_cursor2" );
 VAR_50.uiDC.whiteShader = FUNC_21( "white" );

 FUNC_0();

  VAR_50.teamCount = 0;
  VAR_50.characterCount = 0;
  VAR_50.aliasCount = 0;





 FUNC_14("teaminfo.txt");
 FUNC_12();
 FUNC_13("gameinfo.txt");
 FUNC_8();


 VAR_55 = FUNC_6("ui_menuFiles");
 if (VAR_55 == ((void*)0) || VAR_55[0] == '\0') {
  VAR_55 = "ui/menus.txt";
 }







 FUNC_11(VAR_55, VAR_31);
 FUNC_11("ui/ingame.txt", VAR_30);


 FUNC_3();

 FUNC_20();
 FUNC_9(VAR_50.mapList[VAR_51.integer].mapLoadName, VAR_50.gameTypes[VAR_52.integer].gtEnum);

 FUNC_5();
 FUNC_10();


 VAR_50.effectsColor = VAR_29[(int)FUNC_18("color1")-1];
 VAR_50.currentCrosshair = (int)FUNC_18("cg_drawCrosshair") % VAR_2;
 if (VAR_50.currentCrosshair < 0) {
  VAR_50.currentCrosshair = 0;
 }
 FUNC_17("ui_mousePitch", (FUNC_18("m_pitch") >= 0) ? "0" : "1");

 VAR_50.serverStatus.currentServerCinematic = -1;
 VAR_50.previewMovie = -1;

 if (FUNC_18("ui_TeamArenaFirstRun") == 0) {
  FUNC_17("s_volume", "0.8");
  FUNC_17("s_musicvolume", "0.5");
  FUNC_17("ui_TeamArenaFirstRun", "1");
 }

 FUNC_16(((void*)0), "debug_protocol", "", 0 );

 FUNC_17("ui_actualNetGameType", FUNC_22("%d", VAR_53.integer));
}
