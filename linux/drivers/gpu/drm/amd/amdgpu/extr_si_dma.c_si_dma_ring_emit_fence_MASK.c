
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_3, u64 VAR_4, u64 VAR_5,
          unsigned VAR_6)
{

 bool VAR_7 = VAR_6 & VAR_0;

 FUNC_1(VAR_3, FUNC_0(VAR_1, 0, 0, 0, 0));
 FUNC_1(VAR_3, VAR_4 & 0xfffffffc);
 FUNC_1(VAR_3, (FUNC_2(VAR_4) & 0xff));
 FUNC_1(VAR_3, VAR_5);

 if (VAR_7) {
  VAR_4 += 4;
  FUNC_1(VAR_3, FUNC_0(VAR_1, 0, 0, 0, 0));
  FUNC_1(VAR_3, VAR_4 & 0xfffffffc);
  FUNC_1(VAR_3, (FUNC_2(VAR_4) & 0xff));
  FUNC_1(VAR_3, FUNC_2(VAR_5));
 }

 FUNC_1(VAR_3, FUNC_0(VAR_2, 0, 0, 0, 0));
}
