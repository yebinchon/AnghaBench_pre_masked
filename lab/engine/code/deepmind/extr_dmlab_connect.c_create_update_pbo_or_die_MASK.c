
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int id; } ;
struct TYPE_6__ {int size; int id; } ;
struct TYPE_8__ {TYPE_2__ depth; TYPE_1__ rgb; } ;
struct TYPE_9__ {int width; int height; TYPE_3__ pbos; } ;
typedef TYPE_4__ GameContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(GameContext* VAR_4) {
  if (!VAR_4->pbos.rgb.id) {
    FUNC_4(1, &VAR_4->pbos.rgb.id);
  }
  if (!VAR_4->pbos.depth.id) {
    FUNC_4(1, &VAR_4->pbos.depth.id);
  }


  if (FUNC_5() != VAR_0) {
    FUNC_1("GL Error creating PBO buffers.\n", VAR_3);
    FUNC_0();
  }

  int VAR_5 = VAR_4->width * VAR_4->height * 3;
  if (VAR_4->pbos.rgb.size < VAR_5) {
    FUNC_2(VAR_1, VAR_4->pbos.rgb.id);
    FUNC_3(VAR_1, VAR_5, ((void*)0), VAR_2);
    if (FUNC_5() != VAR_0) {
      FUNC_1("Failed to generate PBO data buffer.\n", VAR_3);
      FUNC_0();
    }
    VAR_4->pbos.rgb.size = VAR_5;
    FUNC_2(VAR_1, 0);
  }

  int VAR_6 = VAR_4->width * VAR_4->height;
  if (VAR_4->pbos.depth.size < VAR_6) {
    FUNC_2(VAR_1, VAR_4->pbos.depth.id);
    FUNC_3(VAR_1, VAR_6, ((void*)0), VAR_2);

    if (FUNC_5() != VAR_0) {
      FUNC_1("Failed to generate PBO data buffer.\n", VAR_3);
      FUNC_0();
    }
    VAR_4->pbos.depth.size = VAR_6;
    FUNC_2(VAR_1, 0);
  }
}
