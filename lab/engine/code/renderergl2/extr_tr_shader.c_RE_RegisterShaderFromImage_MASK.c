
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lightmapIndex; int index; int name; scalar_t__ defaultShader; struct TYPE_9__* next; } ;
typedef TYPE_2__ shader_t ;
typedef int qhandle_t ;
typedef int qboolean ;
typedef int image_t ;
struct TYPE_12__ {int lightmapIndex; } ;
struct TYPE_11__ {int stateBits; void* rgbGen; void* active; TYPE_1__* bundle; int alphaGen; } ;
struct TYPE_10__ {int numLightmaps; int ** lightmaps; int * whiteImage; } ;
struct TYPE_8__ {int ** image; void* isLightmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 () ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char const*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*,int ) ;
 TYPE_2__** VAR_18 ;
 void* VAR_19 ;
 TYPE_5__ VAR_20 ;
 TYPE_4__* VAR_21 ;
 TYPE_3__ VAR_22 ;

qhandle_t FUNC_4(const char *VAR_23, int VAR_24, image_t *VAR_25, qboolean VAR_26) {
 int VAR_27;
 shader_t *VAR_28;

 VAR_27 = FUNC_3(VAR_23, VAR_7);




 if ( VAR_24 >= VAR_22.numLightmaps ) {
  VAR_24 = VAR_17;
 }




 for (VAR_28=VAR_18[VAR_27]; VAR_28; VAR_28=VAR_28->next) {




  if ( (VAR_28->lightmapIndex == VAR_24 || VAR_28->defaultShader) &&

   !FUNC_2(VAR_28->name, VAR_23)) {

   return VAR_28->index;
  }
 }

 FUNC_1( VAR_23, VAR_24 );




 if ( VAR_20.lightmapIndex == VAR_16 ) {

  VAR_21[0].bundle[0].image[0] = VAR_25;
  VAR_21[0].active = VAR_19;
  VAR_21[0].rgbGen = VAR_5;
  VAR_21[0].stateBits = VAR_8;
 } else if ( VAR_20.lightmapIndex == VAR_15 ) {

  VAR_21[0].bundle[0].image[0] = VAR_25;
  VAR_21[0].active = VAR_19;
  VAR_21[0].rgbGen = VAR_2;
  VAR_21[0].alphaGen = VAR_0;
  VAR_21[0].stateBits = VAR_8;
 } else if ( VAR_20.lightmapIndex == VAR_14 ) {

  VAR_21[0].bundle[0].image[0] = VAR_25;
  VAR_21[0].active = VAR_19;
  VAR_21[0].rgbGen = VAR_6;
  VAR_21[0].alphaGen = VAR_1;
  VAR_21[0].stateBits = VAR_9 |
     VAR_13 |
     VAR_10;
 } else if ( VAR_20.lightmapIndex == VAR_17 ) {

  VAR_21[0].bundle[0].image[0] = VAR_22.whiteImage;
  VAR_21[0].active = VAR_19;
  VAR_21[0].rgbGen = VAR_4;
  VAR_21[0].stateBits = VAR_8;

  VAR_21[1].bundle[0].image[0] = VAR_25;
  VAR_21[1].active = VAR_19;
  VAR_21[1].rgbGen = VAR_3;
  VAR_21[1].stateBits |= VAR_12 | VAR_11;
 } else {

  VAR_21[0].bundle[0].image[0] = VAR_22.lightmaps[VAR_20.lightmapIndex];
  VAR_21[0].bundle[0].isLightmap = VAR_19;
  VAR_21[0].active = VAR_19;
  VAR_21[0].rgbGen = VAR_3;

  VAR_21[0].stateBits = VAR_8;

  VAR_21[1].bundle[0].image[0] = VAR_25;
  VAR_21[1].active = VAR_19;
  VAR_21[1].rgbGen = VAR_3;
  VAR_21[1].stateBits |= VAR_12 | VAR_11;
 }

 VAR_28 = FUNC_0();
  return VAR_28->index;
}
