
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statusline_head {int dummy; } ;
struct status_block {int border; int background; int min_width_str; int instance; int name; int color; int short_text; int full_text; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct statusline_head*) ;
 struct status_block* FUNC_3 (struct statusline_head*) ;
 int FUNC_4 (struct statusline_head*,struct status_block*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct status_block*) ;

__attribute__((used)) static void FUNC_6(struct statusline_head *VAR_1, bool VAR_2) {
    struct status_block *VAR_3;
    while (!FUNC_2(VAR_1)) {
        VAR_3 = FUNC_3(VAR_1);
        if (VAR_2) {
            FUNC_1(VAR_3->full_text);
            FUNC_1(VAR_3->short_text);
            FUNC_0(VAR_3->color);
            FUNC_0(VAR_3->name);
            FUNC_0(VAR_3->instance);
            FUNC_0(VAR_3->min_width_str);
            FUNC_0(VAR_3->background);
            FUNC_0(VAR_3->border);
        }

        FUNC_4(VAR_1, VAR_3, VAR_0);
        FUNC_5(VAR_3);
    }
}
