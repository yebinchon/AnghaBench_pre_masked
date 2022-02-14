
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GModule ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int) ;
 char* FUNC_2 (void*,int) ;

char *
FUNC_3 (GModule VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  void *VAR_5 = FUNC_0 (VAR_2, VAR_0);
  void *VAR_6 = FUNC_0 (VAR_2, VAR_1);

  if (!VAR_5 || !VAR_6)
    return ((void*)0);


  if ((VAR_4 = FUNC_1 (VAR_5, VAR_3)) == 0)
    return ((void*)0);

  return FUNC_2 (VAR_6, VAR_4);
}
