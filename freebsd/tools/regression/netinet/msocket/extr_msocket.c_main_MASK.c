
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7, VAR_8;

 if (FUNC_3() != 0)
  FUNC_2(-1, "FAIL: root privilege required");

 VAR_6 = FUNC_4(VAR_0, VAR_2, 0);
 if (VAR_6 == -1)
  FUNC_1(-1, "FAIL: socket(PF_INET, SOCK_RAW)");

 VAR_7 = FUNC_4(VAR_0, VAR_3, 0);
 if (VAR_6 == -1)
  FUNC_1(-1, "FAIL: socket(PF_INET, SOCK_STREAM)");

 VAR_8 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_6 == -1)
  FUNC_1(-1, "FAIL: socket(PF_INET, SOCK_DGRAM)");

 FUNC_8(VAR_6, VAR_7, VAR_8);
 FUNC_7(VAR_6, VAR_7, VAR_8);
 FUNC_6(VAR_6, VAR_7, VAR_8);
 FUNC_5(VAR_6, VAR_7, VAR_8);

 FUNC_0(VAR_8);
 FUNC_0(VAR_7);
 FUNC_0(VAR_6);

 FUNC_9();

 return (0);
}
