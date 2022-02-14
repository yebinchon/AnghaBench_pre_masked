
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_3(FUNC_0(VAR_1)))
  return (0);
 (void)FUNC_1(VAR_1, "overwrite %s? ", VAR_2);
 VAR_4 = VAR_3 = FUNC_2();
 while (VAR_3 != '\n' && VAR_3 != VAR_0)
  VAR_3 = FUNC_2();
 return (VAR_4 == 'y');
}
