
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ clearSolid; int contents; int surfaceFlags; int name; } ;
struct TYPE_6__ {int contentFlags; int surfaceFlags; } ;
struct TYPE_5__ {int contents; } ;


 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (char**,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_3( char **VAR_5 ) {
 char *VAR_6;
 int VAR_7 = FUNC_0( VAR_1 );
 int VAR_8;

 VAR_6 = FUNC_1( VAR_5, VAR_2 );
 for ( VAR_8 = 0 ; VAR_8 < VAR_7 ; VAR_8++ ) {
  if ( !FUNC_2( VAR_6, VAR_1[VAR_8].name ) ) {
   VAR_3.surfaceFlags |= VAR_1[VAR_8].surfaceFlags;
   VAR_3.contentFlags |= VAR_1[VAR_8].contents;





   break;
  }
 }
}
