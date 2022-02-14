
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int min_byte1; int max_byte1; int min_char_or_byte2; int max_char_or_byte2; } ;
typedef TYPE_3__ xcb_query_font_reply_t ;
struct TYPE_12__ {scalar_t__ character_width; int right_side_bearing; int left_side_bearing; int ascent; int descent; } ;
typedef TYPE_4__ xcb_charinfo_t ;
struct TYPE_13__ {int byte1; int byte2; } ;
typedef TYPE_5__ xcb_char2b_t ;
struct TYPE_9__ {TYPE_4__* table; TYPE_3__* info; } ;
struct TYPE_10__ {TYPE_1__ xcb; } ;
struct TYPE_14__ {TYPE_2__ specific; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_5__ const*,size_t) ;

__attribute__((used)) static int FUNC_1(const xcb_char2b_t *VAR_1, size_t VAR_2) {
    if (VAR_2 == 0)
        return 0;

    int VAR_3;
    if (VAR_0->specific.xcb.table == ((void*)0)) {

        VAR_3 = FUNC_0(VAR_1, VAR_2);
    } else {

        xcb_query_font_reply_t *VAR_4 = VAR_0->specific.xcb.info;
        xcb_charinfo_t *VAR_5 = VAR_0->specific.xcb.table;


        VAR_3 = 0;
        for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
            xcb_charinfo_t *VAR_7;
            int VAR_8 = VAR_1[VAR_6].byte1;
            int VAR_9 = VAR_1[VAR_6].byte2;

            if (VAR_8 < VAR_4->min_byte1 ||
                VAR_8 > VAR_4->max_byte1 ||
                VAR_9 < VAR_4->min_char_or_byte2 ||
                VAR_9 > VAR_4->max_char_or_byte2)
                continue;


            VAR_7 = &VAR_5[((VAR_8 - VAR_4->min_byte1) *
                                (VAR_4->max_char_or_byte2 - VAR_4->min_char_or_byte2 + 1)) +
                               (VAR_9 - VAR_4->min_char_or_byte2)];

            if (VAR_7->character_width != 0 ||
                (VAR_7->right_side_bearing |
                 VAR_7->left_side_bearing |
                 VAR_7->ascent |
                 VAR_7->descent) != 0) {
                VAR_3 += VAR_7->character_width;
            }
        }
    }

    return VAR_3;
}
