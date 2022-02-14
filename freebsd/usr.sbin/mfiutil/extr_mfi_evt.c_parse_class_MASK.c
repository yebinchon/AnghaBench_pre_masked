
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int8_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_9, int8_t *VAR_10)
{
 char *VAR_11;
 long VAR_12;

 if (FUNC_0(VAR_9, "debug") == 0) {
  *VAR_10 = VAR_3;
  return (0);
 }
 if (FUNC_1(VAR_9, "prog", 4) == 0) {
  *VAR_10 = VAR_6;
  return (0);
 }
 if (FUNC_1(VAR_9, "info", 4) == 0) {
  *VAR_10 = VAR_5;
  return (0);
 }
 if (FUNC_1(VAR_9, "warn", 4) == 0) {
  *VAR_10 = VAR_7;
  return (0);
 }
 if (FUNC_1(VAR_9, "crit", 4) == 0) {
  *VAR_10 = VAR_1;
  return (0);
 }
 if (FUNC_0(VAR_9, "fatal") == 0) {
  *VAR_10 = VAR_4;
  return (0);
 }
 if (FUNC_0(VAR_9, "dead") == 0) {
  *VAR_10 = VAR_2;
  return (0);
 }
 VAR_12 = FUNC_2(VAR_9, &VAR_11, 0);
 if (*VAR_11 != '\0' || VAR_12 < -128 || VAR_12 > 127) {
  VAR_8 = VAR_0;
  return (-1);
 }
 *VAR_10 = VAR_12;
 return (0);
}
