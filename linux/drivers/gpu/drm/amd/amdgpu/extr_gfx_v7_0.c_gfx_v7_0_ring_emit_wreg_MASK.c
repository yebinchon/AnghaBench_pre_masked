
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_2,
        uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5 = (VAR_2->funcs->type == VAR_0);

 FUNC_3(VAR_2, FUNC_0(VAR_1, 3));
 FUNC_3(VAR_2, (FUNC_2(VAR_5) |
     FUNC_1(0)));
 FUNC_3(VAR_2, VAR_3);
 FUNC_3(VAR_2, 0);
 FUNC_3(VAR_2, VAR_4);
}
