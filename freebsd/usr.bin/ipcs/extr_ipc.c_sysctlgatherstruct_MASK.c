
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scgs_vector {size_t offset; size_t size; int * sysctl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int,char*,int *,size_t,size_t) ;
 int FUNC_3 (int *,char*,size_t*,int *,int ) ;

void
FUNC_4(void *VAR_0, size_t VAR_1, struct scgs_vector *VAR_2)
{
 struct scgs_vector *VAR_3;
 size_t VAR_4;
 int VAR_5;

 for (VAR_3 = VAR_2; VAR_3->sysctl != ((void*)0); VAR_3++) {
  FUNC_0(VAR_3->offset <= VAR_1);
  VAR_4 = VAR_3->size;
  VAR_5 = FUNC_3(VAR_3->sysctl, (char *)VAR_0 + VAR_3->offset,
      &VAR_4, ((void*)0), 0);
  if (VAR_5 == -1)
   FUNC_1(1, "sysctlbyname: %s", VAR_3->sysctl);
  if (VAR_4 != VAR_3->size)
   FUNC_2(1, "%s size mismatch (expected %zu, got %zu)",
       VAR_3->sysctl, VAR_3->size, VAR_4);
 }
}
