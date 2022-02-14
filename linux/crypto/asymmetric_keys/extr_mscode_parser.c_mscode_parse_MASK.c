
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pefile_context {int dummy; } ;


 int FUNC_0 (int *,struct pefile_context*,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t,unsigned int,void const*) ;

int FUNC_2(void *VAR_1, const void *VAR_2, size_t VAR_3,
   size_t VAR_4)
{
 struct pefile_context *VAR_5 = VAR_1;

 VAR_2 -= VAR_4;
 VAR_3 += VAR_4;
 FUNC_1("Data: %zu [%*ph]\n", VAR_3, (unsigned)(VAR_3),
   VAR_2);

 return FUNC_0(&VAR_0, VAR_5, VAR_2, VAR_3);
}
