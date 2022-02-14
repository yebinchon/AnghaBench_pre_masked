
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int len ;


 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,void*,size_t) ;

void
FUNC_3(void **VAR_0, size_t *VAR_1, int VAR_2)
{
 ssize_t VAR_3;
 size_t VAR_4;
 void *VAR_5;

 VAR_3 = FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_3 != sizeof(VAR_4))
  FUNC_1(1, "read");

 VAR_5 = FUNC_0(1, VAR_4);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "calloc");

 VAR_3 = FUNC_2(VAR_2, VAR_5, VAR_4);
 if (VAR_3 != (ssize_t)VAR_4)
  FUNC_1(1, "read");

 *VAR_0 = VAR_5;
 *VAR_1 = VAR_4;
}
