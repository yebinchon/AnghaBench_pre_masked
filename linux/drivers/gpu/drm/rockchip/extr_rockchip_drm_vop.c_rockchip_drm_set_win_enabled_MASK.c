
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_win_data {int dummy; } ;
struct vop_win {struct vop_win_data* data; } ;
struct vop {int win_enabled; int reg_lock; struct vop_win* win; TYPE_1__* data; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int win_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vop*,struct vop_win_data const*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vop* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct vop*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_1, bool VAR_2)
{
        struct vop *VAR_3 = FUNC_4(VAR_1);
        int VAR_4;

        FUNC_2(&VAR_3->reg_lock);

        for (VAR_4 = 0; VAR_4 < VAR_3->data->win_size; VAR_4++) {
                struct vop_win *VAR_5 = &VAR_3->win[VAR_4];
                const struct vop_win_data *VAR_6 = VAR_5->data;

                FUNC_1(VAR_3, VAR_6, VAR_0,
                            VAR_2 && (VAR_3->win_enabled & FUNC_0(VAR_4)));
        }
        FUNC_5(VAR_3);

        FUNC_3(&VAR_3->reg_lock);
}
