
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* centerPrint; int centerPrintY; int centerPrintLines; int centerPrintCharWidth; int centerPrintTime; } ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char*,float*,int ,int ,int,int,int ) ;
 int FUNC_1 (char*) ;
 float* FUNC_2 (int ,int) ;
 int FUNC_3 (char*,double,int ) ;
 int FUNC_4 (int,int,double,float*,char*,int ,int ,int ) ;
 int FUNC_5 (char*,double,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (float*) ;

__attribute__((used)) static void FUNC_7( void ) {
 char *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;



 float *VAR_12;

 if ( !VAR_3.centerPrintTime ) {
  return;
 }

 VAR_12 = FUNC_2( VAR_3.centerPrintTime, 1000 * VAR_4.value );
 if ( !VAR_12 ) {
  return;
 }

 FUNC_6( VAR_12 );

 VAR_7 = VAR_3.centerPrint;

 VAR_10 = VAR_3.centerPrintY - VAR_3.centerPrintLines * VAR_0 / 2;

 while ( 1 ) {
  char VAR_13[1024];

  for ( VAR_8 = 0; VAR_8 < 50; VAR_8++ ) {
   if ( !VAR_7[VAR_8] || VAR_7[VAR_8] == '\n' ) {
    break;
   }
   VAR_13[VAR_8] = VAR_7[VAR_8];
  }
  VAR_13[VAR_8] = 0;
  VAR_11 = VAR_3.centerPrintCharWidth * FUNC_1( VAR_13 );

  VAR_9 = ( VAR_2 - VAR_11 ) / 2;

  FUNC_0( VAR_9, VAR_10, VAR_13, VAR_12, VAR_5, VAR_6,
   VAR_3.centerPrintCharWidth, (int)(VAR_3.centerPrintCharWidth * 1.5), 0 );

  VAR_10 += VAR_3.centerPrintCharWidth * 1.5;

  while ( *VAR_7 && ( *VAR_7 != '\n' ) ) {
   VAR_7++;
  }
  if ( !*VAR_7 ) {
   break;
  }
  VAR_7++;
 }

 FUNC_6( ((void*)0) );
}
