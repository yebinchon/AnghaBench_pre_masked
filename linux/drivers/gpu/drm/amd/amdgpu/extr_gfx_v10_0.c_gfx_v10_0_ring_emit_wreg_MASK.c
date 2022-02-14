
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_2__ {int type; } ;




 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_2, uint32_t VAR_3,
       uint32_t VAR_4)
{
 uint32_t VAR_5 = 0;

 switch (VAR_2->funcs->type) {
 case 129:
  VAR_5 = FUNC_1(1) | VAR_1;
  break;
 case 128:
  VAR_5 = (1 << 16);
  break;
 default:
  VAR_5 = VAR_1;
  break;
 }
 FUNC_2(VAR_2, FUNC_0(VAR_0, 3));
 FUNC_2(VAR_2, VAR_5);
 FUNC_2(VAR_2, VAR_3);
 FUNC_2(VAR_2, 0);
 FUNC_2(VAR_2, VAR_4);
}
