
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_9__ {TYPE_2__ depth; TYPE_1__ rgb; } ;
struct TYPE_10__ {void* temp_buffer; int width; int height; TYPE_3__ pbos; } ;
typedef int PixelBufferTypeEnum ;
typedef TYPE_4__ GameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,void*) ;
 void* FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void* FUNC_5(GameContext* VAR_6, PixelBufferTypeEnum VAR_7) {
  if (FUNC_4(VAR_6)) {
    switch (VAR_7) {
      case 128:
      case 130:
        FUNC_0(VAR_2, VAR_6->pbos.rgb.id);
        break;
      case 129:
        FUNC_0(VAR_2, VAR_6->pbos.depth.id);
        break;
    }
    void* VAR_8 = FUNC_1(VAR_2, VAR_3);

    return VAR_8;
  } else {
    VAR_6->temp_buffer =
        FUNC_3(VAR_6->temp_buffer, VAR_6->width * VAR_6->height * 3);
    switch (VAR_7) {
      case 128:
        FUNC_2(0, 0, VAR_6->width, VAR_6->height, VAR_4, VAR_5,
                      VAR_6->temp_buffer);
        break;
      case 130:
        FUNC_2(0, 0, VAR_6->width, VAR_6->height, VAR_0, VAR_5,
                      VAR_6->temp_buffer);
        break;
      case 129:
        FUNC_2(0, 0, VAR_6->width, VAR_6->height, VAR_1,
                      VAR_5, VAR_6->temp_buffer);
        break;
    }

    return VAR_6->temp_buffer;
  }
}
