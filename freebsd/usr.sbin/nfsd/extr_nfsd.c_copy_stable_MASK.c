
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 static char VAR_6[1024];

 VAR_5 = FUNC_2(VAR_2, (off_t)0, VAR_1);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_2(VAR_3, (off_t)0, VAR_1);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_1(VAR_3, (off_t)0);
 if (VAR_5 >= 0)
  do {
   VAR_4 = FUNC_3(VAR_2, VAR_6, 1024);
   if (VAR_4 > 0)
    VAR_5 = FUNC_5(VAR_3, VAR_6, VAR_4);
   else if (VAR_4 < 0)
    VAR_5 = VAR_4;
  } while (VAR_4 > 0 && VAR_5 >= 0);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0)
  FUNC_4(VAR_0, "stable restart copy failure: %m");
}
