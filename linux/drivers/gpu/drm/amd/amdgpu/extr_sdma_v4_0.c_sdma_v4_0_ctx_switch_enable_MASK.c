
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
 unsigned int FUNC_1 (int,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int,char*,unsigned int) ;
 int FUNC_3 (int,int ,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

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
  VAR_13 = FUNC_1(VAR_15, VAR_7);
  VAR_13 = FUNC_0(VAR_13, VAR_1,
    VAR_0, VAR_12 ? 1 : 0);
  if (VAR_12 && VAR_6) {
   FUNC_3(VAR_15, VAR_8, VAR_14);
   FUNC_3(VAR_15, VAR_9, VAR_14);
   FUNC_3(VAR_15, VAR_10, VAR_14);
  }
  FUNC_3(VAR_15, VAR_7, VAR_13);
 }

}
