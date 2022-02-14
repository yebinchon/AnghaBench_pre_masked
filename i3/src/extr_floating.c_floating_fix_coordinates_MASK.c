
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double int32_t ;
struct TYPE_7__ {int x; double y; int width; int height; } ;
struct TYPE_9__ {TYPE_1__ rect; } ;
struct TYPE_8__ {double x; double y; double width; double height; } ;
typedef TYPE_2__ Rect ;
typedef TYPE_3__ Con ;


 int FUNC_0 (char*,...) ;

void FUNC_1(Con *VAR_0, Rect *VAR_1, Rect *VAR_2) {
    FUNC_0("Fixing coordinates of floating window %p (rect (%d, %d), %d x %d)\n",
         VAR_0, VAR_0->rect.x, VAR_0->rect.y, VAR_0->rect.width, VAR_0->rect.height);
    FUNC_0("old_rect = (%d, %d), %d x %d\n",
         VAR_1->x, VAR_1->y, VAR_1->width, VAR_1->height);
    FUNC_0("new_rect = (%d, %d), %d x %d\n",
         VAR_2->x, VAR_2->y, VAR_2->width, VAR_2->height);


    int32_t VAR_3 = VAR_0->rect.x - VAR_1->x + (int32_t)(VAR_0->rect.width / 2);
    int32_t VAR_4 = VAR_0->rect.y - VAR_1->y + (int32_t)(VAR_0->rect.height / 2);


    FUNC_0("rel_x = %d, rel_y = %d, fraction_x = %f, fraction_y = %f, output->w = %d, output->h = %d\n",
         VAR_3, VAR_4, (double)VAR_3 / VAR_1->width, (double)VAR_4 / VAR_1->height,
         VAR_1->width, VAR_1->height);

    VAR_0->rect.x = (int32_t)VAR_2->x + (double)(VAR_3 * (int32_t)VAR_2->width) / (int32_t)VAR_1->width - (int32_t)(VAR_0->rect.width / 2);
    VAR_0->rect.y = (int32_t)VAR_2->y + (double)(VAR_4 * (int32_t)VAR_2->height) / (int32_t)VAR_1->height - (int32_t)(VAR_0->rect.height / 2);
    FUNC_0("Resulting coordinates: x = %d, y = %d\n", VAR_0->rect.x, VAR_0->rect.y);
}
