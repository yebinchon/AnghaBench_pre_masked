
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {int me; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_6, u64 VAR_7, u64 VAR_8,
         unsigned VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_6->adev;

 FUNC_2(VAR_9 & VAR_0);

 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_2), 0));
 FUNC_3(VAR_6, VAR_8);
 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_4), 0));
 FUNC_3(VAR_6, VAR_7 & 0xffffffff);
 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_5), 0));
 FUNC_3(VAR_6, FUNC_4(VAR_7) & 0xff);
 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_3), 0));
 FUNC_3(VAR_6, 0);

 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_4), 0));
 FUNC_3(VAR_6, 0);
 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_5), 0));
 FUNC_3(VAR_6, 0);
 FUNC_3(VAR_6,
  FUNC_0(FUNC_1(VAR_1, VAR_6->me, VAR_3), 0));
 FUNC_3(VAR_6, 2);
}
