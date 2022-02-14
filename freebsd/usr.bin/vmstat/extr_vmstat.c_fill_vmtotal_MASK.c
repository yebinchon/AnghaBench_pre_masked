
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmtotal {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,struct vmtotal*,size_t*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(struct vmtotal *VAR_1)
{
 size_t VAR_2;

 if (VAR_0 != ((void*)0)) {

  FUNC_1(1, "not implemented");
 } else {
  VAR_2 = sizeof(*VAR_1);
  FUNC_0("vm.vmtotal", VAR_1, &VAR_2);
  if (VAR_2 != sizeof(*VAR_1))
   FUNC_1(1, "vm.total size mismatch");
 }
}
