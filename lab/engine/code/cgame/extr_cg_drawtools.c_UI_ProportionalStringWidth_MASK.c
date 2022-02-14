
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int** VAR_1 ;

int FUNC_0( const char* VAR_2 ) {
 const char * VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = VAR_2;
 VAR_6 = 0;
 while ( *VAR_3 ) {
  VAR_4 = *VAR_3 & 127;
  VAR_5 = VAR_1[VAR_4][2];
  if ( VAR_5 != -1 ) {
   VAR_6 += VAR_5;
   VAR_6 += VAR_0;
  }
  VAR_3++;
 }

 VAR_6 -= VAR_0;
 return VAR_6;
}
