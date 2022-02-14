
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client_t ;
struct TYPE_2__ {int ** configstrings; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(client_t *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0 - 24;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1.configstrings[VAR_3]);

 if( VAR_5 >= VAR_4 ) {
  int VAR_6 = 0;
  int VAR_7 = VAR_5;
  char *VAR_8;
  char VAR_9[VAR_0];

  while (VAR_7 > 0 ) {
   if ( VAR_6 == 0 ) {
    VAR_8 = "bcs0";
   }
   else if( VAR_7 < VAR_4 ) {
    VAR_8 = "bcs2";
   }
   else {
    VAR_8 = "bcs1";
   }
   FUNC_0( VAR_9, &VAR_1.configstrings[VAR_3][VAR_6],
    VAR_4 );

   FUNC_1( VAR_2, "%s %i \"%s\"\n", VAR_8,
    VAR_3, VAR_9 );

   VAR_6 += (VAR_4 - 1);
   VAR_7 -= (VAR_4 - 1);
  }
 } else {

  FUNC_1( VAR_2, "cs %i \"%s\"\n", VAR_3,
   VAR_1.configstrings[VAR_3] );
 }
}
