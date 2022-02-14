
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* lightGridSize; int entityString; int entityParsePoint; } ;
typedef TYPE_1__ world_t ;
typedef int value ;
struct TYPE_9__ {scalar_t__ filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
typedef int keyname ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int (* Printf ) (int ,char*,char*) ;int (* Hunk_Alloc ) (scalar_t__,int ) ;} ;
struct TYPE_10__ {int * autoExposureMinMax; } ;


 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (char*,char*,int*,int*,...) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*) ;
 TYPE_3__ VAR_8 ;

void FUNC_12( lump_t *VAR_9 ) {
 char *VAR_10, *VAR_11, *VAR_12;
 char VAR_13[VAR_0];
 char VAR_14[VAR_0];
 world_t *VAR_15;

 VAR_15 = &VAR_7;
 VAR_15->lightGridSize[0] = 64;
 VAR_15->lightGridSize[1] = 64;
 VAR_15->lightGridSize[2] = 128;

 VAR_10 = (char *)(VAR_2 + VAR_9->fileofs);


 VAR_15->entityString = VAR_6.Hunk_Alloc( VAR_9->filelen + 1, VAR_3 );
 FUNC_7( VAR_15->entityString, VAR_10 );
 VAR_15->entityParsePoint = VAR_15->entityString;

 VAR_11 = FUNC_0( &VAR_10, VAR_4 );
 if (!*VAR_11 || *VAR_11 != '{') {
  return;
 }


 while ( 1 ) {

  VAR_11 = FUNC_0( &VAR_10, VAR_4 );

  if ( !*VAR_11 || *VAR_11 == '}' ) {
   break;
  }
  FUNC_3(VAR_13, VAR_11, sizeof(VAR_13));


  VAR_11 = FUNC_0( &VAR_10, VAR_4 );

  if ( !*VAR_11 || *VAR_11 == '}' ) {
   break;
  }
  FUNC_3(VAR_14, VAR_11, sizeof(VAR_14));


  VAR_12 = "vertexremapshader";
  if (!FUNC_2(VAR_13, VAR_12, FUNC_8(VAR_12)) ) {
   VAR_12 = FUNC_6(VAR_14, ';');
   if (!VAR_12) {
    VAR_6.Printf( VAR_1, "WARNING: no semi colon in vertexshaderremap '%s'\n", VAR_14 );
    break;
   }
   *VAR_12++ = 0;
   if (VAR_5->integer) {
    FUNC_4(VAR_14, VAR_12, "0");
   }
   continue;
  }

  VAR_12 = "remapshader";
  if (!FUNC_2(VAR_13, VAR_12, FUNC_8(VAR_12)) ) {
   VAR_12 = FUNC_6(VAR_14, ';');
   if (!VAR_12) {
    VAR_6.Printf( VAR_1, "WARNING: no semi colon in shaderremap '%s'\n", VAR_14 );
    break;
   }
   *VAR_12++ = 0;
   FUNC_4(VAR_14, VAR_12, "0");
   continue;
  }

  if (!FUNC_1(VAR_13, "gridsize")) {
   FUNC_5(VAR_14, "%f %f %f", &VAR_15->lightGridSize[0], &VAR_15->lightGridSize[1], &VAR_15->lightGridSize[2] );
   continue;
  }


  if (!FUNC_1(VAR_13, "autoExposureMinMax")) {
   FUNC_5(VAR_14, "%f %f", &VAR_8.autoExposureMinMax[0], &VAR_8.autoExposureMinMax[1]);
   continue;
  }
 }
}
