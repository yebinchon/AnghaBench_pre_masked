
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_1();

 if (VAR_3 == 'y' || VAR_3 == 'Y')
  VAR_2 = 1;
 else
  VAR_2 = 0;

 while (VAR_3 != '\n' && VAR_3 != VAR_0)
  VAR_3 = FUNC_1();

 return (VAR_2);
}
