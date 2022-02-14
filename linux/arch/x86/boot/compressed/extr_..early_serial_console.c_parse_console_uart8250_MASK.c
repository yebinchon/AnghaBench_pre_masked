
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int optstr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_1[64], *VAR_2;
 int VAR_3 = VAR_0;
 int VAR_4 = 0;





 if (FUNC_0("console", VAR_1, sizeof(VAR_1)) <= 0)
  return;

 VAR_2 = VAR_1;

 if (!FUNC_4(VAR_2, "uart8250,io,", 12))
  VAR_4 = FUNC_3(VAR_2 + 12, &VAR_2, 0);
 else if (!FUNC_4(VAR_2, "uart,io,", 8))
  VAR_4 = FUNC_3(VAR_2 + 8, &VAR_2, 0);
 else
  return;

 if (VAR_2 && (VAR_2[0] == ','))
  VAR_3 = FUNC_3(VAR_2 + 1, &VAR_2, 0);
 else
  VAR_3 = FUNC_2(VAR_4);

 if (VAR_4)
  FUNC_1(VAR_4, VAR_3);
}
