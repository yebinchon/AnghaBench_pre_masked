
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int VAR_9 ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_ring *VAR_10, u64 VAR_11,
         u64 VAR_12, unsigned VAR_13)
{
 bool VAR_14 = VAR_13 & VAR_0;
 bool VAR_15 = VAR_13 & VAR_1;
 bool VAR_16 = VAR_13 & VAR_2;


 FUNC_6(VAR_10, FUNC_5(VAR_9, 6));
 FUNC_6(VAR_10, ((VAR_16 ? (VAR_8 |
            VAR_7) :
           (VAR_4 |
            VAR_5 |
            VAR_8 |
            VAR_6)) |
     FUNC_3(VAR_3) |
     FUNC_2(5)));
 FUNC_6(VAR_10, FUNC_1(VAR_14 ? 2 : 1) | FUNC_4(VAR_15 ? 2 : 0));





 if (VAR_14)
  FUNC_0(VAR_11 & 0x7);
 else
  FUNC_0(VAR_11 & 0x3);
 FUNC_6(VAR_10, FUNC_7(VAR_11));
 FUNC_6(VAR_10, FUNC_8(VAR_11));
 FUNC_6(VAR_10, FUNC_7(VAR_12));
 FUNC_6(VAR_10, FUNC_8(VAR_12));
 FUNC_6(VAR_10, 0);
}
