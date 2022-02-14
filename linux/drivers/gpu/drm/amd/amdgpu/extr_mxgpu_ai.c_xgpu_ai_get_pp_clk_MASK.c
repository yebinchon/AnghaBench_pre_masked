
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ p_pf2vf; } ;
struct TYPE_6__ {int dpm_mutex; TYPE_2__ fw_reserve; } ;
struct TYPE_4__ {int * va; } ;
struct amdgpu_device {TYPE_3__ virt; TYPE_1__ fw_vram_usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct amdgpu_device*,int,int ,int ,int ) ;
 int FUNC_9 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_8, u32 VAR_9, char *VAR_10)
{
        int VAR_11 = 0;
        u32 VAR_12, VAR_13, VAR_14;

        if (!FUNC_2(VAR_8) || VAR_10 == ((void*)0))
                return -VAR_0;

        switch(VAR_9) {
        case 128:
                VAR_12 = VAR_3;
                break;
        case 129:
                VAR_12 = VAR_2;
                break;
        default:
                return -VAR_0;
        }

        FUNC_3(&VAR_8->virt.dpm_mutex);

        FUNC_8(VAR_8, VAR_12, 0, 0, 0);

        VAR_11 = FUNC_9(VAR_8, VAR_4);
        if (!VAR_11 && VAR_8->fw_vram_usage.va != ((void*)0)) {
                VAR_13 = FUNC_0(
                        FUNC_1(VAR_5, 0,
                                         VAR_7));
                VAR_14 = FUNC_7((((char *)VAR_8->virt.fw_reserve.p_pf2vf) +
                                VAR_13), VAR_6);

                if (VAR_14 < VAR_6)
                        FUNC_6(VAR_10,((char *)VAR_8->virt.fw_reserve.p_pf2vf + VAR_13));
                else
                        VAR_14 = 0;

                VAR_11 = VAR_14;
                goto out;
        }

        VAR_11 = FUNC_9(VAR_8, VAR_1);
        if(VAR_11)
                FUNC_5("%s DPM request failed",
                        (VAR_9 == 128)? "SCLK" : "MCLK");

out:
        FUNC_4(&VAR_8->virt.dpm_mutex);
        return VAR_11;
}
