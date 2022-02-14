
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int enabled; } ;
struct TYPE_4__ {TYPE_1__ ih; } ;
struct amdgpu_device {TYPE_2__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8 = FUNC_1(VAR_5);

 VAR_7 = FUNC_0(VAR_7, VAR_1, VAR_0, 1);
 VAR_8 = FUNC_0(VAR_8, VAR_2, VAR_3, 1);
 FUNC_2(VAR_4, VAR_7);
 FUNC_2(VAR_5, VAR_8);
 VAR_6->irq.ih.enabled = 1;
}
