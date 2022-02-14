
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ring {int me; int pipe; TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = VAR_7->funcs->type == VAR_0 ? 0 : 1;

 if (VAR_7->funcs->type == VAR_0) {
  switch (VAR_7->me) {
  case 1:
   VAR_8 = VAR_2 << VAR_7->pipe;
   break;
  case 2:
   VAR_8 = VAR_3 << VAR_7->pipe;
   break;
  default:
   return;
  }
 } else {
  VAR_8 = VAR_1;
 }

 FUNC_4(VAR_7, FUNC_0(VAR_4, 5));
 FUNC_4(VAR_7, (FUNC_3(1) |
     FUNC_2(3) |
     FUNC_1(VAR_9)));
 FUNC_4(VAR_7, VAR_6);
 FUNC_4(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_8);
 FUNC_4(VAR_7, VAR_8);
 FUNC_4(VAR_7, 0x20);
}
