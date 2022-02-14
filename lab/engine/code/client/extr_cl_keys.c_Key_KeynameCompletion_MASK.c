
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0( void(*VAR_1)(const char *VAR_2) ) {
 int VAR_3;

 for( VAR_3 = 0; VAR_0[ VAR_3 ].name != ((void*)0); VAR_3++ )
  VAR_1( VAR_0[ VAR_3 ].name );
}
