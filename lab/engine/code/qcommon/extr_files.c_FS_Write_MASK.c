
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t fileHandle_t ;
typedef int byte ;
struct TYPE_2__ {scalar_t__ handleSync; } ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int *,int,int,int *) ;

int FUNC_5( const void *VAR_3, int VAR_4, fileHandle_t VAR_5 ) {
 int VAR_6, VAR_7;
 int VAR_8;
 byte *VAR_9;
 int VAR_10;
 FILE *VAR_11;

 if ( !VAR_1 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization" );
 }

 if ( !VAR_5 ) {
  return 0;
 }

 VAR_11 = FUNC_2(VAR_5);
 VAR_9 = (byte *)VAR_3;

 VAR_7 = VAR_4;
 VAR_10 = 0;
 while (VAR_7) {
  VAR_6 = VAR_7;
  VAR_8 = FUNC_4 (VAR_9, 1, VAR_6, VAR_11);
  if (VAR_8 == 0) {
   if (!VAR_10) {
    VAR_10 = 1;
   } else {
    FUNC_1( "FS_Write: 0 bytes written\n" );
    return 0;
   }
  }

  if (VAR_8 == -1) {
   FUNC_1( "FS_Write: -1 bytes written\n" );
   return 0;
  }

  VAR_7 -= VAR_8;
  VAR_9 += VAR_8;
 }
 if ( VAR_2[VAR_5].handleSync ) {
  FUNC_3( VAR_11 );
 }
 return VAR_4;
}
