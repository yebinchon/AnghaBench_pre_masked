
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int keynum; } ;
typedef TYPE_1__ keyname_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

char *FUNC_0( int VAR_2 ) {
 keyname_t *VAR_3;
 static char VAR_4[5];
 int VAR_5, VAR_6;

 if ( VAR_2 == -1 ) {
  return "<KEY NOT FOUND>";
 }

 if ( VAR_2 < 0 || VAR_2 >= VAR_0 ) {
  return "<OUT OF RANGE>";
 }


 if ( VAR_2 > 32 && VAR_2 < 127 && VAR_2 != '"' && VAR_2 != ';' ) {
  VAR_4[0] = VAR_2;
  VAR_4[1] = 0;
  return VAR_4;
 }


 for ( VAR_3=VAR_1 ; VAR_3->name ; VAR_3++ ) {
  if (VAR_2 == VAR_3->keynum) {
   return VAR_3->name;
  }
 }


 VAR_5 = VAR_2 >> 4;
 VAR_6 = VAR_2 & 15;

 VAR_4[0] = '0';
 VAR_4[1] = 'x';
 VAR_4[2] = VAR_5 > 9 ? VAR_5 - 10 + 'a' : VAR_5 + '0';
 VAR_4[3] = VAR_6 > 9 ? VAR_6 - 10 + 'a' : VAR_6 + '0';
 VAR_4[4] = 0;

 return VAR_4;
}
