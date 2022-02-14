
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char const*) ;
 int VAR_0 ;

int FUNC_4(const char *VAR_1, int VAR_2, unsigned VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 && !FUNC_2(VAR_0, VAR_3))
  FUNC_3(FUNC_0("unable to access '%s'"), VAR_1);
 return VAR_4;
}
