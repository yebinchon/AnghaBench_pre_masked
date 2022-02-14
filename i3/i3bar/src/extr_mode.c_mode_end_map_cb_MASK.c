
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mode_json_params {int cur_key; TYPE_1__* mode; int pango_markup; int name; } ;
struct TYPE_2__ {int name; int name_width; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_0) {
    struct mode_json_params *VAR_1 = (struct mode_json_params *)VAR_0;


    VAR_1->mode->name = FUNC_3(VAR_1->name);
    FUNC_4(VAR_1->mode->name, VAR_1->pango_markup);

    VAR_1->mode->name_width = FUNC_5(VAR_1->mode->name);

    FUNC_0("Got mode change: %s\n", FUNC_2(VAR_1->mode->name));
    FUNC_1(VAR_1->cur_key);

    return 1;
}
