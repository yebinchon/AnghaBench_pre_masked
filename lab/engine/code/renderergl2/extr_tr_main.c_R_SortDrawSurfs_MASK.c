
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sort; int name; } ;
typedef TYPE_2__ shader_t ;
struct TYPE_14__ {int sort; } ;
typedef TYPE_3__ drawSurf_t ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_12__ {int flags; } ;
struct TYPE_15__ {TYPE_1__ viewParms; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int*,TYPE_2__**,int*,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_4__ VAR_7 ;

void FUNC_5( drawSurf_t *VAR_8, int VAR_9 ) {
 shader_t *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;




 if ( VAR_9 < 1 ) {

  FUNC_0( VAR_8, VAR_9 );
  return;
 }


 FUNC_3( VAR_8, VAR_9 );


 if (VAR_7.viewParms.flags & (VAR_4 | VAR_3))
 {
  FUNC_0( VAR_8, VAR_9 );
  return;
 }



 for ( VAR_15 = 0 ; VAR_15 < VAR_9 ; VAR_15++ ) {
  FUNC_1( (VAR_8+VAR_15)->sort, &VAR_12, &VAR_10, &VAR_11, &VAR_13, &VAR_14 );

  if ( VAR_10->sort > VAR_2 ) {
   break;
  }


  if ( VAR_10->sort == VAR_1 ) {
   VAR_6.Error (VAR_0, "Shader '%s'with sort == SS_BAD", VAR_10->name );
  }


  if ( FUNC_2( (VAR_8+VAR_15), VAR_12) ) {

   if ( VAR_5->integer ) {
    return;
   }
   break;
  }
 }

 FUNC_0( VAR_8, VAR_9 );
}
