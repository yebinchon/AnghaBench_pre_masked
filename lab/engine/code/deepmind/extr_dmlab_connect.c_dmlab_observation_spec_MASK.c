
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* custom_observation_spec ) (int ,int,TYPE_3__*) ;} ;
struct TYPE_10__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_9__ {int dims; int* shape; int type; } ;
struct TYPE_8__ {int* map_frame_number_shape; int* image_shape; int height; int width; TYPE_4__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ EnvCApi_ObservationSpec ;
typedef TYPE_4__ DeepmindContext ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 char** VAR_2 ;


 int VAR_3 ;






 int VAR_4 ;
 int FUNC_2 (int ,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(
    void* VAR_5, int VAR_6, EnvCApi_ObservationSpec* VAR_7) {
  GameContext* VAR_8 = VAR_5;

  if (VAR_6 == VAR_3) {
    VAR_7->type = VAR_1;
    VAR_7->dims = 1;
    VAR_7->shape = VAR_8->map_frame_number_shape;
  } else if (VAR_6 < FUNC_0(VAR_2)) {
    VAR_7->type = VAR_0;
    VAR_7->dims = 3;
    VAR_7->shape = VAR_8->image_shape;

    switch (VAR_6) {
      case 133:
        FUNC_1(VAR_4, "Using deprecated observation format: '%s'\n",
                VAR_2[VAR_6]);

      case 132:
      case 135:
        VAR_8->image_shape[0] = VAR_8->height;
        VAR_8->image_shape[1] = VAR_8->width;
        VAR_8->image_shape[2] = 3;
        break;
      case 130:
        FUNC_1(VAR_4, "Using deprecated observation format: '%s'\n",
                VAR_2[VAR_6]);

      case 129:
      case 134:
        VAR_8->image_shape[0] = VAR_8->height;
        VAR_8->image_shape[1] = VAR_8->width;
        VAR_8->image_shape[2] = 4;
        break;
      case 131:
        VAR_8->image_shape[0] = 3;
        VAR_8->image_shape[1] = VAR_8->height;
        VAR_8->image_shape[2] = VAR_8->width;
        break;
      case 128:
        VAR_8->image_shape[0] = 4;
        VAR_8->image_shape[1] = VAR_8->height;
        VAR_8->image_shape[2] = VAR_8->width;
        break;
    }
  } else {
    DeepmindContext* VAR_9 = VAR_8->dm_ctx;
    VAR_9->hooks.custom_observation_spec(
        VAR_9->userdata, VAR_6 - FUNC_0(VAR_2), VAR_7);
  }
}
