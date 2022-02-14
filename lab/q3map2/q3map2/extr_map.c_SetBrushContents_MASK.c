
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int contentFlags; int compileFlags; int * shaderInfo; } ;
typedef TYPE_1__ side_t ;
typedef void* qboolean ;
struct TYPE_6__ {int numsides; int contentFlags; int compileFlags; void* opaque; void* detail; TYPE_1__* sides; int * contentShader; } ;
typedef TYPE_2__ brush_t ;
struct TYPE_7__ {int mapEntityNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (char*,int ,int ,void*) ;

void FUNC_1( brush_t *VAR_12 ){
 int VAR_13, VAR_14;
 side_t *VAR_15;
 int VAR_16;
 qboolean VAR_17;



 VAR_15 = &VAR_12->sides[ 0 ];
 VAR_13 = VAR_15->contentFlags;
 VAR_14 = VAR_15->compileFlags;
 VAR_12->contentShader = VAR_15->shaderInfo;
 VAR_17 = VAR_10;


 for ( VAR_16 = 1; VAR_16 < VAR_12->numsides; VAR_16++, VAR_15++ )
 {
  VAR_15 = &VAR_12->sides[ VAR_16 ];
  if ( VAR_15->shaderInfo == ((void*)0) ) {
   continue;
  }
  if ( VAR_15->contentFlags != VAR_13 || VAR_15->compileFlags != VAR_14 ) {
   VAR_17 = VAR_11;
  }
 }






 if ( ( VAR_14 & VAR_1 ) && ( VAR_14 & VAR_2 ) ) {
  FUNC_0( "Mixed detail and structural (defaulting to structural)", VAR_9->mapEntityNum, VAR_7, VAR_10 );
  VAR_14 &= ~VAR_1;
 }


 if ( VAR_8 ) {
  VAR_14 &= ~VAR_1;
 }


 if ( ( VAR_14 & VAR_3 ) && !( VAR_14 & VAR_2 ) ) {
  VAR_14 |= VAR_1;
 }


 if ( VAR_14 & VAR_1 ) {
  VAR_5++;
  VAR_12->detail = VAR_11;
 }
 else
 {
  VAR_6++;
  VAR_12->detail = VAR_10;
 }


 if ( VAR_14 & VAR_3 ) {
  VAR_12->opaque = VAR_10;
 }
 else{
  VAR_12->opaque = VAR_11;
 }


 if ( VAR_14 & VAR_0 ) {
  VAR_4++;
 }


 VAR_12->contentFlags = VAR_13;
 VAR_12->compileFlags = VAR_14;
}
