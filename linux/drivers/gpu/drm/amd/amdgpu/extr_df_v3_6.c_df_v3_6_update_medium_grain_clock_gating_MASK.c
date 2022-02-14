
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {int cg_flags; TYPE_1__* df_funcs; } ;
struct TYPE_2__ {int (* enable_broadcast_mode ) (struct amdgpu_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_6,
           bool VAR_7)
{
 u32 VAR_8;


 VAR_6->df_funcs->enable_broadcast_mode(VAR_6, 1);

 if (VAR_7 && (VAR_6->cg_flags & VAR_0)) {
  VAR_8 = FUNC_0(VAR_1, 0, VAR_5);
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_4;
  FUNC_1(VAR_1, 0, VAR_5, VAR_8);
 } else {
  VAR_8 = FUNC_0(VAR_1, 0, VAR_5);
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_3;
  FUNC_1(VAR_1, 0, VAR_5, VAR_8);
 }


 VAR_6->df_funcs->enable_broadcast_mode(VAR_6, 0);
}
