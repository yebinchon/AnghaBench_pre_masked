
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_ring {scalar_t__ me; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_5)
{
 u32 VAR_6 = (FUNC_2(1) |
     FUNC_1(3));
 u32 VAR_7;

 if (VAR_5->me == 0)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 FUNC_3(VAR_5, FUNC_0(VAR_2, 0, VAR_6));
 FUNC_3(VAR_5, VAR_3 << 2);
 FUNC_3(VAR_5, VAR_4 << 2);
 FUNC_3(VAR_5, VAR_7);
 FUNC_3(VAR_5, VAR_7);
 FUNC_3(VAR_5, (0xfff << 16) | 10);
}
