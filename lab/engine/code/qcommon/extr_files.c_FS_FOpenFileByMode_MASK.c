
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
typedef int fsMode_t ;
typedef int fileHandle_t ;
struct TYPE_2__ {int fileSize; int handleSync; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;


 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int*,int ) ;
 int FUNC_3 (char const*) ;


 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4( const char *VAR_4, fileHandle_t *VAR_5, fsMode_t VAR_6 ) {
 int VAR_7;
 qboolean VAR_8;

 VAR_8 = VAR_2;

 switch( VAR_6 ) {
  case 129:
   VAR_7 = FUNC_2( VAR_4, VAR_5, VAR_3 );
   break;
  case 128:
   *VAR_5 = FUNC_3( VAR_4 );
   VAR_7 = 0;
   if (*VAR_5 == 0) {
    VAR_7 = -1;
   }
   break;
  case 130:
   VAR_8 = VAR_3;
  case 131:
   *VAR_5 = FUNC_1( VAR_4 );
   VAR_7 = 0;
   if (*VAR_5 == 0) {
    VAR_7 = -1;
   }
   break;
  default:
   FUNC_0( VAR_0, "FS_FOpenFileByMode: bad mode" );
   return -1;
 }

 if (!VAR_5) {
  return VAR_7;
 }

 if ( *VAR_5 ) {
  VAR_1[*VAR_5].fileSize = VAR_7;
 }
 VAR_1[*VAR_5].handleSync = VAR_8;

 return VAR_7;
}
