
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_char2b_t ;
struct TYPE_3__ {size_t num_glyphs; scalar_t__ num_bytes; int * utf8; void* ucs2; } ;
typedef TYPE_1__ i3String ;


 int FUNC_0 (void*,int const*,size_t) ;
 void* FUNC_1 (size_t,int) ;

i3String *FUNC_2(const xcb_char2b_t *VAR_0, size_t VAR_1) {
    i3String *VAR_2 = FUNC_1(1, sizeof(i3String));


    VAR_2->ucs2 = FUNC_1(VAR_1, sizeof(xcb_char2b_t));
    FUNC_0(VAR_2->ucs2, VAR_0, VAR_1 * sizeof(xcb_char2b_t));


    VAR_2->num_glyphs = VAR_1;

    VAR_2->utf8 = ((void*)0);
    VAR_2->num_bytes = 0;

    return VAR_2;
}
