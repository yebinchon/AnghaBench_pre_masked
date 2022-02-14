
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hint; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_1( void ){
 int VAR_2, VAR_3, VAR_4;
 vportal_t *VAR_5;

 VAR_2 = 0;
 VAR_3 = 0;
 for ( VAR_4 = 0; VAR_4 < VAR_0 * 2; VAR_4++ )
 {
  VAR_5 = VAR_1 + VAR_4;
  if ( VAR_5->removed ) {
   continue;
  }
  if ( VAR_5->hint ) {
   VAR_3++;
  }
  VAR_2++;
 }
 FUNC_0( "%6d active portals\n", VAR_2 );
 FUNC_0( "%6d hint portals\n", VAR_3 );
 return VAR_2;
}
