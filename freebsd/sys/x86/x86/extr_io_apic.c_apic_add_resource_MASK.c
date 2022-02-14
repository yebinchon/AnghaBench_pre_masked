
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int ,size_t) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, int VAR_3, vm_paddr_t VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_2("apic_add_resource: resource %d failed set with %d", VAR_3,
      VAR_6);
 FUNC_0(VAR_2, VAR_1, &VAR_3, VAR_0);
}
