
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct card_info {TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t FUNC_1(struct card_info *VAR_0, uint32_t VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->dev->dev_private;
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 return VAR_3;
}
