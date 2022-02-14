
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
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_ring*,unsigned int,int ) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_5,
     unsigned VAR_6, uint64_t VAR_7)
{
 int VAR_8 = (VAR_5->funcs->type == VAR_0);

 FUNC_3(VAR_5, VAR_6, VAR_7);


 FUNC_4(VAR_5, FUNC_0(VAR_3, 5));
 FUNC_4(VAR_5, (FUNC_2(0) |
     FUNC_1(0)));
 FUNC_4(VAR_5, VAR_4);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_5, 0x20);

 if (VAR_8) {

  FUNC_4(VAR_5, FUNC_0(VAR_1, 0));
  FUNC_4(VAR_5, 0x0);


  FUNC_4(VAR_5, FUNC_0(VAR_2, 0));
  FUNC_4(VAR_5, 0);
  FUNC_4(VAR_5, FUNC_0(VAR_2, 0));
  FUNC_4(VAR_5, 0);
 }
}
