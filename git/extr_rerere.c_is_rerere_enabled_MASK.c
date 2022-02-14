
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_3(FUNC_2());
 if (VAR_0 < 0)
  return VAR_1;

 if (!VAR_1 && FUNC_4(FUNC_2()))
  FUNC_1(FUNC_0("could not create directory '%s'"), FUNC_2());
 return 1;
}
