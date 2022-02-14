
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


typedef size_t fileHandle_t ;
struct TYPE_18__ {scalar_t__* string; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__* string; } ;
struct TYPE_15__ {scalar_t__* string; } ;
struct TYPE_14__ {scalar_t__* string; } ;
struct TYPE_13__ {scalar_t__* string; } ;
struct TYPE_10__ {void* o; } ;
struct TYPE_11__ {TYPE_1__ file; } ;
struct TYPE_12__ {TYPE_2__ handleFiles; void* handleSync; int name; void* zipFile; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (scalar_t__*,char const*,char*) ;
 size_t FUNC_3 () ;
 long FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 () ;
 void* FUNC_8 (char*,char*) ;
 TYPE_9__* VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 void* VAR_9 ;
 int FUNC_9 (char*) ;

long FUNC_10(const char *VAR_10, fileHandle_t *VAR_11)
{
 char *VAR_12;
 fileHandle_t VAR_13 = 0;

 if ( !VAR_5 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization" );
 }

 VAR_13 = FUNC_3();
 VAR_8[VAR_13].zipFile = VAR_9;

 FUNC_6( VAR_8[VAR_13].name, VAR_10, sizeof( VAR_8[VAR_13].name ) );


 FUNC_7();


 VAR_12 = FUNC_2( VAR_4->string, VAR_10, "" );

 VAR_12[FUNC_9(VAR_12)-1] = '\0';

 if ( VAR_2->integer ) {
  FUNC_1( "FS_SV_FOpenFileRead (fs_homepath): %s\n", VAR_12 );
 }

 VAR_8[VAR_13].handleFiles.file.o = FUNC_8( VAR_12, "rb" );
 VAR_8[VAR_13].handleSync = VAR_9;
 if (!VAR_8[VAR_13].handleFiles.file.o)
 {

  if (FUNC_5(VAR_4->string,VAR_1->string))
  {

   VAR_12 = FUNC_2( VAR_1->string, VAR_10, "" );
   VAR_12[FUNC_9(VAR_12)-1] = '\0';

   if ( VAR_2->integer )
   {
    FUNC_1( "FS_SV_FOpenFileRead (fs_basepath): %s\n", VAR_12 );
   }

   VAR_8[VAR_13].handleFiles.file.o = FUNC_8( VAR_12, "rb" );
   VAR_8[VAR_13].handleSync = VAR_9;
  }


  if (!VAR_8[VAR_13].handleFiles.file.o && VAR_7->string[0])
  {
   VAR_12 = FUNC_2( VAR_7->string, VAR_10, "" );
   VAR_12[FUNC_9(VAR_12)-1] = '\0';

   if ( VAR_2->integer )
   {
    FUNC_1( "FS_SV_FOpenFileRead (fs_temporarypath): %s\n", VAR_12 );
   }

   VAR_8[VAR_13].handleFiles.file.o = FUNC_8( VAR_12, "rb" );
   VAR_8[VAR_13].handleSync = VAR_9;
  }


  if (!VAR_8[VAR_13].handleFiles.file.o && VAR_6->string[0])
  {
   VAR_12 = FUNC_2( VAR_6->string, VAR_10, "" );
   VAR_12[FUNC_9(VAR_12)-1] = '\0';

   if ( VAR_2->integer )
   {
    FUNC_1( "FS_SV_FOpenFileRead (fs_steampath): %s\n", VAR_12 );
   }

   VAR_8[VAR_13].handleFiles.file.o = FUNC_8( VAR_12, "rb" );
   VAR_8[VAR_13].handleSync = VAR_9;
  }


  if (!VAR_8[VAR_13].handleFiles.file.o && VAR_3->string[0])
  {
   VAR_12 = FUNC_2( VAR_3->string, VAR_10, "" );
   VAR_12[FUNC_9(VAR_12)-1] = '\0';

   if ( VAR_2->integer )
   {
    FUNC_1( "FS_SV_FOpenFileRead (fs_gogpath): %s\n", VAR_12 );
   }

   VAR_8[VAR_13].handleFiles.file.o = FUNC_8( VAR_12, "rb" );
   VAR_8[VAR_13].handleSync = VAR_9;
  }

  if ( !VAR_8[VAR_13].handleFiles.file.o )
  {
   VAR_13 = 0;
  }
 }

 *VAR_11 = VAR_13;
 if (VAR_13) {
  return FUNC_4(VAR_13);
 }

 return -1;
}
