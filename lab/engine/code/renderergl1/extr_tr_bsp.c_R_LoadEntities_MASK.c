
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* lightGridSize; int entityString; int entityParsePoint; } ;
typedef TYPE_1__ world_t ;
typedef int value ;
struct TYPE_8__ {scalar_t__ filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
typedef int keyname ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int (* Printf ) (int ,char*,char*) ;int (* Hunk_Alloc ) (scalar_t__,int ) ;} ;


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
 TYPE_5__* VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (char*,char*,int*,int*,int*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*) ;

void FUNC_12( lump_t *VAR_8 ) {
 char *VAR_9, *VAR_10, *VAR_11;
 char VAR_12[VAR_0];
 char VAR_13[VAR_0];
 world_t *VAR_14;

 VAR_14 = &VAR_7;
 VAR_14->lightGridSize[0] = 64;
 VAR_14->lightGridSize[1] = 64;
 VAR_14->lightGridSize[2] = 128;

 VAR_9 = (char *)(VAR_2 + VAR_8->fileofs);


 VAR_14->entityString = VAR_6.Hunk_Alloc( VAR_8->filelen + 1, VAR_3 );
 FUNC_7( VAR_14->entityString, VAR_9 );
 VAR_14->entityParsePoint = VAR_14->entityString;

 VAR_10 = FUNC_0( &VAR_9, VAR_4 );
 if (!*VAR_10 || *VAR_10 != '{') {
  return;
 }


 while ( 1 ) {

  VAR_10 = FUNC_0( &VAR_9, VAR_4 );

  if ( !*VAR_10 || *VAR_10 == '}' ) {
   break;
  }
  FUNC_3(VAR_12, VAR_10, sizeof(VAR_12));


  VAR_10 = FUNC_0( &VAR_9, VAR_4 );

  if ( !*VAR_10 || *VAR_10 == '}' ) {
   break;
  }
  FUNC_3(VAR_13, VAR_10, sizeof(VAR_13));


  VAR_11 = "vertexremapshader";
  if (!FUNC_2(VAR_12, VAR_11, FUNC_8(VAR_11)) ) {
   VAR_11 = FUNC_6(VAR_13, ';');
   if (!VAR_11) {
    VAR_6.Printf( VAR_1, "WARNING: no semi colon in vertexshaderremap '%s'\n", VAR_13 );
    break;
   }
   *VAR_11++ = 0;
   if (VAR_5->integer) {
    FUNC_4(VAR_13, VAR_11, "0");
   }
   continue;
  }

  VAR_11 = "remapshader";
  if (!FUNC_2(VAR_12, VAR_11, FUNC_8(VAR_11)) ) {
   VAR_11 = FUNC_6(VAR_13, ';');
   if (!VAR_11) {
    VAR_6.Printf( VAR_1, "WARNING: no semi colon in shaderremap '%s'\n", VAR_13 );
    break;
   }
   *VAR_11++ = 0;
   FUNC_4(VAR_13, VAR_11, "0");
   continue;
  }

  if (!FUNC_1(VAR_12, "gridsize")) {
   FUNC_5(VAR_13, "%f %f %f", &VAR_14->lightGridSize[0], &VAR_14->lightGridSize[1], &VAR_14->lightGridSize[2] );
   continue;
  }
 }
}
