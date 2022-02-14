
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int toporder; struct TYPE_4__* cnext; struct TYPE_4__* cyclehead; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(nltype *VAR_4)
{
    nltype *VAR_5;
    if ( VAR_4 -> cyclehead == VAR_4 ) {
 VAR_2 += 1;
 for ( VAR_5 = VAR_4 ; VAR_5 ; VAR_5 = VAR_5 -> cnext ) {
     VAR_5 -> toporder = VAR_2;







 }
    } else {





    }
    VAR_3 -= 1;
}
