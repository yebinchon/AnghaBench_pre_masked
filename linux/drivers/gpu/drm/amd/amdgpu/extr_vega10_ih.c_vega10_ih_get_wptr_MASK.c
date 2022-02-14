
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int ptr_mask; int rptr; int * wptr_cpu; } ;
struct TYPE_2__ {struct amdgpu_ih_ring ih2; struct amdgpu_ih_ring ih1; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {TYPE_1__ irq; int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,char*,int,int,int) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u32 FUNC_8(struct amdgpu_device *VAR_11,
         struct amdgpu_ih_ring *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_7(*VAR_12->wptr_cpu);

 if (!FUNC_1(VAR_13, VAR_1, VAR_3))
  goto out;



 if (VAR_12 == &VAR_11->irq.ih)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_8);
 else if (VAR_12 == &VAR_11->irq.ih1)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_9);
 else if (VAR_12 == &VAR_11->irq.ih2)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_10);
 else
  FUNC_0();

 VAR_13 = FUNC_3(VAR_14);
 if (!FUNC_1(VAR_13, VAR_1, VAR_3))
  goto out;

 VAR_13 = FUNC_2(VAR_13, VAR_1, VAR_3, 0);





 VAR_15 = (VAR_13 + 32) & VAR_12->ptr_mask;
 FUNC_6(VAR_11->dev, "IH ring buffer overflow "
   "(0x%08X, 0x%08X, 0x%08X)\n",
   VAR_13, VAR_12->rptr, VAR_15);
 VAR_12->rptr = VAR_15;

 if (VAR_12 == &VAR_11->irq.ih)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_5);
 else if (VAR_12 == &VAR_11->irq.ih1)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_6);
 else if (VAR_12 == &VAR_11->irq.ih2)
  VAR_14 = FUNC_4(VAR_2, 0, VAR_7);
 else
  FUNC_0();

 VAR_15 = FUNC_3(VAR_14);
 VAR_15 = FUNC_2(VAR_15, VAR_0, VAR_4, 1);
 FUNC_5(VAR_14, VAR_15);

out:
 return (VAR_13 & VAR_12->ptr_mask);
}
