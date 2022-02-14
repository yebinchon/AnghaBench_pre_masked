
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int*) ;

int FUNC_8(int VAR_3, char *VAR_4[])
{
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_4[1], VAR_0);
 if (VAR_8 < 0) {
  FUNC_5("Failed to open file\n");
  goto err_fd;
 }





 FUNC_3(VAR_8, VAR_2, &VAR_6);
 if (!(VAR_6 & VAR_1)) {
  FUNC_5("DROP_PRIVILEGES not supported\n");
  goto err;
 }





 FUNC_2(VAR_8, -1U);

 FUNC_5("Available options:\n"
  "[0] Exit now\n"
  "[1] Reset device. Should fail if device is in use\n"
  "[2] Claim 4 interfaces. Should succeed where not in use\n"
  "[3] Narrow interface permission mask\n"
  "Which option shall I run?: ");

 while (FUNC_7("%d", &VAR_7) == 1) {
  switch (VAR_7) {
  case 0:
   goto exit;
  case 1:
   FUNC_6(VAR_8);
   break;
  case 2:
   FUNC_0(VAR_8);
   break;
  case 3:
   FUNC_5("Insert new mask: ");
   FUNC_7("%x", &VAR_5);
   FUNC_2(VAR_8, VAR_5);
   break;
  default:
   FUNC_5("I don't recognize that\n");
  }

  FUNC_5("Which test shall I run next?: ");
 }

exit:
 FUNC_1(VAR_8);
 return 0;

err:
 FUNC_1(VAR_8);
err_fd:
 return 1;
}
