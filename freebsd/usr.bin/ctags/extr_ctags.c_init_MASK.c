
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void** VAR_7 ;
 void** VAR_8 ;
 void** VAR_9 ;
 void** VAR_10 ;
 void** VAR_11 ;

void
FUNC_0(void)
{
 int VAR_12;
 const unsigned char *VAR_13;

 for (VAR_12 = 0; VAR_12 < 256; VAR_12++) {
  VAR_11[VAR_12] = VAR_8[VAR_12] = VAR_10[VAR_12] = VAR_7[VAR_12] = VAR_5;
  VAR_9[VAR_12] = VAR_6;
 }

 for (VAR_13 = " \f\t\n"; *VAR_13; VAR_13++)
  VAR_11[*VAR_13] = VAR_6;

 for (VAR_13 = " \t\n\"'#()[]{}=-+%*/&|^~!<>;,.:?"; *VAR_13; VAR_13++)
  VAR_8[*VAR_13] = VAR_6;

 for (VAR_13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz0123456789"; *VAR_13; VAR_13++)
  VAR_10[*VAR_13] = VAR_6;

 for (VAR_13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz"; *VAR_13; VAR_13++)
  VAR_7[*VAR_13] = VAR_6;

 for (VAR_13 = ",;"; *VAR_13; VAR_13++)
  VAR_9[*VAR_13] = VAR_5;
}
