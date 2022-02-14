
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int,char**) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int,char**) ;

int
FUNC_10(int VAR_8, char *VAR_9[])
{
 int VAR_10;

 if (FUNC_7(VAR_0, VAR_1) != VAR_1)
  (void)FUNC_7(VAR_0, VAR_6);
 VAR_10 = FUNC_6(VAR_8, VAR_9);
 if (!VAR_10) {



  if (VAR_5)
   VAR_10 = FUNC_4(VAR_8, VAR_9);
  else if (VAR_3 == 1)
   VAR_10 = FUNC_5(VAR_8, VAR_9);
  else if (VAR_2)
   VAR_10 = FUNC_3(VAR_8, VAR_9);
  else
   VAR_10 = FUNC_9(VAR_8, VAR_9);
  FUNC_2(VAR_7);
 } else
  FUNC_8();
 FUNC_1();
 if (VAR_4 || VAR_10)
  FUNC_0(1);
 return(0);
}
