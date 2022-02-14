
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* context; } ;
struct TYPE_4__ {int width; int alt_camera_width; int height; int alt_camera_height; } ;
typedef TYPE_1__ GameContext ;
typedef TYPE_2__ DeepmindContext ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static void FUNC_1(int* VAR_0, int* VAR_1, int* VAR_2,
                         int* VAR_3) {
  DeepmindContext* VAR_4 = FUNC_0();
  GameContext* VAR_5 = VAR_4->context;
  *VAR_2 =
      VAR_5->width >= VAR_5->alt_camera_width ? VAR_5->width : VAR_5->alt_camera_width;
  *VAR_3 =
      VAR_5->height >= VAR_5->alt_camera_height ? VAR_5->height : VAR_5->alt_camera_height;
  *VAR_0 = VAR_5->width;
  *VAR_1 = VAR_5->height;
}
