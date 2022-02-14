
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct status_block {scalar_t__ sep_block_width; } ;
struct TYPE_6__ {int statusline_buffer; } ;
typedef TYPE_1__ i3_output ;
typedef int color_t ;
struct TYPE_9__ {int bar_bg; int focus_bar_bg; int sep_fg; int focus_sep_fg; } ;
struct TYPE_8__ {int * separator_symbol; } ;
struct TYPE_7__ {int height; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int * FUNC_1 (struct status_block*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (int *,int ,scalar_t__,int,int,int) ;
 int FUNC_3 (int *,int *,int ,int ,scalar_t__,int,scalar_t__) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_4 (struct status_block*) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(i3_output *VAR_7, uint32_t VAR_8, struct status_block *VAR_9, bool VAR_10) {
    color_t VAR_11 = (VAR_10 ? VAR_2.focus_sep_fg : VAR_2.sep_fg);
    color_t VAR_12 = (VAR_10 ? VAR_2.focus_bar_bg : VAR_2.bar_bg);

    uint32_t VAR_13 = FUNC_4(VAR_9);
    if (FUNC_1(VAR_9, VAR_1) == ((void*)0) || VAR_13 == 0)
        return;

    uint32_t VAR_14 = VAR_8 - VAR_13;
    if (VAR_3.separator_symbol == ((void*)0)) {

        FUNC_2(&VAR_7->statusline_buffer, VAR_11,
                            VAR_14,
                            FUNC_5(VAR_5),
                            FUNC_5(1),
                            VAR_0 - 2 * FUNC_5(VAR_5));
    } else {

        uint32_t VAR_15 = FUNC_0(VAR_8 - VAR_9->sep_block_width, VAR_14 - VAR_6 / 2);
        FUNC_3(VAR_3.separator_symbol, &VAR_7->statusline_buffer, VAR_11, VAR_12,
                       VAR_15, VAR_0 / 2 - VAR_4.height / 2, VAR_8 - VAR_15);
    }
}
