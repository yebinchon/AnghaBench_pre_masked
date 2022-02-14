
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_0 (int *,int ,int ,int*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(uint32_t *VAR_5)
{
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return (VAR_2);

 if (FUNC_0(VAR_4, VAR_0, 0, &VAR_6) == ((void*)0)) {
  FUNC_1(VAR_1, "kvm_getprocs failed: %m");
  return (VAR_2);
 }

 *VAR_5 = VAR_6;
 return (VAR_3);
}
