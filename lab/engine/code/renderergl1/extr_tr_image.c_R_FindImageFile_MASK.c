
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int qboolean ;
typedef int new_name ;
typedef int imgType_t ;
typedef int imgFlags_t ;
struct TYPE_10__ {char* imgName; int flags; struct TYPE_10__* next; } ;
typedef TYPE_2__ image_t ;
typedef int byte ;
struct TYPE_12__ {int (* Free ) (int *) ;int Malloc; int (* Printf ) (int ,char*,char const*,int ,int ) ;} ;
struct TYPE_9__ {scalar_t__ (* modify_rgba_texture ) (int ,char const*,int *,int,int) ;int (* load_texture ) (int ,char const*,int **,int*,int*,int ) ;scalar_t__ (* replace_texture_name ) (int ,char const*,char*,int) ;} ;
struct TYPE_11__ {int userdata; TYPE_1__ hooks; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (char const*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*) ;
 TYPE_2__* FUNC_2 (char*,int *,int,int,int,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int **,int*,int*,scalar_t__*,int*) ;
 int FUNC_4 (char const*,int **,int*,int*) ;
 TYPE_3__* FUNC_5 () ;
 long FUNC_6 (char const*) ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,char const*,char*,int) ;
 int FUNC_10 (int ,char const*,int **,int*,int*,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,char const*,int *,int,int) ;
 int FUNC_13 (int *) ;

image_t *FUNC_14( const char *VAR_7, imgType_t VAR_8, imgFlags_t VAR_9 )
{
 DeepmindContext *VAR_10 = FUNC_5();
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];
 const char *VAR_13 = VAR_7;
 image_t *VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 byte *VAR_18 = ((void*)0);
 long VAR_19;
 GLenum VAR_20;
 qboolean VAR_21 = VAR_5;

 if (!VAR_7) {
  return ((void*)0);
 }

 VAR_19 = FUNC_6(VAR_7);




 for (VAR_14=VAR_3[VAR_19]; VAR_14; VAR_14=VAR_14->next) {
  if ( !FUNC_7( VAR_7, VAR_14->imgName ) ) {

   if ( FUNC_7( VAR_7, "*white" ) ) {
    if ( VAR_14->flags != VAR_9 ) {
     VAR_6.Printf( VAR_2, "WARNING: reused image %s with mixed flags (%i vs %i)\n", VAR_7, VAR_14->flags, VAR_9 );
    }
   }
   return VAR_14;
  }
 }

 if ( VAR_10->hooks.replace_texture_name( VAR_10->userdata, VAR_7, VAR_11, sizeof( VAR_11 ) ) ) {
  VAR_13 = VAR_11;
 }



 if ( !VAR_10->hooks.load_texture( VAR_10->userdata, VAR_13, &VAR_18, &VAR_15, &VAR_16, VAR_6.Malloc ) ) {

  FUNC_0( VAR_13, VAR_12, VAR_1 );
  FUNC_1( VAR_12, VAR_1, ".dds" );

  FUNC_3( VAR_12, &VAR_18, &VAR_15, &VAR_16, &VAR_20, &VAR_17 );



  if ( VAR_18 != ((void*)0) && VAR_20 != VAR_0 ) {
   VAR_6.Free( VAR_18 );
   VAR_18 = ((void*)0);
   VAR_17 = 0;
  }

  if ( VAR_18 == ((void*)0) ) {
   FUNC_4( VAR_13, &VAR_18, &VAR_15, &VAR_16 );
  }
 } else {
  VAR_21 = VAR_4;
 }

 if ( VAR_18 == ((void*)0) ) {
  return ((void*)0);
 }


 if ( VAR_10->hooks.modify_rgba_texture( VAR_10->userdata, VAR_7, VAR_18, VAR_15, VAR_16 ) ) {
  VAR_17 = 1;
  VAR_21 = VAR_4;
 }

 VAR_14 = FUNC_2( ( char * ) VAR_7, VAR_18, VAR_15, VAR_16, VAR_17, VAR_8, VAR_9, 0, VAR_21 );
 VAR_6.Free( VAR_18 );
 return VAR_14;
}
