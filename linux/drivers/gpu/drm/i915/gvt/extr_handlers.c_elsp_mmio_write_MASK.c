
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int index; int * data; } ;
struct intel_vgpu_execlist {TYPE_2__ elsp_dwords; } ;
struct TYPE_3__ {struct intel_vgpu_execlist* execlist; } ;
struct intel_vgpu {TYPE_1__ submission; int gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct intel_vgpu*,int) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_2, unsigned int VAR_3,
  void *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2->gvt, VAR_3);
 struct intel_vgpu_execlist *VAR_7;
 u32 VAR_8 = *(u32 *)VAR_4;
 int VAR_9 = 0;

 if (FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_1))
  return -VAR_0;

 VAR_7 = &VAR_2->submission.execlist[VAR_6];

 VAR_7->elsp_dwords.data[3 - VAR_7->elsp_dwords.index] = VAR_8;
 if (VAR_7->elsp_dwords.index == 3) {
  VAR_9 = FUNC_3(VAR_2, VAR_6);
  if(VAR_9)
   FUNC_1("fail submit workload on ring %d\n",
    VAR_6);
 }

 ++VAR_7->elsp_dwords.index;
 VAR_7->elsp_dwords.index &= 0x3;
 return VAR_9;
}
