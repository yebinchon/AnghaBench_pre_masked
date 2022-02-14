
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_context ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5(char **VAR_0)
{
 mbedtls_pk_context VAR_1;
 unsigned int VAR_2 = 512;
 int VAR_3 = 65537;
 char *VAR_4 = ((void*)0);
 bool VAR_5 = 1;

 while (*VAR_0 && **VAR_0 == '-') {
  if (!FUNC_3(*VAR_0, "-out") && VAR_0[1]) {
   VAR_4 = VAR_0[1];
   VAR_0++;
  } else if (!FUNC_3(*VAR_0, "-3")) {
   VAR_3 = 3;
  } else if (!FUNC_3(*VAR_0, "-der")) {
   VAR_5 = 0;
  }
  VAR_0++;
 }

 if (*VAR_0)
  VAR_2 = (unsigned int)FUNC_0(*VAR_0);

 FUNC_1(&VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_4(&VAR_1, VAR_4, VAR_5);

 FUNC_2(&VAR_1);

 return 0;
}
