
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ request; } ;
typedef TYPE_1__ xcb_mapping_notify_event_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(xcb_mapping_notify_event_t *VAR_6) {
    if (VAR_6->request != VAR_0 &&
        VAR_6->request != VAR_1)
        return;

    FUNC_0("Received mapping_notify for keyboard or modifier mapping, re-grabbing keys\n");
    FUNC_5(VAR_4, VAR_6);

    VAR_5 = FUNC_1(VAR_2, VAR_4);

    FUNC_4(VAR_3);
    FUNC_3();
    FUNC_2(VAR_3);
}
