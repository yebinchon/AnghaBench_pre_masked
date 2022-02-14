
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,size_t,size_t,int (*) (void const*,void const*,void*),char*,void*) ;
 size_t FUNC_2 (size_t,size_t) ;
 char* FUNC_3 (size_t const) ;

int FUNC_4(void *VAR_0, size_t VAR_1, size_t VAR_2,
  int (*VAR_3)(const void *, const void *, void *), void *VAR_4)
{
 const size_t VAR_5 = FUNC_2(VAR_1, VAR_2);
 char VAR_6[1024];

 if (!VAR_1)
  return 0;
 if (!VAR_0 || !VAR_3)
  return -1;

 if (VAR_5 < sizeof(VAR_6)) {

  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6, VAR_4);
 } else {

  char *VAR_7 = FUNC_3(VAR_5);
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_4);
  FUNC_0(VAR_7);
 }
 return 0;
}
