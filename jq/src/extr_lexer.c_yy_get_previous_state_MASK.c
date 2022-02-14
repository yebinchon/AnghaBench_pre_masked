
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
typedef size_t yy_state_type ;
struct yyguts_t {size_t yy_start; char* yytext_ptr; char* yy_c_buf_p; size_t yy_last_accepting_state; char* yy_last_accepting_cpos; } ;
typedef size_t YY_CHAR ;


 int VAR_0 ;
 size_t FUNC_0 (char) ;
 scalar_t__* VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 scalar_t__* VAR_4 ;
 int* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;

__attribute__((used)) static yy_state_type FUNC_1 (yyscan_t VAR_8)
{
 yy_state_type VAR_9;
 char *VAR_10;
    struct yyguts_t * VAR_11 = (struct yyguts_t*)VAR_8;

 VAR_9 = VAR_11->yy_start;

 for ( VAR_10 = VAR_11->yytext_ptr + VAR_0; VAR_10 < VAR_11->yy_c_buf_p; ++VAR_10 )
  {
  YY_CHAR VAR_12 = (*VAR_10 ? VAR_5[FUNC_0(*VAR_10)] : 1);
  if ( VAR_1[VAR_9] )
   {
   VAR_11->yy_last_accepting_state = VAR_9;
   VAR_11->yy_last_accepting_cpos = VAR_10;
   }
  while ( VAR_3[VAR_2[VAR_9] + VAR_12] != VAR_9 )
   {
   VAR_9 = (int) VAR_4[VAR_9];
   if ( VAR_9 >= 157 )
    VAR_12 = VAR_6[VAR_12];
   }
  VAR_9 = VAR_7[VAR_2[VAR_9] + VAR_12];
  }

 return VAR_9;
}
