
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_ring {scalar_t__ me; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct amdgpu_ring *VAR_6)
{
 u32 VAR_7 = 0;

 if (VAR_6->me == 0)
  VAR_7 = FUNC_0(VAR_7, VAR_0, VAR_1, 1);
 else
  VAR_7 = FUNC_0(VAR_7, VAR_0, VAR_2, 1);

 FUNC_6(VAR_6, FUNC_1(VAR_3) |
     FUNC_5(1) |
     FUNC_4(3));
 FUNC_6(VAR_6, VAR_4 << 2);
 FUNC_6(VAR_6, VAR_5 << 2);
 FUNC_6(VAR_6, VAR_7);
 FUNC_6(VAR_6, VAR_7);
 FUNC_6(VAR_6, FUNC_3(0xfff) |
     FUNC_2(10));
}
