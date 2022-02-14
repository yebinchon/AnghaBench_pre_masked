
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_5 ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_ring *VAR_6, u64 VAR_7,
      u64 VAR_8, unsigned VAR_9)
{
 bool VAR_10 = VAR_9 & VAR_0;
 bool VAR_11 = VAR_9 & VAR_1;



 FUNC_5(VAR_6, FUNC_4(VAR_5, 4));
 FUNC_5(VAR_6, (VAR_3 |
     VAR_4 |
     FUNC_2(VAR_2) |
     FUNC_1(5)));
 FUNC_5(VAR_6, VAR_7 & 0xfffffffc);
 FUNC_5(VAR_6, (FUNC_7(VAR_7) & 0xffff) |
    FUNC_0(1) | FUNC_3(0));
 FUNC_5(VAR_6, FUNC_6(VAR_8 - 1));
 FUNC_5(VAR_6, FUNC_7(VAR_8 - 1));


 FUNC_5(VAR_6, FUNC_4(VAR_5, 4));
 FUNC_5(VAR_6, (VAR_3 |
     VAR_4 |
     FUNC_2(VAR_2) |
     FUNC_1(5)));
 FUNC_5(VAR_6, VAR_7 & 0xfffffffc);
 FUNC_5(VAR_6, (FUNC_7(VAR_7) & 0xffff) |
    FUNC_0(VAR_10 ? 2 : 1) | FUNC_3(VAR_11 ? 2 : 0));
 FUNC_5(VAR_6, FUNC_6(VAR_8));
 FUNC_5(VAR_6, FUNC_7(VAR_8));
}
