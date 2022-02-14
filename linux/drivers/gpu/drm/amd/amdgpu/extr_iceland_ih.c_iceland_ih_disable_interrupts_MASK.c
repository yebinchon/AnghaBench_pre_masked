
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int enabled; scalar_t__ rptr; } ;
struct TYPE_4__ {TYPE_1__ ih; } ;
struct amdgpu_device {TYPE_2__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_5);
 u32 VAR_10 = FUNC_1(VAR_4);

 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_3, 0);
 VAR_10 = FUNC_0(VAR_10, VAR_1, VAR_0, 0);
 FUNC_2(VAR_5, VAR_9);
 FUNC_2(VAR_4, VAR_10);

 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_7, 0);
 VAR_8->irq.ih.enabled = 0;
 VAR_8->irq.ih.rptr = 0;
}
