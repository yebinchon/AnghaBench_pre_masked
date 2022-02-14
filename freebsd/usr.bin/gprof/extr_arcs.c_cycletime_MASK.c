
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double propfraction; int time; int propself; struct TYPE_3__* cnext; } ;
typedef TYPE_1__ nltype ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void
FUNC_0(void)
{
    int VAR_2;
    nltype *VAR_3;
    nltype *VAR_4;

    for ( VAR_2 = 1 ; VAR_2 <= VAR_1 ; VAR_2 += 1 ) {
 VAR_3 = &VAR_0[ VAR_2 ];
 for ( VAR_4 = VAR_3 -> cnext ; VAR_4 ; VAR_4 = VAR_4 -> cnext ) {
     if ( VAR_4 -> propfraction == 0.0 ) {




  continue;
     }
     VAR_3 -> time += VAR_4 -> time;
 }
 VAR_3 -> propself = VAR_3 -> propfraction * VAR_3 -> time;
    }
}
