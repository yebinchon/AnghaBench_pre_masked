
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ncall; scalar_t__ time; int index; char* name; int cycleno; scalar_t__ printflag; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__**) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__**,int,int,int ) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ VAR_6 ;

void
FUNC_6(void)
{
    nltype **VAR_7;
    register nltype *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    char VAR_14[ VAR_0 ];





    VAR_7 = (nltype **) FUNC_0( VAR_5 + VAR_3 , sizeof(nltype *) );
    if ( VAR_7 == (nltype **) 0 )
 FUNC_1( 1 , "ran out of memory for sorting");
    for ( VAR_9 = 0 , VAR_10 = 0 ; VAR_9 < VAR_5 ; VAR_9++ ) {
 if ( VAR_6 == 0 && VAR_4[VAR_9].ncall == 0 && VAR_4[VAR_9].time == 0 )
  continue;
 VAR_7[VAR_10++] = &VAR_4[VAR_9];
    }
    FUNC_4( VAR_7 , VAR_10 , sizeof(nltype *) , VAR_2 );
    for ( VAR_9 = 1 , VAR_11 = VAR_10 ; VAR_9 <= VAR_3 ; VAR_9++ ) {
 VAR_7[VAR_11++] = &VAR_1[VAR_9];
    }
    FUNC_3( "\f\nIndex by function name\n\n" );
    VAR_9 = ( VAR_11 + 2 ) / 3;
    for ( VAR_12 = 0; VAR_12 < VAR_9 ; VAR_12++ ) {
 for ( VAR_13 = VAR_12; VAR_13 < VAR_11 ; VAR_13 += VAR_9 ) {
     VAR_8 = VAR_7[ VAR_13 ];
     if ( VAR_8 -> printflag ) {
  FUNC_5( VAR_14 , "[%d]" , VAR_8 -> index );
     } else {
  FUNC_5( VAR_14 , "(%d)" , VAR_8 -> index );
     }
     if ( VAR_13 < VAR_10 ) {
  FUNC_3( "%6.6s %-19.19s" , VAR_14 , VAR_8 -> name );
     } else {
  FUNC_3( "%6.6s " , VAR_14 );
  FUNC_5( VAR_14 , "<cycle %d>" , VAR_8 -> cycleno );
  FUNC_3( "%-19.19s" , VAR_14 );
     }
 }
 FUNC_3( "\n" );
    }
    FUNC_2( VAR_7 );
}
