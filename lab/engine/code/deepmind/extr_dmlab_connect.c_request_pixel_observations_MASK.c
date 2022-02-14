
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_10__ {TYPE_2__ depth; TYPE_1__ rgb; } ;
struct TYPE_11__ {int height; int width; TYPE_3__ pbos; } ;
typedef int PixelBufferTypeEnum ;
typedef TYPE_4__ GameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(GameContext* VAR_5,
                                       PixelBufferTypeEnum VAR_6) {
  if (FUNC_3(VAR_5)) {
    FUNC_0(VAR_5);
    switch (VAR_6) {
      case 128:
        FUNC_1(VAR_2, VAR_5->pbos.rgb.id);
        FUNC_2(0, 0, VAR_5->width, VAR_5->height, VAR_3, VAR_4, 0);
        break;
      case 130:
        FUNC_1(VAR_2, VAR_5->pbos.rgb.id);
        FUNC_2(0, 0, VAR_5->width, VAR_5->height, VAR_0, VAR_4,
                      0);
        break;
      case 129:
        FUNC_1(VAR_2, VAR_5->pbos.depth.id);
        FUNC_2(0, 0, VAR_5->width, VAR_5->height, VAR_1,
                      VAR_4, 0);
        break;
    }
    FUNC_1(VAR_2, 0);
  }
}
