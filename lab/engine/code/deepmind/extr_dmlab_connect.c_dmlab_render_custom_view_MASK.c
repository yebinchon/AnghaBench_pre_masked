
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int (* MakeCurrent ) () ;} ;
struct TYPE_10__ {TYPE_3__* context; } ;
struct TYPE_7__ {int size; int id; } ;
struct TYPE_8__ {TYPE_1__ custom_view; } ;
struct TYPE_9__ {int current_screen_rendered; TYPE_2__ pbos; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ DeepmindContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (unsigned char*,void const*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int FUNC_5 (int,int *) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,int,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(
    int VAR_6, int VAR_7, unsigned char* VAR_8) {
  VAR_5.MakeCurrent();
  DeepmindContext* VAR_9 = FUNC_1();
  GameContext* VAR_10 = VAR_9->context;

  FUNC_0();

  VAR_10->current_screen_rendered = 0;

  if (!VAR_10->pbos.custom_view.id) {
    FUNC_5(1, &VAR_10->pbos.custom_view.id);
  }
  FUNC_3(VAR_0, VAR_10->pbos.custom_view.id);
  int VAR_11 = VAR_6 * VAR_7 * 3;
  if (VAR_10->pbos.custom_view.size < VAR_11) {
    VAR_10->pbos.custom_view.size = VAR_11;
    FUNC_4(VAR_0, VAR_11, ((void*)0), VAR_3);
  }

  FUNC_7(0, 0, VAR_6, VAR_7, VAR_2, VAR_4, 0);
  const void* VAR_12 = FUNC_6(VAR_0, VAR_1);
  FUNC_2(VAR_8, VAR_12, VAR_11);
  FUNC_8(VAR_0);
  FUNC_3(VAR_0, 0);
}
