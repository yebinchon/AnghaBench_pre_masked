
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int,char*,unsigned int) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_12, bool VAR_13)
{
 u32 VAR_14, VAR_15 = 0;
 int VAR_16;

 if (VAR_7) {
  unsigned VAR_17 = VAR_7;
  unsigned VAR_18 = 0;

  while (VAR_17 > (VAR_5 >>
    VAR_6)) {
   VAR_17 = (VAR_17 + 1) >> 1;
   VAR_18++;
  }
  if (VAR_18 > (VAR_3 >>
       VAR_4)) {
   VAR_17 = (VAR_5 >>
     VAR_6);
   VAR_18 = (VAR_3 >>
    VAR_4);
   FUNC_2(1,
   "clamping sdma_phase_quantum to %uK clock cycles\n",
      VAR_17 << VAR_18);
  }
  VAR_15 =
   VAR_17 << VAR_6 |
   VAR_18 << VAR_4;
 }

 for (VAR_16 = 0; VAR_16 < VAR_12->sdma.num_instances; VAR_16++) {
  VAR_14 = FUNC_1(VAR_8 + VAR_11[VAR_16]);
  if (VAR_13) {
   VAR_14 = FUNC_0(VAR_14, VAR_2,
     VAR_1, 1);
   VAR_14 = FUNC_0(VAR_14, VAR_2,
     VAR_0, 1);
   if (VAR_7) {
    FUNC_3(VAR_9 + VAR_11[VAR_16],
           VAR_15);
    FUNC_3(VAR_10 + VAR_11[VAR_16],
           VAR_15);
   }
  } else {
   VAR_14 = FUNC_0(VAR_14, VAR_2,
     VAR_1, 0);
   VAR_14 = FUNC_0(VAR_14, VAR_2,
     VAR_0, 1);
  }

  FUNC_3(VAR_8 + VAR_11[VAR_16], VAR_14);
 }
}
