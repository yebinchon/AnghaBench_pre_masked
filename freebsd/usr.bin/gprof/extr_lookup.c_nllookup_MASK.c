
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long value; char* name; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_4 ;

nltype *
FUNC_2(unsigned long VAR_5)
{
    register long VAR_6;
    register long VAR_7;
    register long VAR_8;





    for ( VAR_6 = 0 , VAR_8 = VAR_3 - 1 ; VAR_6 != VAR_8 ; ) {



 VAR_7 = ( VAR_8 + VAR_6 ) >> 1;
 if ( VAR_2[ VAR_7 ].value <= VAR_5 && VAR_2[ VAR_7+1 ].value > VAR_5 ) {
     return &VAR_2[ VAR_7 ];
 }
 if ( VAR_2[ VAR_7 ].value > VAR_5 ) {
     VAR_8 = VAR_7;
 } else {
     VAR_6 = VAR_7 + 1;
 }
    }






    return 0;
}
