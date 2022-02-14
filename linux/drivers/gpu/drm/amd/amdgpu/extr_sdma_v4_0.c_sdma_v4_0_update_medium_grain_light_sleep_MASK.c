
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(
  struct amdgpu_device *VAR_3,
  bool VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 if (VAR_4 && (VAR_3->cg_flags & VAR_0)) {
  for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {

   VAR_6 = VAR_5 = FUNC_0(0, VAR_2);
   VAR_5 |= VAR_1;
   if (VAR_6 != VAR_5)
    FUNC_1(0, VAR_2, VAR_5);
  }
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {

   VAR_6 = VAR_5 = FUNC_0(0, VAR_2);
   VAR_5 &= ~VAR_1;
   if (VAR_6 != VAR_5)
    FUNC_1(0, VAR_2, VAR_5);
  }
 }
}
