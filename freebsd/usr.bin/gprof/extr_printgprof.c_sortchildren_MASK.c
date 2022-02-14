
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* children; } ;
typedef TYPE_1__ nltype ;
struct TYPE_7__ {struct TYPE_7__* arc_childlist; } ;
typedef TYPE_2__ arctype ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;

void
FUNC_1(nltype *VAR_1)
{
    arctype *VAR_2;
    arctype *VAR_3;
    arctype VAR_4;
    arctype *VAR_5;
    VAR_4.arc_childlist = 0;
    for ( (VAR_2 = VAR_1 -> children)&&(VAR_3 = VAR_2 -> arc_childlist);
     VAR_2 ;
    (VAR_2 = VAR_3)&&(VAR_3 = VAR_3 -> arc_childlist)) {




 for ( VAR_5 = &VAR_4 ;
  VAR_5 -> arc_childlist ;
  VAR_5 = VAR_5 -> arc_childlist ) {
     if ( FUNC_0( VAR_2 , VAR_5 -> arc_childlist ) != VAR_0 ) {
  break;
     }
 }
 VAR_2 -> arc_childlist = VAR_5 -> arc_childlist;
 VAR_5 -> arc_childlist = VAR_2;
    }



    VAR_1 -> children = VAR_4.arc_childlist;
}
