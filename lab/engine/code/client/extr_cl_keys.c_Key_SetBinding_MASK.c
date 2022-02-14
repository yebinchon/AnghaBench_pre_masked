
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ binding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_2( int VAR_4, const char *VAR_5 ) {
 if ( VAR_4 < 0 || VAR_4 >= VAR_1 ) {
  return;
 }


 if ( VAR_3[ VAR_4 ].binding ) {
  FUNC_1( VAR_3[ VAR_4 ].binding );
 }


 VAR_3[VAR_4].binding = FUNC_0( VAR_5 );



 VAR_2 |= VAR_0;
}
