
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
typedef int cinematics_t ;
struct TYPE_9__ {size_t currentHandle; scalar_t__* file; } ;
struct TYPE_8__ {scalar_t__ ROQSize; int holdAtEnd; int alterGameState; int playonwalls; int silent; int shader; int status; int iFile; int CIN_WIDTH; int CIN_HEIGHT; scalar_t__* fileName; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 size_t FUNC_0 () ;
 int FUNC_1 (size_t,int,int,int,int) ;
 int FUNC_2 (size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__*,int *,int ) ;
 int FUNC_8 (scalar_t__*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 TYPE_4__ VAR_13 ;
 TYPE_3__* VAR_14 ;
 TYPE_2__* VAR_15 ;
 TYPE_1__ VAR_16 ;
 size_t VAR_17 ;
 int FUNC_12 () ;
 int VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int FUNC_13 (scalar_t__*,char*) ;
 int FUNC_14 (scalar_t__*,char*) ;
 int * FUNC_15 (char const*,char*) ;
 scalar_t__ VAR_21 ;

int FUNC_16( const char *VAR_22, int VAR_23, int VAR_24, int VAR_25, int VAR_26, int VAR_27 ) {
 unsigned short VAR_28;
 char VAR_29[VAR_9];
 int VAR_30;

 if (FUNC_15(VAR_22, "/") == ((void*)0) && FUNC_15(VAR_22, "\\") == ((void*)0)) {
  FUNC_5 (VAR_29, sizeof(VAR_29), "video/%s", VAR_22);
 } else {
  FUNC_5 (VAR_29, sizeof(VAR_29), "%s", VAR_22);
 }

 if (!(VAR_27 & VAR_5)) {
  for ( VAR_30 = 0 ; VAR_30 < VAR_10 ; VAR_30++ ) {
   if (!FUNC_13(VAR_14[VAR_30].fileName, VAR_29) ) {
    return VAR_30;
   }
  }
 }

 FUNC_3("CIN_PlayCinematic( %s )\n", VAR_22);

 FUNC_4(&VAR_13, 0, sizeof(cinematics_t) );
 VAR_17 = FUNC_0();

 VAR_13.currentHandle = VAR_17;

 FUNC_14(VAR_14[VAR_17].fileName, VAR_29);

 VAR_14[VAR_17].ROQSize = 0;
 VAR_14[VAR_17].ROQSize = FUNC_7 (VAR_14[VAR_17].fileName, &VAR_14[VAR_17].iFile, VAR_18);

 if (VAR_14[VAR_17].ROQSize<=0) {
  FUNC_3("play(%s), ROQSize<=0\n", VAR_22);
  VAR_14[VAR_17].fileName[0] = 0;
  return -1;
 }

 FUNC_1(VAR_17, VAR_23, VAR_24, VAR_25, VAR_26);
 FUNC_2(VAR_17, (VAR_27 & VAR_2)!=0);

 VAR_14[VAR_17].CIN_HEIGHT = VAR_6;
 VAR_14[VAR_17].CIN_WIDTH = VAR_7;
 VAR_14[VAR_17].holdAtEnd = (VAR_27 & VAR_1) != 0;
 VAR_14[VAR_17].alterGameState = (VAR_27 & VAR_5) != 0;
 VAR_14[VAR_17].playonwalls = 1;
 VAR_14[VAR_17].silent = (VAR_27 & VAR_4) != 0;
 VAR_14[VAR_17].shader = (VAR_27 & VAR_3) != 0;

 if (VAR_14[VAR_17].alterGameState) {

  if ( VAR_21 ) {
   FUNC_11( VAR_21, VAR_12, VAR_11 );
  }
 } else {
  VAR_14[VAR_17].playonwalls = VAR_15->integer;
 }

 FUNC_12();

 FUNC_8 (VAR_13.file, 16, VAR_14[VAR_17].iFile);

 VAR_28 = (unsigned short)(VAR_13.file[0]) + (unsigned short)(VAR_13.file[1])*256;
 if (VAR_28 == 0x1084)
 {
  FUNC_10();


  VAR_14[VAR_17].status = VAR_8;
  FUNC_3("trFMV::play(), playing %s\n", VAR_22);

  if (VAR_14[VAR_17].alterGameState) {
   VAR_16.state = VAR_0;
  }

  FUNC_6();

  if (!VAR_14[VAR_17].silent) {
   VAR_19[0] = VAR_20;
  }

  return VAR_17;
 }
 FUNC_3("trFMV::play(), invalid RoQ ID\n");

 FUNC_9();
 return -1;
}
