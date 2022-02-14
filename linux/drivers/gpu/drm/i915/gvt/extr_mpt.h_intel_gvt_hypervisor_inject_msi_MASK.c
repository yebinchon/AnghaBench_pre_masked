
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct intel_vgpu {int handle; int id; TYPE_3__* gvt; } ;
struct TYPE_8__ {TYPE_1__* mpt; } ;
struct TYPE_6__ {unsigned long msi_cap_offset; } ;
struct TYPE_7__ {TYPE_2__ device_info; } ;
struct TYPE_5__ {int (* inject_msi ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int,char*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct intel_vgpu*) ;

__attribute__((used)) static inline int FUNC_8(struct intel_vgpu *VAR_3)
{
 unsigned long VAR_4 = VAR_3->gvt->device_info.msi_cap_offset;
 u16 VAR_5, VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_5 = *(u16 *)(FUNC_7(VAR_3) + FUNC_2(VAR_4));
 VAR_7 = *(u32 *)(FUNC_7(VAR_3) + FUNC_1(VAR_4));
 VAR_6 = *(u16 *)(FUNC_7(VAR_3) + FUNC_3(VAR_4));


 if (!(VAR_5 & VAR_1))
  return 0;

 if (FUNC_4(VAR_5 & FUNC_0(15, 1), "only support one MSI format\n"))
  return -VAR_0;

 FUNC_6(VAR_3->id, VAR_7, VAR_6);

 VAR_8 = VAR_2.mpt->inject_msi(VAR_3->handle, VAR_7, VAR_6);
 if (VAR_8)
  return VAR_8;
 return 0;
}
