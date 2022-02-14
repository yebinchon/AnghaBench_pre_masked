
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; scalar_t__ toporder; scalar_t__ propfraction; scalar_t__ cycleno; scalar_t__ index; scalar_t__ printflag; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

void
FUNC_1(nltype *VAR_3)
{

    if ( VAR_3 -> name != 0 ) {
 FUNC_0( "%s" , VAR_3 -> name );
    }
    if ( VAR_3 -> cycleno != 0 ) {
 FUNC_0( " <cycle %d>" , VAR_3 -> cycleno );
    }
    if ( VAR_3 -> index != 0 ) {
 if ( VAR_3 -> printflag ) {
     FUNC_0( " [%d]" , VAR_3 -> index );
 } else {
     FUNC_0( " (%d)" , VAR_3 -> index );
 }
    }
}
