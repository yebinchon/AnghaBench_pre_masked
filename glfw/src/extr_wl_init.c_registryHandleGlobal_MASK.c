
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct TYPE_3__ {int compositorVersion; int seatVersion; void* idleInhibitManager; void* pointerConstraints; void* relativePointerManager; void* viewporter; void* decorationManager; void* wmBase; void* dataDeviceManager; void* seat; void* shm; void* subcompositor; void* compositor; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (struct wl_registry*,int ,int *,int) ;
 int FUNC_4 (void*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*,int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_6(void* VAR_14,
                                 struct wl_registry* VAR_15,
                                 uint32_t VAR_16,
                                 const char* VAR_17,
                                 uint32_t VAR_18)
{
    if (FUNC_2(VAR_17, "wl_compositor") == 0)
    {
        VAR_0.wl.compositorVersion = FUNC_1(3, VAR_18);
        VAR_0.wl.compositor =
            FUNC_3(VAR_15, VAR_16, &VAR_2,
                             VAR_0.wl.compositorVersion);
    }
    else if (FUNC_2(VAR_17, "wl_subcompositor") == 0)
    {
        VAR_0.wl.subcompositor =
            FUNC_3(VAR_15, VAR_16, &VAR_6, 1);
    }
    else if (FUNC_2(VAR_17, "wl_shm") == 0)
    {
        VAR_0.wl.shm =
            FUNC_3(VAR_15, VAR_16, &VAR_5, 1);
    }
    else if (FUNC_2(VAR_17, "wl_output") == 0)
    {
        FUNC_0(VAR_16, VAR_18);
    }
    else if (FUNC_2(VAR_17, "wl_seat") == 0)
    {
        if (!VAR_0.wl.seat)
        {
            VAR_0.wl.seatVersion = FUNC_1(4, VAR_18);
            VAR_0.wl.seat =
                FUNC_3(VAR_15, VAR_16, &VAR_4,
                                 VAR_0.wl.seatVersion);
            FUNC_4(VAR_0.wl.seat, &VAR_1, ((void*)0));
        }
    }
    else if (FUNC_2(VAR_17, "wl_data_device_manager") == 0)
    {
        if (!VAR_0.wl.dataDeviceManager)
        {
            VAR_0.wl.dataDeviceManager =
                FUNC_3(VAR_15, VAR_16,
                                 &VAR_3, 1);
        }
    }
    else if (FUNC_2(VAR_17, "xdg_wm_base") == 0)
    {
        VAR_0.wl.wmBase =
            FUNC_3(VAR_15, VAR_16, &VAR_9, 1);
        FUNC_5(VAR_0.wl.wmBase, &VAR_7, ((void*)0));
    }
    else if (FUNC_2(VAR_17, "zxdg_decoration_manager_v1") == 0)
    {
        VAR_0.wl.decorationManager =
            FUNC_3(VAR_15, VAR_16,
                             &VAR_13,
                             1);
    }
    else if (FUNC_2(VAR_17, "wp_viewporter") == 0)
    {
        VAR_0.wl.viewporter =
            FUNC_3(VAR_15, VAR_16, &VAR_8, 1);
    }
    else if (FUNC_2(VAR_17, "zwp_relative_pointer_manager_v1") == 0)
    {
        VAR_0.wl.relativePointerManager =
            FUNC_3(VAR_15, VAR_16,
                             &VAR_12,
                             1);
    }
    else if (FUNC_2(VAR_17, "zwp_pointer_constraints_v1") == 0)
    {
        VAR_0.wl.pointerConstraints =
            FUNC_3(VAR_15, VAR_16,
                             &VAR_11,
                             1);
    }
    else if (FUNC_2(VAR_17, "zwp_idle_inhibit_manager_v1") == 0)
    {
        VAR_0.wl.idleInhibitManager =
            FUNC_3(VAR_15, VAR_16,
                             &VAR_10,
                             1);
    }
}
