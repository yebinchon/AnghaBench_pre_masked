
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 size_t FUNC_11 (char*) ;

int
FUNC_12(int VAR_5, char **VAR_6)
{
 char *VAR_7 = "";
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 pid_t VAR_11;
 static const int VAR_12 = 5;

 if (VAR_5 == 1) {
  (void) FUNC_6("Usage: %s <mount point>\n", VAR_6[0]);
  FUNC_1(-1);
 }
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_3[VAR_8] = 0;
 }

 VAR_7 = VAR_6[1];
 (void) FUNC_10(&VAR_3[0], (const char *)VAR_7);
 (void) FUNC_9(&VAR_3[FUNC_11(VAR_3)], "TMP_DIR");

 VAR_9 = FUNC_4(VAR_3, 0777);
 if (VAR_9 != 0) {
  if (VAR_4 != VAR_0) {
   (void) FUNC_6(
   "%s: mkdir(<%s>, 0777) failed: errno (decimal)=%d\n",
    VAR_6[0], VAR_3, VAR_4);
   FUNC_1(-1);
  }
 }
 VAR_10 = FUNC_5(VAR_3, VAR_1|VAR_2);
 if (VAR_10 < 0) {
  (void) FUNC_6(
"%s: open(<%s>, O_RDONLY|O_SYNC) failed: errno (decimal)=%d\n",
   VAR_6[0], VAR_3, VAR_4);
  FUNC_1(-1);
 } else {
  (void) FUNC_0(VAR_10);
 }
 VAR_11 = FUNC_3();
 if (VAR_11 > 0) {
  int VAR_13 = FUNC_5(VAR_3, VAR_1|VAR_2);
  char VAR_14[16];
  int VAR_15;
  int VAR_16 = 0;

  while (VAR_16 < VAR_12) {
   (void) FUNC_8(1);
   VAR_15 = FUNC_7(VAR_13, VAR_14, 16);
   if (VAR_15 == -1) {
    (void) FUNC_6("readdir failed");
   }
   VAR_16++;
  }
 } else if (VAR_11 == 0) {
  int VAR_17 = FUNC_5(VAR_3, VAR_1);
  int VAR_18;
  int VAR_19 = 0;

  while (VAR_19 < VAR_12) {
   (void) FUNC_8(1);
   VAR_18 = FUNC_2(VAR_17, 0, 0);
   if (VAR_18 == -1) {
    (void) FUNC_6("chown failed");
   }

   VAR_19++;
  }
 }

 return (0);
}
