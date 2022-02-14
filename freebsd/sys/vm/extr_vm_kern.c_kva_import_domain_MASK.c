
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_size_t ;
typedef int vmem_addr_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int,int,int ,int ,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, vmem_size_t VAR_4, int VAR_5, vmem_addr_t *VAR_6)
{

 FUNC_0((VAR_4 % VAR_0) == 0,
     ("kva_import_domain: Size %jd is not a multiple of %d",
     (intmax_t)VAR_4, (int)VAR_0));
 return (FUNC_1(VAR_3, VAR_4, VAR_0, 0, 0, VAR_2,
     VAR_1, VAR_5, VAR_6));
}
