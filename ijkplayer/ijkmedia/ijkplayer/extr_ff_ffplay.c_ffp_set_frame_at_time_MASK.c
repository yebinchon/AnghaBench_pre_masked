
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int num; int count; int width; int height; scalar_t__ end_time; scalar_t__ start_time; int img_path; } ;
struct TYPE_5__ {TYPE_4__* get_img_info; } ;
typedef int GetImgInfo ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;

void FUNC_3(FFPlayer *VAR_3, const char *VAR_4, int64_t VAR_5, int64_t VAR_6, int VAR_7, int VAR_8) {
    if (!VAR_3->get_img_info) {
        VAR_3->get_img_info = FUNC_0(sizeof(GetImgInfo));
        if (!VAR_3->get_img_info) {
            FUNC_2(VAR_3, VAR_0, 0, -1);
            return;
        }
    }

    if (VAR_5 >= 0 && VAR_7 > 0 && VAR_6 >= 0 && VAR_6 >= VAR_5) {
        VAR_3->get_img_info->img_path = FUNC_1(VAR_4);
        VAR_3->get_img_info->start_time = VAR_5;
        VAR_3->get_img_info->end_time = VAR_6;
        VAR_3->get_img_info->num = VAR_7;
        VAR_3->get_img_info->count = VAR_7;
        if (VAR_8== VAR_1) {
            VAR_3->get_img_info->width = 640;
            VAR_3->get_img_info->height = 360;
        } else if (VAR_8 == VAR_2) {
            VAR_3->get_img_info->width = 320;
            VAR_3->get_img_info->height = 180;
        } else {
            VAR_3->get_img_info->width = 160;
            VAR_3->get_img_info->height = 90;
        }
    } else {
        VAR_3->get_img_info->count = 0;
        FUNC_2(VAR_3, VAR_0, 0, -1);
    }
}
