
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_ring*,unsigned int,int ) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_2,
      unsigned VAR_3, uint64_t VAR_4)
{
 FUNC_1(VAR_2, VAR_3, VAR_4);


 if (VAR_2->funcs->type == VAR_0) {

  FUNC_2(VAR_2, FUNC_0(VAR_1, 0));
  FUNC_2(VAR_2, 0x0);
 }
}
