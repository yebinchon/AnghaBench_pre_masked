
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ras_err_handler_data {int space_left; int count; TYPE_1__* bps; } ;
struct amdgpu_ras {int recovery_lock; struct ras_err_handler_data* eh_data; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {unsigned long bp; } ;


 int VAR_0 ;
 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,struct ras_err_handler_data*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct amdgpu_device *VAR_1,
  unsigned long *VAR_2, int VAR_3)
{
 struct amdgpu_ras *VAR_4 = FUNC_0(VAR_1);
 struct ras_err_handler_data *VAR_5;
 int VAR_6 = VAR_3;
 int VAR_7 = 0;

 if (!VAR_4 || !VAR_4->eh_data || !VAR_2 || VAR_3 <= 0)
  return 0;

 FUNC_2(&VAR_4->recovery_lock);
 VAR_5 = VAR_4->eh_data;
 if (!VAR_5)
  goto out;

 if (VAR_5->space_left <= VAR_3)
  if (FUNC_1(VAR_1, VAR_5, VAR_3)) {
   VAR_7 = -VAR_0;
   goto out;
  }

 while (VAR_6--)
  VAR_5->bps[VAR_5->count++].bp = VAR_2[VAR_6];

 VAR_5->space_left -= VAR_3;
out:
 FUNC_3(&VAR_4->recovery_lock);

 return VAR_7;
}
