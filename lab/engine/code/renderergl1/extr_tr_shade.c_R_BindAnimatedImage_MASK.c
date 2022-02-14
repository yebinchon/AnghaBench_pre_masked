
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numImageAnimations; size_t imageAnimationSpeed; int * image; int videoMapHandle; scalar_t__ isVideoMap; } ;
typedef TYPE_1__ textureBundle_t ;
typedef size_t int64_t ;
struct TYPE_7__ {int (* CIN_UploadCinematic ) (int ) ;int (* CIN_RunCinematic ) (int ) ;} ;
struct TYPE_6__ {size_t shaderTime; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_3( textureBundle_t *VAR_4 ) {
 int64_t VAR_5;

 if ( VAR_4->isVideoMap ) {
  VAR_2.CIN_RunCinematic(VAR_4->videoMapHandle);
  VAR_2.CIN_UploadCinematic(VAR_4->videoMapHandle);
  return;
 }

 if ( VAR_4->numImageAnimations <= 1 ) {
  FUNC_0( VAR_4->image[0] );
  return;
 }



 VAR_5 = VAR_3.shaderTime * VAR_4->imageAnimationSpeed * VAR_0;
 VAR_5 >>= VAR_1;

 if ( VAR_5 < 0 ) {
  VAR_5 = 0;
 }



 while ( VAR_5 >= VAR_4->numImageAnimations ) {
  VAR_5 -= VAR_4->numImageAnimations;
 }

 FUNC_0( VAR_4->image[ VAR_5 ] );
}
