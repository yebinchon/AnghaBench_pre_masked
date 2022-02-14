
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* parents; TYPE_2__* children; int name; } ;
typedef TYPE_1__ nltype ;
struct TYPE_9__ {long arc_count; struct TYPE_9__* arc_parentlist; struct TYPE_9__* arc_childlist; TYPE_1__* arc_childp; TYPE_1__* arc_parentp; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,long,long,...) ;

void
FUNC_4(nltype *VAR_2, nltype *VAR_3, long VAR_4)
{
    arctype *VAR_5;







    VAR_5 = FUNC_0( VAR_2 , VAR_3 );
    if ( VAR_5 != 0 ) {
 VAR_5 -> arc_count += VAR_4;
 return;
    }
    VAR_5 = (arctype *)FUNC_1( 1 , sizeof *VAR_5 );
    if (VAR_5 == ((void*)0))
 FUNC_2( 1 , "malloc failed" );
    VAR_5 -> arc_parentp = VAR_2;
    VAR_5 -> arc_childp = VAR_3;
    VAR_5 -> arc_count = VAR_4;



    VAR_5 -> arc_childlist = VAR_2 -> children;
    VAR_2 -> children = VAR_5;



    VAR_5 -> arc_parentlist = VAR_3 -> parents;
    VAR_3 -> parents = VAR_5;
}
