
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dpm_mutex; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ,int ,int ) ;
 int FUNC_5 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_4, u32 VAR_5)
{
        int VAR_6 = 0;
        u32 VAR_7 = VAR_2;

        if (!FUNC_0(VAR_4))
                return -VAR_0;

        FUNC_1(&VAR_4->virt.dpm_mutex);
        FUNC_4(VAR_4, VAR_7, VAR_5, 0, 0);

        VAR_6 = FUNC_5(VAR_4, VAR_3);
        if (!VAR_6)
                goto out;

        VAR_6 = FUNC_5(VAR_4, VAR_1);
        if (!VAR_6)
                FUNC_3("DPM request failed");
        else
                FUNC_3("Mailbox is broken");

out:
        FUNC_2(&VAR_4->virt.dpm_mutex);
        return VAR_6;
}
