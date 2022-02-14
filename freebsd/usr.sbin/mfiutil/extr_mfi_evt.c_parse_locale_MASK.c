
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint16_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_11, uint16_t *VAR_12)
{
 char *VAR_13;
 long VAR_14;

 if (FUNC_1(VAR_11, "vol", 3) == 0 || FUNC_0(VAR_11, "ld") == 0) {
  *VAR_12 = VAR_7;
  return (0);
 }
 if (FUNC_1(VAR_11, "drive", 5) == 0 || FUNC_0(VAR_11, "pd") == 0) {
  *VAR_12 = VAR_8;
  return (0);
 }
 if (FUNC_1(VAR_11, "encl", 4) == 0) {
  *VAR_12 = VAR_6;
  return (0);
 }
 if (FUNC_1(VAR_11, "batt", 4) == 0 ||
     FUNC_1(VAR_11, "bbu", 3) == 0) {
  *VAR_12 = VAR_2;
  return (0);
 }
 if (FUNC_0(VAR_11, "sas") == 0) {
  *VAR_12 = VAR_9;
  return (0);
 }
 if (FUNC_0(VAR_11, "ctrl") == 0 || FUNC_1(VAR_11, "cont", 4) == 0) {
  *VAR_12 = VAR_5;
  return (0);
 }
 if (FUNC_0(VAR_11, "config") == 0) {
  *VAR_12 = VAR_4;
  return (0);
 }
 if (FUNC_0(VAR_11, "cluster") == 0) {
  *VAR_12 = VAR_3;
  return (0);
 }
 if (FUNC_0(VAR_11, "all") == 0) {
  *VAR_12 = VAR_1;
  return (0);
 }
 VAR_14 = FUNC_2(VAR_11, &VAR_13, 0);
 if (*VAR_13 != '\0' || VAR_14 < 0 || VAR_14 > 0xffff) {
  VAR_10 = VAR_0;
  return (-1);
 }
 *VAR_12 = VAR_14;
 return (0);
}
