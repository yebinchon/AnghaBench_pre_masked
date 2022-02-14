
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_0 (int ,int ,int*,int ,int ,size_t,int ) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static struct resource *
FUNC_4(device_t VAR_4, device_t VAR_5, int *VAR_6, size_t VAR_7)
{
 struct resource *VAR_8;
 vm_paddr_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_5, VAR_2, VAR_6, VAR_0,
     ~0, VAR_7, VAR_1);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = FUNC_3(VAR_9, VAR_9 + VAR_7,
     VAR_3);
 if (VAR_10) {
  FUNC_1(VAR_5, VAR_2, *VAR_6, VAR_8);
  return (((void*)0));
 }

 return (VAR_8);
}
