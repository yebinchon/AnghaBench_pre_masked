
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_err_handler_data {int dummy; } ;
struct amdgpu_ras {struct amdgpu_device* adev; int in_recovery; int recovery_work; int recovery_lock; struct ras_err_handler_data* eh_data; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int *,int ) ;
 struct ras_err_handler_data* FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_4)
{
 struct amdgpu_ras *VAR_5 = FUNC_1(VAR_4);
 struct ras_err_handler_data **VAR_6 = &VAR_5->eh_data;

 *VAR_6 = FUNC_5(sizeof(**VAR_6),
   VAR_1|VAR_2);
 if (!*VAR_6)
  return -VAR_0;

 FUNC_6(&VAR_5->recovery_lock);
 FUNC_0(&VAR_5->recovery_work, VAR_3);
 FUNC_4(&VAR_5->in_recovery, 0);
 VAR_5->adev = VAR_4;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 return 0;
}
