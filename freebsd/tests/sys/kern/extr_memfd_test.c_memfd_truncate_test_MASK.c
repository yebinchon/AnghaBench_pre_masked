
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0((VAR_7 = FUNC_4("...", VAR_1)) != -1);
 FUNC_0(FUNC_3(VAR_7, VAR_3) == 0);

 FUNC_0(FUNC_2(VAR_7, VAR_0, VAR_5) == 0);

 VAR_6 = FUNC_3(VAR_7, VAR_4);
 if (VAR_6 != 0)
  VAR_6 = VAR_2;
 FUNC_1(VAR_7);
 return (VAR_6);
}
