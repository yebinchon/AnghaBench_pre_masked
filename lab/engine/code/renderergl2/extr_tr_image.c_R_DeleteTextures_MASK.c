
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int texnum; } ;
struct TYPE_3__ {int numImages; TYPE_2__** images; } ;


 int FUNC_0 (TYPE_2__**,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_3( void ) {
 int VAR_1;

 for ( VAR_1=0; VAR_1<VAR_0.numImages ; VAR_1++ ) {
  FUNC_2( 1, &VAR_0.images[VAR_1]->texnum );
 }
 FUNC_0( VAR_0.images, 0, sizeof( VAR_0.images ) );

 VAR_0.numImages = 0;

 FUNC_1();
}
