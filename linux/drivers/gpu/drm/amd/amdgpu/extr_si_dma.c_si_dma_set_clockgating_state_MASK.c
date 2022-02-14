
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ sdma; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_7,
       enum amd_clockgating_state VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 bool VAR_13;
 struct amdgpu_device *VAR_14 = (struct amdgpu_device *)VAR_7;

 VAR_13 = (VAR_8 == VAR_0) ? 1 : 0;

 if (VAR_13 && (VAR_14->cg_flags & VAR_1)) {
  for (VAR_12 = 0; VAR_12 < VAR_14->sdma.num_instances; VAR_12++) {
   if (VAR_12 == 0)
    VAR_11 = VAR_2;
   else
    VAR_11 = VAR_3;
   VAR_9 = VAR_10 = FUNC_0(VAR_5 + VAR_11);
   VAR_10 &= ~VAR_6;
   if (VAR_10 != VAR_9)
    FUNC_1(VAR_5 + VAR_11, VAR_10);
   FUNC_1(VAR_4 + VAR_11, 0x00000100);
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_14->sdma.num_instances; VAR_12++) {
   if (VAR_12 == 0)
    VAR_11 = VAR_2;
   else
    VAR_11 = VAR_3;
   VAR_9 = VAR_10 = FUNC_0(VAR_5 + VAR_11);
   VAR_10 |= VAR_6;
   if (VAR_10 != VAR_9)
    FUNC_1(VAR_5 + VAR_11, VAR_10);

   VAR_9 = VAR_10 = FUNC_0(VAR_4 + VAR_11);
   VAR_10 = 0xff000000;
   if (VAR_10 != VAR_9)
    FUNC_1(VAR_4 + VAR_11, VAR_10);
  }
 }

 return 0;
}
