
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (int*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(void)
{
 char VAR_4[] = "pipe.XXXXXXXXXX";
 int VAR_5, VAR_6[10000], VAR_7;
 unsigned int VAR_8;

 VAR_5 = -1;

 if (FUNC_3(VAR_4) == -1)
  FUNC_1(1, "mkstemp failed");

 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_6); VAR_8++) {
  VAR_7 = FUNC_5(VAR_4, VAR_2);
  if (VAR_7 == -1 && (VAR_3 == VAR_1 || VAR_3 == VAR_0))
   break;
  else
   VAR_5 = VAR_7;
 }


 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_7 = FUNC_6(&VAR_6[VAR_8]);
 }





 FUNC_0(VAR_5);

 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_7 = FUNC_6(&VAR_6[VAR_8]);
 }
 FUNC_7("PASS\n");

 FUNC_8(VAR_4);

 FUNC_2(0);
}
