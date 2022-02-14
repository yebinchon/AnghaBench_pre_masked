
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct intel_vgpu {int dummy; } ;
struct TYPE_2__ {int mapped; int * gfn; scalar_t__ va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct intel_vgpu*,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_4, bool VAR_5)
{
 u64 VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_2(FUNC_3(VAR_4)->va
   + VAR_7 * VAR_3);
  if (VAR_6 == VAR_1) {
   FUNC_0("fail to get MFN from VA\n");
   return -VAR_0;
  }
  VAR_8 = FUNC_1(VAR_4,
    FUNC_3(VAR_4)->gfn[VAR_7],
    VAR_6, 1, VAR_5);
  if (VAR_8) {
   FUNC_0("fail to map GFN to MFN, errno: %d\n",
    VAR_8);
   return VAR_8;
  }
 }

 FUNC_3(VAR_4)->mapped = VAR_5;

 return 0;
}
