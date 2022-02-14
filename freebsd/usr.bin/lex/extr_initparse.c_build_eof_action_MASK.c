
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int action_text ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 char** VAR_5 ;
 size_t* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int,char*,char*) ;

void FUNC_4()
 {
 int VAR_8;
 char VAR_9[VAR_0];

 for ( VAR_8 = 1; VAR_8 <= VAR_7; ++VAR_8 )
  {
  if ( VAR_4[VAR_6[VAR_8]] )
   FUNC_1(
    "multiple <<EOF>> rules for start condition %s",
    VAR_5[VAR_6[VAR_8]] );

  else
   {
   VAR_4[VAR_6[VAR_8]] = 1;

   if (VAR_3 )
    FUNC_0("YY_RULE_SETUP\n");

   FUNC_3( VAR_9, sizeof(VAR_9), "case YY_STATE_EOF(%s):\n",
    VAR_5[VAR_6[VAR_8]] );
   FUNC_0( VAR_9 );
   }
  }

 FUNC_2( (FILE *) 0, 1 );






 --VAR_2;
 ++VAR_1;
 }
