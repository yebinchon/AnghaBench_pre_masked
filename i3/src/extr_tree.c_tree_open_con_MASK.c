
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int i3Window ;
struct TYPE_11__ {scalar_t__ type; int layout; struct TYPE_11__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* VAR_5 ;

Con *FUNC_5(Con *VAR_6, i3Window *VAR_7) {
    if (VAR_6 == ((void*)0)) {

        VAR_6 = VAR_5->parent;


        if (VAR_6->parent->type == VAR_2 && VAR_6->type != VAR_0) {
            VAR_6 = VAR_5;
        }




        if (VAR_6->type == VAR_1) {
            VAR_6 = FUNC_2(VAR_6->parent);
            if (VAR_6->type != VAR_3)
                VAR_6 = VAR_6->parent;
        }
        FUNC_0("con = %p\n", VAR_6);
    }

    FUNC_1(VAR_6 != ((void*)0));


    Con *VAR_8 = FUNC_4(VAR_6, VAR_7);
    VAR_8->layout = VAR_4;


    FUNC_3(VAR_6);

    return VAR_8;
}
