
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_8, u64 VAR_9, u64 VAR_10,
         unsigned VAR_11)
{
 struct amdgpu_device *VAR_12 = VAR_8->adev;

 FUNC_2(VAR_11 & VAR_0);

 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_4), 0));
 FUNC_3(VAR_8, VAR_10);
 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_6), 0));
 FUNC_3(VAR_8, VAR_9 & 0xffffffff);
 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_7), 0));
 FUNC_3(VAR_8, FUNC_4(VAR_9) & 0xff);
 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_5), 0));
 FUNC_3(VAR_8, VAR_2 << 1);

 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_6), 0));
 FUNC_3(VAR_8, 0);
 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_7), 0));
 FUNC_3(VAR_8, 0);
 FUNC_3(VAR_8,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_5), 0));
 FUNC_3(VAR_8, VAR_3 << 1);
}
