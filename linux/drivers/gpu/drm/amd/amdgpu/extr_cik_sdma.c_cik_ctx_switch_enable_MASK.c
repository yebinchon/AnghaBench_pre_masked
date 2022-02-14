
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int,char*,unsigned int) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_11, bool VAR_12)
{
 u32 VAR_13, VAR_14 = 0;
 int VAR_15;

 if (VAR_6) {
  unsigned VAR_16 = VAR_6;
  unsigned VAR_17 = 0;

  while (VAR_16 > (VAR_4 >>
    VAR_5)) {
   VAR_16 = (VAR_16 + 1) >> 1;
   VAR_17++;
  }
  if (VAR_17 > (VAR_2 >>
       VAR_3)) {
   VAR_16 = (VAR_4 >>
     VAR_5);
   VAR_17 = (VAR_2 >>
    VAR_3);
   FUNC_2(1,
   "clamping sdma_phase_quantum to %uK clock cycles\n",
      VAR_16 << VAR_17);
  }
  VAR_14 =
   VAR_16 << VAR_5 |
   VAR_17 << VAR_3;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11->sdma.num_instances; VAR_15++) {
  VAR_13 = FUNC_1(VAR_7 + VAR_10[VAR_15]);
  if (VAR_12) {
   VAR_13 = FUNC_0(VAR_13, VAR_1,
     VAR_0, 1);
   if (VAR_6) {
    FUNC_3(VAR_8 + VAR_10[VAR_15],
           VAR_14);
    FUNC_3(VAR_9 + VAR_10[VAR_15],
           VAR_14);
   }
  } else {
   VAR_13 = FUNC_0(VAR_13, VAR_1,
     VAR_0, 0);
  }

  FUNC_3(VAR_7 + VAR_10[VAR_15], VAR_13);
 }
}
