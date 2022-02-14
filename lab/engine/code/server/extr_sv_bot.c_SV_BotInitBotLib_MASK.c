
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DebugPolygonDelete; int DebugPolygonCreate; int DebugLineShow; int DebugLineDelete; int DebugLineCreate; int FS_Seek; int FS_FCloseFile; int FS_Write; int FS_Read; int FS_FOpenFile; int HunkAlloc; int AvailableMemory; int FreeMemory; int GetMemory; int BotClientCommand; int BSPModelMinsMaxsOrigin; int BSPEntityData; int inPVS; int PointContents; int EntityTrace; int Trace; int Print; } ;
typedef TYPE_1__ botlib_import_t ;
typedef int botlib_export_t ;
typedef int bot_debugpoly_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int VAR_22 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_23 ;
 int * VAR_24 ;
 scalar_t__ VAR_25 ;

void FUNC_5(void) {
 botlib_import_t VAR_26;

 if (VAR_25) FUNC_2(VAR_25);
 VAR_23 = FUNC_0("bot_maxdebugpolys");
 VAR_25 = FUNC_3(sizeof(bot_debugpoly_t) * VAR_23);

 VAR_26.Print = VAR_14;
 VAR_26.Trace = VAR_15;
 VAR_26.EntityTrace = VAR_9;
 VAR_26.PointContents = VAR_13;
 VAR_26.inPVS = VAR_16;
 VAR_26.BSPEntityData = VAR_2;
 VAR_26.BSPModelMinsMaxsOrigin = VAR_3;
 VAR_26.BotClientCommand = VAR_1;


 VAR_26.GetMemory = VAR_11;
 VAR_26.FreeMemory = VAR_10;
 VAR_26.AvailableMemory = VAR_22;
 VAR_26.HunkAlloc = VAR_12;


 VAR_26.FS_FOpenFile = VAR_18;
 VAR_26.FS_Read = VAR_19;
 VAR_26.FS_Write = VAR_21;
 VAR_26.FS_FCloseFile = VAR_17;
 VAR_26.FS_Seek = VAR_20;


 VAR_26.DebugLineCreate = VAR_4;
 VAR_26.DebugLineDelete = VAR_5;
 VAR_26.DebugLineShow = VAR_6;


 VAR_26.DebugPolygonCreate = VAR_7;
 VAR_26.DebugPolygonDelete = VAR_8;

 VAR_24 = (botlib_export_t *)FUNC_1( VAR_0, &VAR_26 );
 FUNC_4(VAR_24);
}
