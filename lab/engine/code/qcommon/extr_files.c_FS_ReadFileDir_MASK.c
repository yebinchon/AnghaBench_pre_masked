
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int searchpath_t ;
typedef scalar_t__ qboolean ;
typedef int len ;
typedef scalar_t__ fileHandle_t ;
typedef long byte ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 long FUNC_3 (char const*,scalar_t__*,scalar_t__) ;
 long FUNC_4 (char const*,int *,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (long*,long,scalar_t__) ;
 int FUNC_7 (long*,long,scalar_t__) ;
 long* FUNC_8 (long) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (char const*,char*) ;

long FUNC_10(const char *VAR_8, void *VAR_9, qboolean VAR_10, void **VAR_11)
{
 fileHandle_t VAR_12;
 searchpath_t *VAR_13;
 byte* VAR_14;
 qboolean VAR_15;
 long VAR_16;

 if ( !VAR_5 ) {
  FUNC_1( VAR_0, "Filesystem call made without initialization" );
 }

 if ( !VAR_8 || !VAR_8[0] ) {
  FUNC_1( VAR_0, "FS_ReadFile with empty name" );
 }

 VAR_14 = ((void*)0);



 if ( FUNC_9( VAR_8, ".cfg" ) ) {
  VAR_15 = VAR_7;
  if ( VAR_1 && VAR_1->integer == 2 ) {
   int VAR_17;

   FUNC_0( "Loading %s from journal file.\n", VAR_8 );
   VAR_17 = FUNC_6( &VAR_16, sizeof( VAR_16 ), VAR_2 );
   if ( VAR_17 != sizeof( VAR_16 ) ) {
    if (VAR_11 != ((void*)0)) *VAR_11 = ((void*)0);
    return -1;
   }

   if (!VAR_16) {
    if (VAR_11 == ((void*)0)) {
     return 1;
    }
    *VAR_11 = ((void*)0);
    return -1;
   }
   if (VAR_11 == ((void*)0)) {
    return VAR_16;
   }

   VAR_14 = FUNC_8(VAR_16+1);
   *VAR_11 = VAR_14;

   VAR_17 = FUNC_6( VAR_14, VAR_16, VAR_2 );
   if ( VAR_17 != VAR_16 ) {
    FUNC_1( VAR_0, "Read from journalDataFile failed" );
   }

   VAR_3++;
   VAR_4++;


   VAR_14[VAR_16] = 0;

   return VAR_16;
  }
 } else {
  VAR_15 = VAR_6;
 }

 VAR_13 = VAR_9;

 if(VAR_13 == ((void*)0))
 {

  VAR_16 = FUNC_3(VAR_8, &VAR_12, VAR_6);
 }
 else
 {

  VAR_16 = FUNC_4(VAR_8, VAR_13, &VAR_12, VAR_6, VAR_10);
 }

 if ( VAR_12 == 0 ) {
  if ( VAR_11 ) {
   *VAR_11 = ((void*)0);
  }

  if ( VAR_15 && VAR_1 && VAR_1->integer == 1 ) {
   FUNC_0( "Writing zero for %s to journal file.\n", VAR_8 );
   VAR_16 = 0;
   FUNC_7( &VAR_16, sizeof( VAR_16 ), VAR_2 );
   FUNC_5( VAR_2 );
  }
  return -1;
 }

 if ( !VAR_11 ) {
  if ( VAR_15 && VAR_1 && VAR_1->integer == 1 ) {
   FUNC_0( "Writing len for %s to journal file.\n", VAR_8 );
   FUNC_7( &VAR_16, sizeof( VAR_16 ), VAR_2 );
   FUNC_5( VAR_2 );
  }
  FUNC_2( VAR_12);
  return VAR_16;
 }

 VAR_3++;
 VAR_4++;

 VAR_14 = FUNC_8(VAR_16+1);
 *VAR_11 = VAR_14;

 FUNC_6 (VAR_14, VAR_16, VAR_12);


 VAR_14[VAR_16] = 0;
 FUNC_2( VAR_12 );


 if ( VAR_15 && VAR_1 && VAR_1->integer == 1 ) {
  FUNC_0( "Writing %s to journal file.\n", VAR_8 );
  FUNC_7( &VAR_16, sizeof( VAR_16 ), VAR_2 );
  FUNC_7( VAR_14, VAR_16, VAR_2 );
  FUNC_5( VAR_2 );
 }
 return VAR_16;
}
