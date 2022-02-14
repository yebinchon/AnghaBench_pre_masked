
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long U32 ;
typedef long U16 ;


 int VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,long,long,unsigned long) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 long FUNC_5 (char*,char**,int ) ;
 unsigned long FUNC_6 (char*,char**,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(int VAR_5, char **VAR_6)
{
 char *VAR_7;
 unsigned long VAR_8;
 long VAR_9;
 int VAR_10;
 int VAR_11;
 U32 VAR_12;
 U16 VAR_13;
 U16 VAR_14;

 if (VAR_5 != 5) {
  FUNC_8("Incorrect number of arguments");
  return (VAR_0);
 }

 if (FUNC_4(VAR_6[1], "status") != 0) {
  FUNC_8("Invalid argument '%s', expecting 'status'",
      VAR_6[1]);
  return (VAR_0);
 }

 VAR_3 = 0;
 VAR_9 = FUNC_5(VAR_6[2], &VAR_7, 0);
 if (*VAR_7 != '\0' || VAR_3 != 0 || VAR_9 < 0 || VAR_9 > VAR_1) {
  FUNC_8("Invalid enclosure handle argument '%s'", VAR_6[2]);
  return (VAR_0);
 }
 VAR_13 = VAR_9;

 VAR_3 = 0;
 VAR_9 = FUNC_5(VAR_6[3], &VAR_7, 0);
 if (*VAR_7 != '\0' || VAR_3 != 0 || VAR_9 < 0 || VAR_9 > VAR_1) {
  FUNC_8("Invalid slot argument '%s'", VAR_6[3]);
  return (VAR_0);
 }
 VAR_14 = VAR_9;

 VAR_3 = 0;
 VAR_8 = FUNC_6(VAR_6[4], &VAR_7, 0);
 if (*VAR_7 != '\0' || VAR_3 != 0 || VAR_8 > VAR_2) {
  FUNC_8("Invalid status argument '%s'", VAR_6[4]);
  return (VAR_0);
 }
 VAR_12 = VAR_8;

 VAR_11 = FUNC_1(VAR_4);
 if (VAR_11 < 0) {
  VAR_10 = VAR_3;
  FUNC_7("mps_open");
  return (VAR_10);
 }

 if (FUNC_2(VAR_11, VAR_13, VAR_14, VAR_12) != 0) {
  FUNC_8("Failed to set status");
  FUNC_0(VAR_11);
  return (1);
 }

 FUNC_0(VAR_11);
 FUNC_3("Successfully set slot status\n");
 return (0);
}
