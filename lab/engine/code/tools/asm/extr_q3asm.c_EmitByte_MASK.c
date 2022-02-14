
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t imageUsed; int* image; } ;
typedef TYPE_1__ segment_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1( segment_t *VAR_1, int VAR_2 ) {
 if ( VAR_1->imageUsed >= VAR_0 ) {
  FUNC_0( "MAX_IMAGE" );
 }
 VAR_1->image[ VAR_1->imageUsed ] = VAR_2;
 VAR_1->imageUsed++;
}
