
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_glyphs; int utf8; int * ucs2; } ;
typedef TYPE_1__ i3String ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(i3String *VAR_0) {
    if (VAR_0->ucs2 != ((void*)0))
        return;
    VAR_0->ucs2 = FUNC_0(VAR_0->utf8, &VAR_0->num_glyphs);
}
