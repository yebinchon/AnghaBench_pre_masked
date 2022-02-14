
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_ih_ring {int rptr; int ptr_mask; int * wptr_cpu; } ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_6(struct amdgpu_device *VAR_5,
          struct amdgpu_ih_ring *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_5(*VAR_6->wptr_cpu);

 if (FUNC_0(VAR_7, VAR_1, VAR_2)) {
  VAR_7 = FUNC_1(VAR_7, VAR_1, VAR_2, 0);




  FUNC_4(VAR_5->dev, "IH ring buffer overflow (0x%08X, 0x%08X, 0x%08X)\n",
    VAR_7, VAR_6->rptr, (VAR_7 + 16) & VAR_6->ptr_mask);
  VAR_6->rptr = (VAR_7 + 16) & VAR_6->ptr_mask;
  VAR_8 = FUNC_2(VAR_4);
  VAR_8 = FUNC_1(VAR_8, VAR_0, VAR_3, 1);
  FUNC_3(VAR_4, VAR_8);
 }
 return (VAR_7 & VAR_6->ptr_mask);
}
