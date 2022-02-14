
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static const char *FUNC_4(void)
{
 const char *VAR_1 = FUNC_1(&VAR_0);
 if (VAR_1)
  return VAR_1;
 if (FUNC_0(&VAR_0))
  FUNC_3("error reading from fast-import");
 FUNC_2("unexpected end of fast-import feedback");
}
