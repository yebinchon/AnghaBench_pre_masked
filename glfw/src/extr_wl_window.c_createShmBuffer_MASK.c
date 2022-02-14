
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl_shm_pool {int dummy; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_5__ {int shm; } ;
struct TYPE_7__ {TYPE_1__ wl; } ;
struct TYPE_6__ {int width; int height; scalar_t__ pixels; } ;
typedef TYPE_2__ GLFWimage ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,int,int,int ,int,int ) ;
 int FUNC_4 (void*,int) ;
 struct wl_shm_pool* FUNC_5 (int ,int,int) ;
 struct wl_buffer* FUNC_6 (struct wl_shm_pool*,int ,int,int,int,int ) ;
 int FUNC_7 (struct wl_shm_pool*) ;

__attribute__((used)) static struct wl_buffer* FUNC_8(const GLFWimage* VAR_7)
{
    struct wl_shm_pool* VAR_8;
    struct wl_buffer* VAR_9;
    int VAR_10 = VAR_7->width * 4;
    int VAR_11 = VAR_7->width * VAR_7->height * 4;
    void* VAR_12;
    int VAR_13, VAR_14;

    VAR_13 = FUNC_2(VAR_11);
    if (VAR_13 < 0)
    {
        FUNC_0(VAR_0,
                        "Wayland: Creating a buffer file for %d B failed: %m",
                        VAR_11);
        return ((void*)0);
    }

    VAR_12 = FUNC_3(((void*)0), VAR_11, VAR_3 | VAR_4, VAR_2, VAR_13, 0);
    if (VAR_12 == VAR_1)
    {
        FUNC_0(VAR_0,
                        "Wayland: mmap failed: %m");
        FUNC_1(VAR_13);
        return ((void*)0);
    }

    VAR_8 = FUNC_5(VAR_6.wl.shm, VAR_13, VAR_11);

    FUNC_1(VAR_13);
    unsigned char* VAR_15 = (unsigned char*) VAR_7->pixels;
    unsigned char* VAR_16 = VAR_12;
    for (VAR_14 = 0; VAR_14 < VAR_7->width * VAR_7->height; VAR_14++, VAR_15 += 4)
    {
        unsigned int VAR_17 = VAR_15[3];

        *VAR_16++ = (unsigned char) ((VAR_15[2] * VAR_17) / 255);
        *VAR_16++ = (unsigned char) ((VAR_15[1] * VAR_17) / 255);
        *VAR_16++ = (unsigned char) ((VAR_15[0] * VAR_17) / 255);
        *VAR_16++ = (unsigned char) VAR_17;
    }

    VAR_9 =
        FUNC_6(VAR_8, 0,
                                  VAR_7->width,
                                  VAR_7->height,
                                  VAR_10, VAR_5);
    FUNC_4(VAR_12, VAR_11);
    FUNC_7(VAR_8);

    return VAR_9;
}
