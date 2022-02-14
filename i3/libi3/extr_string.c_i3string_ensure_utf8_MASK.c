
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * utf8; int num_bytes; int num_glyphs; int ucs2; } ;
typedef TYPE_1__ i3String ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(i3String *VAR_0) {
    if (VAR_0->utf8 != ((void*)0))
        return;
    if ((VAR_0->utf8 = FUNC_0(VAR_0->ucs2, VAR_0->num_glyphs)) != ((void*)0))
        VAR_0->num_bytes = FUNC_1(VAR_0->utf8);
}
