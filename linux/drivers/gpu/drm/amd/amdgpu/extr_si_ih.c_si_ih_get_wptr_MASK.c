
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct amdgpu_device *VAR_3,
     struct amdgpu_ih_ring *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_3(*VAR_4->wptr_cpu);

 if (VAR_5 & VAR_2) {
  VAR_5 &= ~VAR_2;
  FUNC_2(VAR_3->dev, "IH ring buffer overflow (0x%08X, 0x%08X, 0x%08X)\n",
   VAR_5, VAR_4->rptr, (VAR_5 + 16) & VAR_4->ptr_mask);
  VAR_4->rptr = (VAR_5 + 16) & VAR_4->ptr_mask;
  VAR_6 = FUNC_0(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_1(VAR_0, VAR_6);
 }
 return (VAR_5 & VAR_4->ptr_mask);
}
