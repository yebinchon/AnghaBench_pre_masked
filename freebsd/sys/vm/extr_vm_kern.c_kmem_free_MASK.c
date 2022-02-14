
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
struct vmem {int dummy; } ;


 struct vmem* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmem*,int ,int ) ;

void
FUNC_3(vm_offset_t VAR_1, vm_size_t VAR_2)
{
 struct vmem *VAR_3;

 VAR_2 = FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3, VAR_1, VAR_2);
}
