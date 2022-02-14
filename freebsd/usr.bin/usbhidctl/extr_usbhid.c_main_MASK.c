
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ report_desc_t ;
typedef int devnam ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char) ;
 int VAR_2 ;
 int FUNC_10 (char*,int ) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (scalar_t__,int,int,char**) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int,scalar_t__) ;
 int VAR_7 ;

int
FUNC_16(int VAR_8, char **VAR_9)
{
 report_desc_t VAR_10;
 char *VAR_11 = 0;
 char VAR_12[100], *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 while ((VAR_16 = FUNC_5(VAR_8, VAR_9, "af:lnrt:vwxz")) != -1) {
  switch(VAR_16) {
  case 'a':
   VAR_15++;
   break;
  case 'f':
   VAR_13 = VAR_3;
   break;
  case 'l':
   VAR_18 ^= 1;
   break;
  case 'n':
   VAR_2++;
   break;
  case 'r':
   VAR_17++;
   break;
  case 't':
   VAR_11 = VAR_3;
   break;
  case 'v':
   VAR_5++;
   break;
  case 'w':
   VAR_6 = 1;
   break;
  case 'x':
   VAR_1 = 1;
   break;
  case 'z':
   VAR_7 = 1;
   break;
  case '?':
  default:
   FUNC_14();
  }
 }
 VAR_8 -= VAR_4;
 VAR_9 += VAR_4;
 if (VAR_13 == ((void*)0))
  FUNC_14();

 if (VAR_8 == 0 && !VAR_15 && !VAR_17)
  FUNC_14();

 if (VAR_13[0] != '/') {
  if (FUNC_9(VAR_13[0]))
   FUNC_13(VAR_12, sizeof(VAR_12), "/dev/uhid%s", VAR_13);
  else
   FUNC_13(VAR_12, sizeof(VAR_12), "/dev/%s", VAR_13);
  VAR_13 = VAR_12;
 }

 FUNC_8(VAR_11);

 VAR_14 = FUNC_10(VAR_13, VAR_0);
 if (VAR_14 < 0)
  FUNC_2(1, "%s", VAR_13);

 VAR_10 = FUNC_7(VAR_14);
 if (VAR_10 == 0)
  FUNC_3(1, "USB_GET_REPORT_DESC");

 if (VAR_17) {
  FUNC_12("Report descriptor:\n");
  FUNC_1(VAR_10);
 }
 if (VAR_8 != 0 || VAR_15) {
  FUNC_11(VAR_10, VAR_15, VAR_8, VAR_9);
  if (VAR_6)
   FUNC_15(VAR_14, VAR_10);
  else
   FUNC_0(VAR_14, VAR_10, VAR_18);
 }

 FUNC_6(VAR_10);
 FUNC_4(0);
}
