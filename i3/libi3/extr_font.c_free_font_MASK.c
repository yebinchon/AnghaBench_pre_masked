
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int info; int id; } ;
struct TYPE_5__ {int pango_desc; TYPE_1__ xcb; } ;
struct TYPE_6__ {int type; TYPE_2__ specific; int pattern; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void) {

    if (VAR_1 == ((void*)0))
        return;

    FUNC_0(VAR_1->pattern);
    switch (VAR_1->type) {
        case 130:

            break;
        case 128: {

            FUNC_2(VAR_0, VAR_1->specific.xcb.id);
            FUNC_0(VAR_1->specific.xcb.info);
            break;
        }
        case 129:

            FUNC_1(VAR_1->specific.pango_desc);
            break;
    }

    VAR_1 = ((void*)0);
}
