
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram_header {int dummy; } ;


 int FUNC_0 (char*,int *,size_t) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 char* FUNC_2 (size_t) ;

char *FUNC_3(size_t *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 if (!VAR_1) {
  VAR_3 = FUNC_1();
  if (VAR_3)
   return ((void*)0);
 }

 *VAR_2 = VAR_1 - sizeof(struct nvram_header);
 VAR_4 = FUNC_2(*VAR_2);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(VAR_4, &VAR_0[sizeof(struct nvram_header)], *VAR_2);

 return VAR_4;
}
