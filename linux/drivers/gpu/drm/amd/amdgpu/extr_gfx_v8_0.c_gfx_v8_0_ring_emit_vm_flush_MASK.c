
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_ring*,unsigned int,int ) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_4,
     unsigned VAR_5, uint64_t VAR_6)
{
 int VAR_7 = (VAR_4->funcs->type == VAR_0);

 FUNC_4(VAR_4, VAR_5, VAR_6);


 FUNC_5(VAR_4, FUNC_0(VAR_2, 5));
 FUNC_5(VAR_4, (FUNC_3(0) |
     FUNC_2(0) |
     FUNC_1(0)));
 FUNC_5(VAR_4, VAR_3);
 FUNC_5(VAR_4, 0);
 FUNC_5(VAR_4, 0);
 FUNC_5(VAR_4, 0);
 FUNC_5(VAR_4, 0x20);


 if (VAR_7) {

  FUNC_5(VAR_4, FUNC_0(VAR_1, 0));
  FUNC_5(VAR_4, 0x0);
 }
}
