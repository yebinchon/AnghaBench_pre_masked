
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_cursor_t ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ xcb; } ;
struct TYPE_7__ {TYPE_2__ specific; } ;
typedef TYPE_3__ i3Font ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int ,int ,int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

void FUNC_7(int VAR_3) {
    xcb_cursor_t VAR_4 = FUNC_5(VAR_1);
    i3Font VAR_5 = FUNC_0("cursor", 0);
    int VAR_6 = FUNC_6(VAR_3);
    FUNC_2(VAR_1, VAR_4, VAR_5.specific.xcb.id,
                            VAR_5.specific.xcb.id, VAR_6, VAR_6 + 1, 0, 0, 0,
                            65535, 65535, 65535);
    FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_4);
    FUNC_4(VAR_1, VAR_4);
    FUNC_3(VAR_1);
}
