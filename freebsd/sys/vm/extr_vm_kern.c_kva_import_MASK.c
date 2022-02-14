
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_size_t ;
typedef int vmem_addr_t ;
typedef int vm_offset_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int ,int *,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_7, vmem_size_t VAR_8, int VAR_9, vmem_addr_t *VAR_10)
{
 vm_offset_t VAR_11;
 int VAR_12;

 FUNC_0((VAR_8 % VAR_2) == 0,
     ("kva_import: Size %jd is not a multiple of %d",
     (intmax_t)VAR_8, (int)VAR_2));
 VAR_11 = FUNC_2(VAR_6);
 VAR_12 = FUNC_1(VAR_6, ((void*)0), 0, &VAR_11, VAR_8, 0,
     VAR_4, VAR_5, VAR_5, VAR_3);
 if (VAR_12 != VAR_1)
                return (VAR_0);

 *VAR_10 = VAR_11;

 return (0);
}
