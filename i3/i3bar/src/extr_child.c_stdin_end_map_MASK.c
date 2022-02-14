
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct status_block {char* min_width_str; int pango_markup; int * short_text; int * full_text; scalar_t__ min_width; scalar_t__ urgent; } ;
struct TYPE_2__ {int has_urgent; int block; } ;
typedef TYPE_1__ parser_ctx ;
typedef int i3String ;


 int FUNC_0 (int *,struct status_block*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct status_block*,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 struct status_block* FUNC_6 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(void *VAR_2) {
    parser_ctx *VAR_3 = VAR_2;
    struct status_block *VAR_4 = FUNC_6(sizeof(struct status_block));
    FUNC_4(VAR_4, &(VAR_3->block), sizeof(struct status_block));


    if (!VAR_4->full_text)
        VAR_4->full_text = FUNC_2("SPEC VIOLATION: full_text is NULL!");
    if (VAR_4->urgent)
        VAR_3->has_urgent = 1;

    if (VAR_4->min_width_str) {
        i3String *VAR_5 = FUNC_2(VAR_4->min_width_str);
        FUNC_3(VAR_5, VAR_4->pango_markup);
        VAR_4->min_width = (uint32_t)FUNC_5(VAR_5);
        FUNC_1(VAR_5);
    }

    FUNC_3(VAR_4->full_text, VAR_4->pango_markup);

    if (VAR_4->short_text != ((void*)0))
        FUNC_3(VAR_4->short_text, VAR_4->pango_markup);

    FUNC_0(&VAR_1, VAR_4, VAR_0);
    return 1;
}
