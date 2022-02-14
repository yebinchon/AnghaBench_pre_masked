
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int buffer; int bottom; int right; int left; int top; scalar_t__ serverSide; } ;
struct TYPE_11__ {int width; int height; TYPE_2__ decorations; int surface; } ;
struct TYPE_12__ {TYPE_3__ wl; int decorated; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_9__ {int viewporter; } ;
struct TYPE_14__ {TYPE_1__ wl; } ;
struct TYPE_13__ {int member_0; int member_1; unsigned char* member_2; } ;
typedef TYPE_5__ GLFWimage ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_0 (int *,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__ const*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_4)
{
    unsigned char VAR_5[] = { 224, 224, 224, 255 };
    const GLFWimage VAR_6 = { 1, 1, VAR_5 };
    GLFWbool VAR_7 = (VAR_5[3] == 255);

    if (!VAR_3.wl.viewporter || !VAR_4->decorated || VAR_4->wl.decorations.serverSide)
        return;

    if (!VAR_4->wl.decorations.buffer)
        VAR_4->wl.decorations.buffer = FUNC_1(&VAR_6);
    if (!VAR_4->wl.decorations.buffer)
        return;

    FUNC_0(&VAR_4->wl.decorations.top, VAR_4->wl.surface,
                     VAR_4->wl.decorations.buffer, VAR_7,
                     0, -VAR_1,
                     VAR_4->wl.width, VAR_1);
    FUNC_0(&VAR_4->wl.decorations.left, VAR_4->wl.surface,
                     VAR_4->wl.decorations.buffer, VAR_7,
                     -VAR_2, -VAR_1,
                     VAR_2, VAR_4->wl.height + VAR_1);
    FUNC_0(&VAR_4->wl.decorations.right, VAR_4->wl.surface,
                     VAR_4->wl.decorations.buffer, VAR_7,
                     VAR_4->wl.width, -VAR_1,
                     VAR_2, VAR_4->wl.height + VAR_1);
    FUNC_0(&VAR_4->wl.decorations.bottom, VAR_4->wl.surface,
                     VAR_4->wl.decorations.buffer, VAR_7,
                     -VAR_2, VAR_4->wl.height,
                     VAR_4->wl.width + VAR_0, VAR_2);
}
