
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_ih_ring {int ptr_mask; int rptr; int * wptr_cpu; } ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_7(struct amdgpu_device *VAR_7,
         struct amdgpu_ih_ring *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_6(*VAR_8->wptr_cpu);

 if (!FUNC_0(VAR_9, VAR_1, VAR_3))
  goto out;

 VAR_10 = FUNC_3(VAR_2, 0, VAR_6);
 VAR_9 = FUNC_2(VAR_10);
 if (!FUNC_0(VAR_9, VAR_1, VAR_3))
  goto out;
 VAR_9 = FUNC_1(VAR_9, VAR_1, VAR_3, 0);





 VAR_11 = (VAR_9 + 32) & VAR_8->ptr_mask;
 FUNC_5(VAR_7->dev, "IH ring buffer overflow "
   "(0x%08X, 0x%08X, 0x%08X)\n",
   VAR_9, VAR_8->rptr, VAR_11);
 VAR_8->rptr = VAR_11;

 VAR_10 = FUNC_3(VAR_2, 0, VAR_5);
 VAR_11 = FUNC_2(VAR_10);
 VAR_11 = FUNC_1(VAR_11, VAR_0, VAR_4, 1);
 FUNC_4(VAR_10, VAR_11);
out:
 return (VAR_9 & VAR_8->ptr_mask);
}
