
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,struct resource*) ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int *) ;
 int FUNC_8 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
    struct resource *VAR_9)
{
 void *VAR_10;

 if (VAR_7 == VAR_1)
  return (FUNC_0(VAR_5, VAR_7, VAR_8, VAR_9));

 if (VAR_7 == VAR_2) {
  vm_offset_t VAR_11;

  VAR_11 = (vm_offset_t) FUNC_5(VAR_9);

  if (VAR_3)
   FUNC_2("ps3 mapdev: start %zx, len %ld\n", VAR_11,
          FUNC_4(VAR_9));

  VAR_10 = FUNC_1(VAR_11, (vm_size_t) FUNC_4(VAR_9));
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  FUNC_8(VAR_9, VAR_10);
  FUNC_7(VAR_9, &VAR_4);
  FUNC_6(VAR_9, (rman_res_t)VAR_10);
 }

 return (FUNC_3(VAR_9));
}
