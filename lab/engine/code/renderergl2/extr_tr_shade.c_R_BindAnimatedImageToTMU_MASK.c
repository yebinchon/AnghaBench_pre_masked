
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t videoMapHandle; int numImageAnimations; size_t imageAnimationSpeed; int * image; scalar_t__ isVideoMap; } ;
typedef TYPE_1__ textureBundle_t ;
typedef size_t int64_t ;
struct TYPE_9__ {int (* CIN_UploadCinematic ) (size_t) ;int (* CIN_RunCinematic ) (size_t) ;} ;
struct TYPE_8__ {size_t shaderTime; } ;
struct TYPE_7__ {int * scratchImage; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_3( textureBundle_t *VAR_5, int VAR_6 ) {
 int64_t VAR_7;

 if ( VAR_5->isVideoMap ) {
  VAR_2.CIN_RunCinematic(VAR_5->videoMapHandle);
  VAR_2.CIN_UploadCinematic(VAR_5->videoMapHandle);
  FUNC_0(VAR_4.scratchImage[VAR_5->videoMapHandle], VAR_6);
  return;
 }

 if ( VAR_5->numImageAnimations <= 1 ) {
  FUNC_0( VAR_5->image[0], VAR_6);
  return;
 }



 VAR_7 = VAR_3.shaderTime * VAR_5->imageAnimationSpeed * VAR_0;
 VAR_7 >>= VAR_1;

 if ( VAR_7 < 0 ) {
  VAR_7 = 0;
 }



 while ( VAR_7 >= VAR_5->numImageAnimations ) {
  VAR_7 -= VAR_5->numImageAnimations;
 }

 FUNC_0( VAR_5->image[ VAR_7 ], VAR_6 );
}
