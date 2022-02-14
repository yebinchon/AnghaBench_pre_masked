
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sort; int name; } ;
typedef TYPE_1__ shader_t ;
struct TYPE_11__ {int sort; } ;
typedef TYPE_2__ drawSurf_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int (* Error ) (int ,char*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int*,TYPE_1__**,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5( drawSurf_t *VAR_5, int VAR_6 ) {
 shader_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;


 if ( VAR_6 < 1 ) {

  FUNC_0( VAR_5, VAR_6 );
  return;
 }


 FUNC_3( VAR_5, VAR_6 );



 for ( VAR_11 = 0 ; VAR_11 < VAR_6 ; VAR_11++ ) {
  FUNC_1( (VAR_5+VAR_11)->sort, &VAR_9, &VAR_7, &VAR_8, &VAR_10 );

  if ( VAR_7->sort > VAR_2 ) {
   break;
  }


  if ( VAR_7->sort == VAR_1 ) {
   VAR_4.Error (VAR_0, "Shader '%s'with sort == SS_BAD", VAR_7->name );
  }


  if ( FUNC_2( (VAR_5+VAR_11), VAR_9) ) {

   if ( VAR_3->integer ) {
    return;
   }
   break;
  }
 }

 FUNC_0( VAR_5, VAR_6 );
}
