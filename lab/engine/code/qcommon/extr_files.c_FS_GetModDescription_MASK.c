
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fileHandle_t ;
typedef int descPath ;
typedef int FILE ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,char const*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int,int,int *) ;

void FUNC_7( const char *VAR_2, char *VAR_3, int VAR_4 ) {
 fileHandle_t VAR_5;
 char VAR_6[VAR_0];
 int VAR_7;
 FILE *VAR_8;

 FUNC_1( VAR_6, sizeof ( VAR_6 ), "%s%cdescription.txt", VAR_2, VAR_1 );
 VAR_7 = FUNC_4( VAR_6, &VAR_5 );

 if ( VAR_7 > 0 ) {
  VAR_8 = FUNC_3(VAR_5);
  FUNC_0( VAR_3, 0, VAR_4 );
  VAR_7 = FUNC_6(VAR_3, 1, VAR_4, VAR_8);
  if (VAR_7 >= 0) {
   VAR_3[VAR_7] = '\0';
  }
 } else {
  FUNC_5( VAR_3, VAR_2, VAR_4 );
 }

 if ( VAR_5 ) {
  FUNC_2( VAR_5 );
 }
}
