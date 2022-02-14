
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void FUNC_2(
  struct amdgpu_device *VAR_4,
  bool VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 && (VAR_4->cg_flags & VAR_0)) {
  for (VAR_8 = 0; VAR_8 < VAR_4->sdma.num_instances; VAR_8++) {
   VAR_6 = VAR_7 = FUNC_0(VAR_2 + VAR_3[VAR_8]);
   VAR_7 |= VAR_1;

   if (VAR_6 != VAR_7)
    FUNC_1(VAR_2 + VAR_3[VAR_8], VAR_7);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_4->sdma.num_instances; VAR_8++) {
   VAR_6 = VAR_7 = FUNC_0(VAR_2 + VAR_3[VAR_8]);
   VAR_7 &= ~VAR_1;

   if (VAR_6 != VAR_7)
    FUNC_1(VAR_2 + VAR_3[VAR_8], VAR_7);
  }
 }
}
