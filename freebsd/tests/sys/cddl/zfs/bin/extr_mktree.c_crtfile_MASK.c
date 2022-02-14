
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,int,int) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_4 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static void
FUNC_11(char *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8, VAR_9;
 char *VAR_10 = "0123456789ABCDF";
 char *VAR_11;

 if (VAR_5 == ((void*)0)) {
  FUNC_1(1);
 }

 VAR_9 = sizeof (char) * 1024;
 VAR_11 = (char *)FUNC_9(VAR_9);
 for (VAR_8 = 0; VAR_8 < VAR_9 / FUNC_8(VAR_10); VAR_8++) {
  int VAR_12 = VAR_8 * FUNC_8(VAR_10);
  (void) FUNC_6(VAR_11+VAR_12, VAR_9-VAR_12, "%s", VAR_10);
 }

 if ((VAR_6 = FUNC_4(VAR_5, VAR_0|VAR_1, 0777)) < 0) {
  (void) FUNC_2(VAR_4, "open(%s, O_CREAT|O_RDWR, 0777) failed."
      "\n[%d]: %s.\n", VAR_5, VAR_3, FUNC_7(VAR_3));
  FUNC_1(VAR_3);
 }
 if (FUNC_10(VAR_6, VAR_11, 1024) < 1024) {
  (void) FUNC_2(VAR_4, "write(fd, pbuf, 1024) failed."
      "\n[%d]: %s.\n", VAR_3, FUNC_7(VAR_3));
  FUNC_1(VAR_3);
 }
 (void) FUNC_0(VAR_6);
 FUNC_3(VAR_11);
}
