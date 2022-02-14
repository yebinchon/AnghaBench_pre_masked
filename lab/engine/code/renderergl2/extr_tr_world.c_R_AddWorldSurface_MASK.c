
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cubemapIndex; int fogIndex; int shader; int data; } ;
typedef TYPE_1__ msurface_t ;


 int FUNC_0 (int ,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4( msurface_t *VAR_0, int VAR_1, int VAR_2 ) {



 if ( FUNC_1( VAR_0 ) ) {
  return;
 }


                       {
  VAR_1 = FUNC_2( VAR_0, VAR_1 );
  VAR_1 = ( VAR_1 != 0 );
 }


                        {
  VAR_2 = FUNC_3( VAR_0, VAR_2);
  VAR_2 = ( VAR_2 != 0 );
 }

 FUNC_0( VAR_0->data, VAR_0->shader, VAR_0->fogIndex, VAR_1, VAR_2, VAR_0->cubemapIndex );
}
