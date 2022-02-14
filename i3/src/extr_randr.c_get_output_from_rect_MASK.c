
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int width; int y; int height; } ;
typedef TYPE_1__ Rect ;
typedef int Output ;


 int * FUNC_0 (unsigned int,unsigned int) ;
 int * FUNC_1 (TYPE_1__) ;

Output *FUNC_2(Rect VAR_0) {
    unsigned int VAR_1 = VAR_0.x + VAR_0.width / 2;
    unsigned int VAR_2 = VAR_0.y + VAR_0.height / 2;
    Output *VAR_3 = FUNC_0(VAR_1, VAR_2);

    return VAR_3 ? VAR_3 : FUNC_1(VAR_0);
}
