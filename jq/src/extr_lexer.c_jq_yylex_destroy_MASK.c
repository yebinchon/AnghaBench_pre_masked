
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * yyscan_t ;
struct yyguts_t {int * yy_start_stack; int * yy_buffer_stack; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4 (yyscan_t VAR_2)
{
    struct yyguts_t * VAR_3 = (struct yyguts_t*)VAR_2;


 while(VAR_0){
  FUNC_0( VAR_0 , VAR_2 );
  VAR_1 = ((void*)0);
  FUNC_3(VAR_2);
 }


 FUNC_2(VAR_3->yy_buffer_stack , VAR_2);
 VAR_3->yy_buffer_stack = ((void*)0);


        FUNC_2( VAR_3->yy_start_stack , VAR_2 );
        VAR_3->yy_start_stack = ((void*)0);



    FUNC_1( VAR_2);


    FUNC_2 ( VAR_2 , VAR_2 );
    VAR_2 = ((void*)0);
    return 0;
}
