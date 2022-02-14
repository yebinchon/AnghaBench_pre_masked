
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rawarc {int raw_count; int raw_selfpc; int raw_frompc; } ;
struct TYPE_9__ {TYPE_4__* children; } ;
typedef TYPE_3__ nltype ;
struct TYPE_10__ {int arc_count; TYPE_2__* arc_childp; TYPE_1__* arc_parentp; struct TYPE_10__* arc_childlist; } ;
typedef TYPE_4__ arctype ;
struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int value; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct rawarc*,int,int,int *) ;
 struct rawarc VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int ,int ,int ) ;
 struct rawarc* VAR_7 ;

void
FUNC_5(const char *VAR_8)
{
    register nltype *VAR_9;
    register arctype *VAR_10;
    struct rawarc VAR_11;
    FILE *VAR_12;

    if ( ( VAR_12 = FUNC_2 ( VAR_8 , "w" ) ) == ((void*)0) )
 FUNC_0( 1 , "%s" , VAR_8 );



    if ( FUNC_3( &VAR_2 , sizeof VAR_2 , 1 , VAR_12 ) != 1 )
 FUNC_0( 1 , "%s" , VAR_8 );



    if (FUNC_3(VAR_7, VAR_3, VAR_6, VAR_12) != VAR_6)
 FUNC_0( 1 , "%s" , VAR_8 );



    for ( VAR_9 = VAR_4 ; VAR_9 < VAR_5 ; VAR_9++ ) {
 for ( VAR_10 = VAR_9 -> children ; VAR_10 ; VAR_10 = VAR_10 -> arc_childlist ) {
     VAR_11.raw_frompc = VAR_10 -> arc_parentp -> value;
     VAR_11.raw_selfpc = VAR_10 -> arc_childp -> value;
     VAR_11.raw_count = VAR_10 -> arc_count;
     if ( FUNC_3 ( &VAR_11 , sizeof VAR_11 , 1 , VAR_12 ) != 1 )
  FUNC_0( 1 , "%s" , VAR_8 );






 }
    }
    FUNC_1( VAR_12 );
}
