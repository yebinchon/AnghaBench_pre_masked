
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GModule ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,char const*) ;
 int FUNC_2 (void*,char const*) ;

int
FUNC_3 (GModule VAR_1, const char *VAR_2)
{
  int VAR_3 = -1;
  void *VAR_4 = FUNC_0 (VAR_1, VAR_0);

  if (!VAR_4)
    return -1;

  if ((VAR_3 = FUNC_1 (VAR_4, VAR_2)) != -1)
    return 0;

  return FUNC_2 (VAR_4, VAR_2);
}
