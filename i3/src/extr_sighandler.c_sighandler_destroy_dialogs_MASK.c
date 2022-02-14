
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int surface; int colormap; } ;
typedef TYPE_1__ dialog_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(void) {
    while (!FUNC_0(&VAR_1)) {
        dialog_t *VAR_2 = FUNC_1(&VAR_1);

        FUNC_7(VAR_0, VAR_2->colormap);
        FUNC_3(VAR_0, &(VAR_2->surface));
        FUNC_5(VAR_0, VAR_2->id);

        FUNC_2(&VAR_1, VAR_2, VAR_1);
        FUNC_4(VAR_2);
    }

    FUNC_6(VAR_0);
}
