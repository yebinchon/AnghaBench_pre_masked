
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int * patches; int * brushes; } ;
typedef TYPE_1__ entity_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_6( void ){
 qboolean VAR_7;
 entity_t *VAR_8;



 VAR_7 = VAR_5;


 FUNC_0();


 FUNC_1();


 for ( VAR_2 = 0; VAR_2 < VAR_4; VAR_2++ )
 {

  VAR_8 = &VAR_1[ VAR_2 ];
  if ( VAR_8->brushes == ((void*)0) && VAR_8->patches == ((void*)0) ) {
   continue;
  }


  FUNC_5( VAR_0, "############### model %i ###############\n", VAR_3 );
  if ( VAR_2 == 0 ) {
   FUNC_4();
  }
  else{
   FUNC_3();
  }


  VAR_5 = VAR_6;
 }


 VAR_5 = VAR_7;


 FUNC_2();
}
