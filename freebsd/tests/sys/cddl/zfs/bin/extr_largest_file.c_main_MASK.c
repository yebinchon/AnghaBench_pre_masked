
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_8 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,int) ;

int
FUNC_10(int VAR_9, char **VAR_10)
{
 int VAR_11 = 0;
 off_t VAR_12 = (VAR_1 - 1);
 off_t VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 char VAR_16[5];
 char *VAR_17;

 if (VAR_9 != 2) {
  FUNC_8(VAR_10[0]);
 }

 (void) FUNC_5(VAR_6, VAR_8);

 VAR_17 = FUNC_6(VAR_10[1]);

 VAR_11 = FUNC_2(VAR_17, VAR_2 | VAR_3);
 if (VAR_11 < 0) {
  FUNC_3("Failed to create testfile");
  VAR_15 = VAR_7;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_11, VAR_12, VAR_5);
 if (VAR_13 < 0) {
  FUNC_3("Failed to seek to end of testfile");
  VAR_15 = VAR_7;
  goto out;
 }

 VAR_14 = FUNC_9(VAR_11, VAR_16, 1);
 if (VAR_14 < 0) {
  FUNC_3("Failed to write to end of file");
  VAR_15 = VAR_7;
  goto out;
 }

 VAR_12 = 0;
 VAR_13 = FUNC_1(VAR_11, VAR_12, VAR_4);
 if (VAR_13 < 0) {
  FUNC_3("Failed to seek to end of file");
  VAR_15 = VAR_7;
  goto out;
 }

 VAR_14 = FUNC_9(VAR_11, VAR_16, 1);
 if (VAR_14 < 0) {
  if (VAR_7 == VAR_0) {
   (void) FUNC_4("write errno=EFBIG: success\n");
   VAR_15 = 0;
  } else {
   FUNC_3("Did not receive EFBIG");
   VAR_15 = VAR_7;
  }
 } else {
  (void) FUNC_4("write completed successfully, test failed\n");
  VAR_15 = 1;
 }

out:
 (void) FUNC_7(VAR_17);
 FUNC_0(VAR_17);
 return (VAR_15);
}
