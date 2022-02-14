
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;
 register int VAR_7, VAR_8, VAR_9, VAR_10;
 char VAR_11[VAR_0];

 FUNC_5(VAR_2, VAR_11);
 if (VAR_3 >= 2)
  VAR_5 = FUNC_0(VAR_4[1]);
 else
  VAR_5 = 79;
 if (VAR_3 >= 3)
  VAR_6 = FUNC_0(VAR_4[2]);
 else
  VAR_6 = 200;
 VAR_9 = ' ';
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (++VAR_9 == 0177)
   VAR_9 = ' ';
  VAR_10 = VAR_9;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
   if (FUNC_4(VAR_10) == VAR_1)
    FUNC_1(1, "Write error");
   if (++VAR_10 == 0177)
    VAR_10 = ' ';
  }
  if (FUNC_4('\n') == VAR_1)
   FUNC_1(1, "Write error");
 }
 (void) FUNC_3(VAR_2);
 FUNC_2(0);
}
