
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int,char const*,int) ;
 int FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, 0666);
 FUNC_0(VAR_2 != -1);

 if (VAR_1) {
  FUNC_1(FUNC_4(VAR_2, VAR_1, FUNC_5(VAR_1)));
 } else {
  FUNC_1(FUNC_4(VAR_2, VAR_0, FUNC_5(VAR_0)));
  FUNC_1(FUNC_4(VAR_2, "\n", 1));
 }

 FUNC_1(FUNC_2(VAR_2));
}
