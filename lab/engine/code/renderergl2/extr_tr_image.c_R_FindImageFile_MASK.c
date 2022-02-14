
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
typedef int* picbyte ;
typedef int new_name ;
typedef int imgType_t ;
typedef int imgFlags_t ;
struct TYPE_11__ {char* imgName; int flags; struct TYPE_11__* next; } ;
typedef TYPE_2__ image_t ;
typedef int byte ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int* (* Malloc ) (int) ;int (* Free ) (int*) ;int (* Printf ) (int ,char*,char const*,int,int) ;} ;
struct TYPE_10__ {scalar_t__ (* modify_rgba_texture ) (int ,char const*,int*,int,int) ;int (* load_texture ) (int ,char const*,int**,int*,int*,int* (*) (int)) ;scalar_t__ (* replace_texture_name ) (int ,char const*,char*,int) ;} ;
struct TYPE_12__ {int userdata; TYPE_1__ hooks; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char const*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (int*,int*,int,int,int) ;
 int FUNC_5 (int*,int*,int,int) ;
 TYPE_2__* FUNC_6 (char*,int*,int,int,scalar_t__,int,int ,int,int ,int ) ;
 int FUNC_7 (char const*,int**,int*,int*,scalar_t__*,int*) ;
 int FUNC_8 (int*,int*,int,int) ;
 TYPE_3__* FUNC_9 () ;
 long FUNC_10 (char const*) ;
 TYPE_2__** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_5__* VAR_15 ;
 TYPE_4__ VAR_16 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ,char*,char const*,int,int) ;
 scalar_t__ FUNC_13 (int ,char const*,char*,int) ;
 int FUNC_14 (int ,char const*,int**,int*,int*,int* (*) (int)) ;
 scalar_t__ FUNC_15 (int ,char const*,int*,int,int) ;
 int* FUNC_16 (int) ;
 int* FUNC_17 (int) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (int*) ;

image_t *FUNC_21( const char *VAR_17, imgType_t VAR_18, imgFlags_t VAR_19 )
{
 DeepmindContext* VAR_20 = FUNC_9();
 char VAR_21[VAR_10];
 const char *VAR_22 = VAR_17;
 image_t *VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 byte *VAR_26 = ((void*)0);
 GLenum VAR_27 = VAR_0;
 int VAR_28 = 1;
 long VAR_29;
 imgFlags_t VAR_30, VAR_31;
 qboolean VAR_32 = VAR_14;

 if (!VAR_17) {
  return ((void*)0);
 }

 VAR_29 = FUNC_10(VAR_17);




 for (VAR_23=VAR_12[VAR_29]; VAR_23; VAR_23=VAR_23->next) {
  if ( !FUNC_11( VAR_17, VAR_23->imgName ) ) {

   if ( FUNC_11( VAR_17, "*white" ) ) {
    if ( VAR_23->flags != VAR_19 ) {
     VAR_16.Printf( VAR_11, "WARNING: reused image %s with mixed flags (%i vs %i)\n", VAR_17, VAR_23->flags, VAR_19 );
    }
   }
   return VAR_23;
  }
 }

 if ( VAR_20->hooks.replace_texture_name( VAR_20->userdata, VAR_17, VAR_21, sizeof( VAR_21 ) ) ) {
  VAR_22 = VAR_21;
 }



 if ( !VAR_20->hooks.load_texture( VAR_20->userdata, VAR_22, &VAR_26, &VAR_24, &VAR_25, VAR_16.Malloc ) ) {
  FUNC_7( VAR_22, &VAR_26, &VAR_24, &VAR_25, &VAR_27, &VAR_28 );
 } else {
  VAR_32 = VAR_13;
 }

 if ( VAR_26 == ((void*)0) ) {
  return ((void*)0);
 }


 if ( VAR_20->hooks.modify_rgba_texture( VAR_20->userdata, VAR_17, VAR_26, VAR_24, VAR_25 ) ) {
  VAR_32 = VAR_13;
 }

 VAR_30 = VAR_7 | VAR_5 | VAR_4;
 VAR_31 = VAR_3;
 if (VAR_15->integer && (VAR_27 == VAR_0) && (VAR_18 == VAR_8) &&
  ((VAR_19 & VAR_30) == VAR_30) && !(VAR_19 & VAR_31))
 {
  char VAR_33[VAR_10];
  image_t *VAR_34;
  int VAR_35, VAR_36;
  imgFlags_t VAR_37;

  VAR_37 = (VAR_19 & ~VAR_4) | VAR_6;

  FUNC_1(VAR_17, VAR_33, VAR_10);
  FUNC_3(VAR_33, VAR_10, "_n");


  VAR_34 = FUNC_21(VAR_33, VAR_9, VAR_37);


  if (VAR_34 == ((void*)0))
  {
   byte *VAR_38;
   int VAR_39, VAR_40;

   VAR_35 = VAR_24;
   VAR_36 = VAR_25;
   VAR_38 = VAR_16.Malloc(VAR_24 * VAR_25 * 4);
   FUNC_4(VAR_26, VAR_38, VAR_24, VAR_25, VAR_19 & VAR_2);



   FUNC_5(VAR_26, VAR_26, VAR_24, VAR_25);
   for (VAR_40 = 0; VAR_40 < VAR_25; VAR_40++)
   {
    byte *VAR_41 = VAR_26 + VAR_40 * VAR_24 * 4;
    byte *VAR_42 = VAR_38 + VAR_40 * VAR_24 * 4;
    for (VAR_39 = 0; VAR_39 < VAR_24; VAR_39++)
    {
     int VAR_43 = FUNC_2(VAR_42[2] - 127, 16);
     VAR_41[0] = FUNC_0(VAR_41[0] * 128 / VAR_43, 0, 255);
     VAR_41 += 4;
     VAR_42 += 4;
    }
   }
   FUNC_8(VAR_26, VAR_26, VAR_24, VAR_25);
   FUNC_6( VAR_33, VAR_38, VAR_35, VAR_36, VAR_0, 0, VAR_9, VAR_37, 0, VAR_32 );
   VAR_16.Free( VAR_38 );
  }
 }


 if ((VAR_19 & VAR_5) && VAR_27 != VAR_0 && VAR_27 != VAR_1)
 {
  int VAR_44 = FUNC_2(VAR_24, VAR_25);
  int VAR_45 = 0;
  while (VAR_44)
  {
   VAR_45++;
   VAR_44 >>= 1;
  }
  if (VAR_45 > VAR_28)
   VAR_19 &= ~VAR_5;
 }

 VAR_23 = FUNC_6( ( char * ) VAR_17, VAR_26, VAR_24, VAR_25, VAR_27, VAR_28, VAR_18, VAR_19, 0, VAR_32 );
 VAR_16.Free( VAR_26 );
 return VAR_23;
}
