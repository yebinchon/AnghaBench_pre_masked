
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct nouveau_crtc {int cursor_saved_x; int cursor_saved_y; int index; TYPE_1__ base; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_crtc *VAR_3, int VAR_4, int VAR_5)
{
 VAR_3->cursor_saved_x = VAR_4; VAR_3->cursor_saved_y = VAR_5;
 FUNC_0(VAR_3->base.dev, VAR_3->index,
        VAR_0,
        FUNC_1(VAR_5, 0, VAR_2) |
        FUNC_1(VAR_4, 0, VAR_1));
}
