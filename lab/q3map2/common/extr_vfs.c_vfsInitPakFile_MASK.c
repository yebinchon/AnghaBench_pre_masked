
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int unz_s ;
struct TYPE_14__ {scalar_t__ number_entry; } ;
typedef TYPE_1__ unz_global_info ;
struct TYPE_15__ {int uncompressed_size; } ;
typedef TYPE_2__ unz_file_info ;
typedef TYPE_3__* unzFile ;
typedef scalar_t__ guint32 ;
typedef int filename_inzip ;
struct TYPE_16__ {int zipinfo; struct TYPE_16__* zipfile; int size; int name; } ;
typedef TYPE_3__ VFS_PAKFILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( const char *VAR_4 ){
 unz_global_info VAR_5;
 unzFile VAR_6;
 guint32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_10( VAR_4 );
 if ( VAR_6 == ((void*)0) ) {
  return;
 }

 VAR_3 = FUNC_2( VAR_3, VAR_6 );

 VAR_8 = FUNC_7( VAR_6,&VAR_5 );
 if ( VAR_8 != VAR_1 ) {
  return;
 }
 FUNC_8( VAR_6 );

 for ( VAR_7 = 0; VAR_7 < VAR_5.number_entry; VAR_7++ )
 {
  char VAR_9[VAR_0];
  char *VAR_10;
  unz_file_info VAR_11;
  VFS_PAKFILE* VAR_12;

  VAR_8 = FUNC_6( VAR_6, &VAR_11, VAR_9, sizeof( VAR_9 ), ((void*)0), 0, ((void*)0), 0 );
  if ( VAR_8 != VAR_1 ) {
   break;
  }

  VAR_12 = (VFS_PAKFILE*)FUNC_4( sizeof( VFS_PAKFILE ) );
  VAR_2 = FUNC_2( VAR_2, VAR_12 );

  FUNC_11( VAR_9 );
  VAR_10 = FUNC_0( VAR_9, -1 );

  VAR_12->name = FUNC_5( VAR_10 );
  VAR_12->size = VAR_11.uncompressed_size;
  VAR_12->zipfile = VAR_6;
  FUNC_3( &VAR_12->zipinfo, VAR_6, sizeof( unz_s ) );

  if ( ( VAR_7 + 1 ) < VAR_5.number_entry ) {
   VAR_8 = FUNC_9( VAR_6 );
   if ( VAR_8 != VAR_1 ) {
    break;
   }
  }
  FUNC_1( VAR_10 );
 }
}
