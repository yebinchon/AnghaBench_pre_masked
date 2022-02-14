
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int toporder; } ;
typedef TYPE_1__ nltype ;
struct TYPE_6__ {int cycletop; TYPE_1__* nlentryp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(nltype *VAR_6)
{

    VAR_4 += 1;
    if ( VAR_4 >= VAR_2 )
 FUNC_0( 1 , "[dfn] out of my depth (dfn_stack overflow)" );
    VAR_5[ VAR_4 ].nlentryp = VAR_6;
    VAR_5[ VAR_4 ].cycletop = VAR_4;
    VAR_6 -> toporder = VAR_1;







}
