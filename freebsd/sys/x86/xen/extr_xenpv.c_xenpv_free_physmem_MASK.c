
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 size_t FUNC_1 (struct resource*) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, struct resource *VAR_4)
{
 vm_paddr_t VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_4);

 FUNC_3(VAR_5, VAR_5 + VAR_6);
 return (FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4));
}
