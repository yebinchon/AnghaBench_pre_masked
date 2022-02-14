
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cnext; } ;
typedef TYPE_1__ nltype ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_1(nltype *VAR_1)
{
    nltype *VAR_2;
    nltype *VAR_3;
    nltype *VAR_4;





    VAR_2 = VAR_1 -> cnext;
    VAR_1 -> cnext = 0;
    for ( (VAR_3 = VAR_2)&&(VAR_2 = VAR_3 -> cnext);
     VAR_3 ;
    (VAR_3 = VAR_2 )&&(VAR_2 = VAR_3 -> cnext )){
 for ( VAR_4 = VAR_1 ; VAR_4 -> cnext ; VAR_4 = VAR_4 -> cnext ) {
     if ( FUNC_0( VAR_3 , VAR_4 -> cnext ) == VAR_0 ) {
  break;
     }
 }
 VAR_3 -> cnext = VAR_4 -> cnext;
 VAR_4 -> cnext = VAR_3;
    }
}
