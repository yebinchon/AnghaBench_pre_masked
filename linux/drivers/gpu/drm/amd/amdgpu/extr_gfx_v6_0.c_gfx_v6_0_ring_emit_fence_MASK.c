
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_14, u64 VAR_15,
         u64 VAR_16, unsigned VAR_17)
{
 bool VAR_18 = VAR_17 & VAR_0;
 bool VAR_19 = VAR_17 & VAR_1;

 FUNC_3(VAR_14, FUNC_2(VAR_6, 1));
 FUNC_3(VAR_14, (VAR_13 - VAR_7));
 FUNC_3(VAR_14, 0);
 FUNC_3(VAR_14, FUNC_2(VAR_10, 3));
 FUNC_3(VAR_14, VAR_11 |
     VAR_12 |
     VAR_9 |
     VAR_8);
 FUNC_3(VAR_14, 0xFFFFFFFF);
 FUNC_3(VAR_14, 0);
 FUNC_3(VAR_14, 10);

 FUNC_3(VAR_14, FUNC_2(VAR_5, 4));
 FUNC_3(VAR_14, FUNC_1(VAR_2) | FUNC_0(5));
 FUNC_3(VAR_14, VAR_15 & 0xfffffffc);
 FUNC_3(VAR_14, (FUNC_5(VAR_15) & 0xffff) |
    ((VAR_18 ? 2 : 1) << VAR_3) |
    ((VAR_19 ? 2 : 0) << VAR_4));
 FUNC_3(VAR_14, FUNC_4(VAR_16));
 FUNC_3(VAR_14, FUNC_5(VAR_16));
}
