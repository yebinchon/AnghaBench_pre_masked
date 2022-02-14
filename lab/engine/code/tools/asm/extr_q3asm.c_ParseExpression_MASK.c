
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_3(void) {

 int VAR_2, VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;


 for ( VAR_2 = ((VAR_1[0] == '-') ? 1 : 0) ; VAR_2 < VAR_0 ; VAR_2++ ) {
  if ( VAR_1[VAR_2] == '+' || VAR_1[VAR_2] == '-' || VAR_1[VAR_2] == 0 ) {
   break;
  }
 }

 FUNC_2( VAR_4, VAR_1, VAR_2 );
 VAR_4[VAR_2] = 0;

 switch (*VAR_4) {

  case '-':
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   VAR_5 = FUNC_1(VAR_4);
   break;
  default:
   VAR_5 = FUNC_0(VAR_4);
   break;
 }


 while ( VAR_1[VAR_2] != 0 ) {
  for ( VAR_3 = VAR_2 + 1 ; VAR_3 < VAR_0 ; VAR_3++ ) {
   if ( VAR_1[VAR_3] == '+' || VAR_1[VAR_3] == '-' || VAR_1[VAR_3] == 0 ) {
    break;
   }
  }

  FUNC_2( VAR_4, VAR_1+VAR_2+1, VAR_3-VAR_2-1 );
  VAR_4[VAR_3-VAR_2-1] = 0;

  switch (VAR_1[VAR_2]) {
   case '+':
    VAR_5 += FUNC_1(VAR_4);
    break;
   case '-':
    VAR_5 -= FUNC_1(VAR_4);
    break;
  }

  VAR_2 = VAR_3;
 }

 return VAR_5;
}
