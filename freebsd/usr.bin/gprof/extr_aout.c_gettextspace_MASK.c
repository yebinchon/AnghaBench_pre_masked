
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ a_text; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_5 (char*,...) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_2)
{

    VAR_0 = (u_char *) FUNC_4( VAR_1.a_text );
    if ( VAR_0 == ((void*)0) ) {
 FUNC_5("no room for %u bytes of text space: can't do -c" ,
    VAR_1.a_text );
 return;
    }
    (void) FUNC_3( VAR_2 , FUNC_0( VAR_1 ) , 0 );
    if ( FUNC_1( VAR_0 , 1 , VAR_1.a_text , VAR_2 ) != VAR_1.a_text ) {
 FUNC_5("couldn't read text space: can't do -c");
 FUNC_2( VAR_0 );
 VAR_0 = 0;
 return;
    }
}
