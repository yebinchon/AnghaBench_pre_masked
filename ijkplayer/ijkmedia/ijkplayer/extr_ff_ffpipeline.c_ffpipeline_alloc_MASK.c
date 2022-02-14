
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opaque; int * opaque_class; } ;
typedef int SDL_Class ;
typedef TYPE_1__ IJKFF_Pipeline ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

IJKFF_Pipeline *FUNC_2(SDL_Class *VAR_0, size_t VAR_1)
{
    IJKFF_Pipeline *VAR_2 = (IJKFF_Pipeline*) FUNC_0(1, sizeof(IJKFF_Pipeline));
    if (!VAR_2)
        return ((void*)0);

    VAR_2->opaque_class = VAR_0;
    VAR_2->opaque = FUNC_0(1, VAR_1);
    if (!VAR_2->opaque) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}
