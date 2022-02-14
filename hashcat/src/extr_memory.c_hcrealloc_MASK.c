
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ,size_t const) ;
 void* FUNC_2 (void*,size_t const) ;
 int VAR_1 ;

void *FUNC_3 (void *VAR_2, const size_t VAR_3, const size_t VAR_4)
{
  void *VAR_5 = FUNC_2 (VAR_2, VAR_3 + VAR_4);

  if (VAR_5 == ((void*)0))
  {
    FUNC_0 (VAR_1, "%s\n", VAR_0);

    return (((void*)0));
  }

  FUNC_1 ((char *) VAR_5 + VAR_3, 0, VAR_4);

  return (VAR_5);
}
