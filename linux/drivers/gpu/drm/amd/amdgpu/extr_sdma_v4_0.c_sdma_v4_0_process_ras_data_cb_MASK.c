
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ras_err_data {int dummy; } ;
struct amdgpu_iv_entry {int src_id; int client_id; } ;
struct TYPE_2__ {int dev; } ;
struct amdgpu_device {TYPE_1__ kfd; } ;


 int VAR_0 ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1,
  struct ras_err_data *VAR_2,
  struct amdgpu_iv_entry *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->client_id);
 if (VAR_5 < 0)
  return 0;

 switch (VAR_3->src_id) {
 case 128:
  VAR_4 = 0;
  break;
 case 129:
  VAR_4 = 1;
  break;
 default:
  return 0;
 }

 FUNC_1(VAR_1->kfd.dev);

 FUNC_0(VAR_1, 0);

 return VAR_0;
}
