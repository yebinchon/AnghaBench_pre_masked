
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct amdgpu_ring {int doorbell_index; TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_ring *VAR_2,
       struct amdgpu_ring *VAR_3,
       u64 VAR_4,
       u64 VAR_5)
{
 uint32_t VAR_6 = VAR_3->funcs->type == VAR_0 ? 4 : 0;

 FUNC_6(VAR_2, FUNC_0(VAR_1, 5));
 FUNC_6(VAR_2,
     FUNC_2(0) |
     FUNC_5(0) |
     FUNC_1(2));
 FUNC_6(VAR_2,
     FUNC_3(VAR_3->doorbell_index) |
     FUNC_4(VAR_6));
 FUNC_6(VAR_2, FUNC_7(VAR_4));
 FUNC_6(VAR_2, FUNC_8(VAR_4));
 FUNC_6(VAR_2, FUNC_7(VAR_5));
 FUNC_6(VAR_2, FUNC_8(VAR_5));
}
