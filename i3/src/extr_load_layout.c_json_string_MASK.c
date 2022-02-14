
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pending_marks {int dummy; } ;
struct TYPE_9__ {void* title; void* window_role; void* instance; void* class; } ;
struct TYPE_8__ {char* name; char* title_format; char* sticky_group; int current_border_width; int scratchpad_state; int floating; void* last_split_layout; void* workspace_layout; void* layout; int type; void* border_style; } ;
struct TYPE_7__ {TYPE_4__* con_to_be_marked; int mark; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (TYPE_4__*,char*,int ) ;
 TYPE_5__* VAR_24 ;
 int FUNC_5 (char*) ;
 TYPE_4__* VAR_25 ;
 char* VAR_26 ;
 TYPE_1__* VAR_27 ;
 int FUNC_6 (char*,unsigned char const*,size_t) ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (char**,char*,int,unsigned char const*) ;
 void* FUNC_9 (size_t,int) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*,size_t) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int VAR_32 ;

__attribute__((used)) static int FUNC_14(void *VAR_33, const unsigned char *VAR_34, size_t VAR_35) {
    FUNC_3("string: %.*s for key %s\n", (int)VAR_35, VAR_34, VAR_26);
    if (VAR_30) {
        char *VAR_36;
        FUNC_8(&VAR_36, "%.*s", VAR_35, VAR_34);
        if (FUNC_13(VAR_26, "class") == 0) {
            VAR_24->class = FUNC_7(VAR_36);
            VAR_32 = 0;
        } else if (FUNC_13(VAR_26, "instance") == 0) {
            VAR_24->instance = FUNC_7(VAR_36);
            VAR_32 = 0;
        } else if (FUNC_13(VAR_26, "window_role") == 0) {
            VAR_24->window_role = FUNC_7(VAR_36);
            VAR_32 = 0;
        } else if (FUNC_13(VAR_26, "title") == 0) {
            VAR_24->title = FUNC_7(VAR_36);
            VAR_32 = 0;
        } else {
            FUNC_1("swallow key %s unknown\n", VAR_26);
        }
        FUNC_5(VAR_36);
    } else if (VAR_29) {
        char *VAR_37;
        FUNC_8(&VAR_37, "%.*s", (int)VAR_35, VAR_34);

        VAR_27 = FUNC_10(VAR_27, (++VAR_28) * sizeof(struct pending_marks));
        VAR_27[VAR_28 - 1].mark = FUNC_11(VAR_37);
        VAR_27[VAR_28 - 1].con_to_be_marked = VAR_25;
    } else {
        if (FUNC_13(VAR_26, "name") == 0) {
            VAR_25->name = FUNC_9(VAR_35 + 1, 1);
            FUNC_6(VAR_25->name, VAR_34, VAR_35);
        } else if (FUNC_13(VAR_26, "title_format") == 0) {
            VAR_25->title_format = FUNC_9(VAR_35 + 1, 1);
            FUNC_6(VAR_25->title_format, VAR_34, VAR_35);
        } else if (FUNC_13(VAR_26, "sticky_group") == 0) {
            VAR_25->sticky_group = FUNC_9(VAR_35 + 1, 1);
            FUNC_6(VAR_25->sticky_group, VAR_34, VAR_35);
            FUNC_3("sticky_group of this container is %s\n", VAR_25->sticky_group);
        } else if (FUNC_13(VAR_26, "orientation") == 0) {






            char *VAR_38 = ((void*)0);
            FUNC_8(&VAR_38, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_38, "none") == 0 ||
                FUNC_13(VAR_38, "horizontal") == 0)
                VAR_25->last_split_layout = VAR_16;
            else if (FUNC_13(VAR_38, "vertical") == 0)
                VAR_25->last_split_layout = VAR_17;
            else
                FUNC_3("Unhandled orientation: %s\n", VAR_38);
            FUNC_5(VAR_38);
        } else if (FUNC_13(VAR_26, "border") == 0) {
            char *VAR_39 = ((void*)0);
            FUNC_8(&VAR_39, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_39, "none") == 0)
                VAR_25->border_style = VAR_0;
            else if (FUNC_13(VAR_39, "1pixel") == 0) {
                VAR_25->border_style = VAR_2;
                VAR_25->current_border_width = 1;
            } else if (FUNC_13(VAR_39, "pixel") == 0)
                VAR_25->border_style = VAR_2;
            else if (FUNC_13(VAR_39, "normal") == 0)
                VAR_25->border_style = VAR_1;
            else
                FUNC_3("Unhandled \"border\": %s\n", VAR_39);
            FUNC_5(VAR_39);
        } else if (FUNC_13(VAR_26, "type") == 0) {
            char *VAR_40 = ((void*)0);
            FUNC_8(&VAR_40, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_40, "root") == 0)
                VAR_25->type = VAR_7;
            else if (FUNC_13(VAR_40, "output") == 0)
                VAR_25->type = VAR_6;
            else if (FUNC_13(VAR_40, "con") == 0)
                VAR_25->type = VAR_3;
            else if (FUNC_13(VAR_40, "floating_con") == 0)
                VAR_25->type = VAR_5;
            else if (FUNC_13(VAR_40, "workspace") == 0)
                VAR_25->type = VAR_8;
            else if (FUNC_13(VAR_40, "dockarea") == 0)
                VAR_25->type = VAR_4;
            else
                FUNC_3("Unhandled \"type\": %s\n", VAR_40);
            FUNC_5(VAR_40);
        } else if (FUNC_13(VAR_26, "layout") == 0) {
            char *VAR_41 = ((void*)0);
            FUNC_8(&VAR_41, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_41, "default") == 0)

                VAR_25->layout = VAR_25->last_split_layout;
            else if (FUNC_13(VAR_41, "stacked") == 0)
                VAR_25->layout = VAR_18;
            else if (FUNC_13(VAR_41, "tabbed") == 0)
                VAR_25->layout = VAR_19;
            else if (FUNC_13(VAR_41, "dockarea") == 0)
                VAR_25->layout = VAR_14;
            else if (FUNC_13(VAR_41, "output") == 0)
                VAR_25->layout = VAR_15;
            else if (FUNC_13(VAR_41, "splith") == 0)
                VAR_25->layout = VAR_16;
            else if (FUNC_13(VAR_41, "splitv") == 0)
                VAR_25->layout = VAR_17;
            else
                FUNC_3("Unhandled \"layout\": %s\n", VAR_41);
            FUNC_5(VAR_41);
        } else if (FUNC_13(VAR_26, "workspace_layout") == 0) {
            char *VAR_42 = ((void*)0);
            FUNC_8(&VAR_42, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_42, "default") == 0)
                VAR_25->workspace_layout = VAR_13;
            else if (FUNC_13(VAR_42, "stacked") == 0)
                VAR_25->workspace_layout = VAR_18;
            else if (FUNC_13(VAR_42, "tabbed") == 0)
                VAR_25->workspace_layout = VAR_19;
            else
                FUNC_3("Unhandled \"workspace_layout\": %s\n", VAR_42);
            FUNC_5(VAR_42);
        } else if (FUNC_13(VAR_26, "last_split_layout") == 0) {
            char *VAR_43 = ((void*)0);
            FUNC_8(&VAR_43, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_43, "splith") == 0)
                VAR_25->last_split_layout = VAR_16;
            else if (FUNC_13(VAR_43, "splitv") == 0)
                VAR_25->last_split_layout = VAR_17;
            else
                FUNC_3("Unhandled \"last_splitlayout\": %s\n", VAR_43);
            FUNC_5(VAR_43);
        } else if (FUNC_13(VAR_26, "mark") == 0) {
            FUNC_0("Found deprecated key \"mark\".\n");

            char *VAR_44 = ((void*)0);
            FUNC_8(&VAR_44, "%.*s", (int)VAR_35, VAR_34);

            FUNC_4(VAR_25, VAR_44, VAR_20);
        } else if (FUNC_13(VAR_26, "floating") == 0) {
            char *VAR_45 = ((void*)0);
            FUNC_8(&VAR_45, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_45, "auto_off") == 0)
                VAR_25->floating = VAR_9;
            else if (FUNC_13(VAR_45, "auto_on") == 0)
                VAR_25->floating = VAR_10;
            else if (FUNC_13(VAR_45, "user_off") == 0)
                VAR_25->floating = VAR_11;
            else if (FUNC_13(VAR_45, "user_on") == 0)
                VAR_25->floating = VAR_12;
            FUNC_5(VAR_45);
        } else if (FUNC_13(VAR_26, "scratchpad_state") == 0) {
            char *VAR_46 = ((void*)0);
            FUNC_8(&VAR_46, "%.*s", (int)VAR_35, VAR_34);
            if (FUNC_13(VAR_46, "none") == 0)
                VAR_25->scratchpad_state = VAR_23;
            else if (FUNC_13(VAR_46, "fresh") == 0)
                VAR_25->scratchpad_state = VAR_22;
            else if (FUNC_13(VAR_46, "changed") == 0)
                VAR_25->scratchpad_state = VAR_21;
            FUNC_5(VAR_46);
        } else if (FUNC_13(VAR_26, "previous_workspace_name") == 0) {
            FUNC_2(VAR_31);
            VAR_31 = FUNC_12((const char *)VAR_34, VAR_35);
        }
    }
    return 1;
}
