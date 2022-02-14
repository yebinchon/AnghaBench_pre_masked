
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sfxHandle_t ;
typedef int menuframework_s ;
struct TYPE_4__ {int flags; int (* callback ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ menucommon_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

sfxHandle_t FUNC_1( menuframework_s *VAR_3, menucommon_s* VAR_4 ) {
 if ( VAR_4->callback ) {
  VAR_4->callback( VAR_4, VAR_1 );
  if( !( VAR_4->flags & VAR_0 ) ) {
   return VAR_2;
  }
 }

 return 0;
}
