
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
typedef size_t yy_state_type ;
struct yyguts_t {char* yy_c_buf_p; size_t yy_last_accepting_state; char* yy_last_accepting_cpos; } ;
typedef size_t YY_CHAR ;


 scalar_t__* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 scalar_t__* VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;

__attribute__((used)) static yy_state_type FUNC_0 (yy_state_type VAR_6 , yyscan_t VAR_7)
{
 int VAR_8;
    struct yyguts_t * VAR_9 = (struct yyguts_t*)VAR_7;
 char *VAR_10 = VAR_9->yy_c_buf_p;

 YY_CHAR VAR_11 = 1;
 if ( VAR_0[VAR_6] )
  {
  VAR_9->yy_last_accepting_state = VAR_6;
  VAR_9->yy_last_accepting_cpos = VAR_10;
  }
 while ( VAR_2[VAR_1[VAR_6] + VAR_11] != VAR_6 )
  {
  VAR_6 = (int) VAR_3[VAR_6];
  if ( VAR_6 >= 157 )
   VAR_11 = VAR_4[VAR_11];
  }
 VAR_6 = VAR_5[VAR_1[VAR_6] + VAR_11];
 VAR_8 = (VAR_6 == 156);

 (void)VAR_9;
 return VAR_8 ? 0 : VAR_6;
}
