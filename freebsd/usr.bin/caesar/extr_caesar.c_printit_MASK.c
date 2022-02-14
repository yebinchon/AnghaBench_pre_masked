
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(char *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2)) < 0) {
  (void)FUNC_3(VAR_1, "caesar: bad rotation value.\n");
  FUNC_2(1);
 }
 while ((VAR_3 = FUNC_4()) != VAR_0)
  FUNC_5(FUNC_0(VAR_3, VAR_4));
 FUNC_2(0);
}
