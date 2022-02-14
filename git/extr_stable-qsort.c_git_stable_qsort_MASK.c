
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,size_t,size_t,int (*) (void const*,void const*),char*) ;
 size_t FUNC_2 (size_t,size_t) ;
 char* FUNC_3 (size_t const) ;

void FUNC_4(void *VAR_0, size_t VAR_1, size_t VAR_2,
        int (*VAR_3)(const void *, const void *))
{
 const size_t VAR_4 = FUNC_2(VAR_1, VAR_2);
 char VAR_5[1024];

 if (VAR_4 < sizeof(VAR_5)) {

  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 } else {

  char *VAR_6 = FUNC_3(VAR_4);
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
  FUNC_0(VAR_6);
 }
}
