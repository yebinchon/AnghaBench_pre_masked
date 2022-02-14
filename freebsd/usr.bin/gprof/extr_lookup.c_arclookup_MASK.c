
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* name; TYPE_3__* children; } ;
typedef TYPE_2__ nltype ;
struct TYPE_9__ {TYPE_2__* arc_childp; TYPE_1__* arc_parentp; struct TYPE_9__* arc_childlist; } ;
typedef TYPE_3__ arctype ;
struct TYPE_7__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_2 ;

arctype *
FUNC_2(nltype *VAR_3, nltype *VAR_4)
{
    arctype *VAR_5;

    if ( VAR_3 == 0 || VAR_4 == 0 ) {
 FUNC_0( VAR_2, "[arclookup] parentp == 0 || childp == 0\n" );
 return 0;
    }






    for ( VAR_5 = VAR_3 -> children ; VAR_5 ; VAR_5 = VAR_5 -> arc_childlist ) {







 if ( VAR_5 -> arc_childp == VAR_4 ) {
     return VAR_5;
 }
    }
    return 0;
}
