
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct charlcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct charlcd*,char const) ;
 int FUNC_1 (struct charlcd*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_1, int VAR_2, const char *VAR_3)
{
 u8 VAR_4;
 int VAR_5;






 if (VAR_2 == 0)
  VAR_4 = 0;
 else if (VAR_2 == 1)
  VAR_4 = 0x28;
 else
  return;


 FUNC_1(VAR_1, VAR_0 | VAR_4);


 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3) && VAR_5 < 0x28; VAR_5++)
  FUNC_0(VAR_1, VAR_3[VAR_5]);
}
