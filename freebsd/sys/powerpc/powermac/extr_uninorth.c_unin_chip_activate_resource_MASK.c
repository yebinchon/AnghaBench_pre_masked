
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
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
FUNC_9(device_t VAR_6, device_t VAR_7, int VAR_8, int VAR_9,
       struct resource *VAR_10)
{
 void *VAR_11;

 if (VAR_8 == VAR_2)
                return (FUNC_0(VAR_6, VAR_8, VAR_9, VAR_10));

 if ((VAR_8 == VAR_3) || (VAR_8 == VAR_1)) {
  vm_offset_t VAR_12;

  VAR_12 = (vm_offset_t) FUNC_5(VAR_10);

  if (VAR_4)
   FUNC_2("unin mapdev: start %zx, len %jd\n", VAR_12,
          FUNC_4(VAR_10));

  VAR_11 = FUNC_1(VAR_12, (vm_size_t) FUNC_4(VAR_10));
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  FUNC_8(VAR_10, VAR_11);
  FUNC_7(VAR_10, &VAR_5);
  FUNC_6(VAR_10, (u_long)VAR_11);
 }

 return (FUNC_3(VAR_10));
}
