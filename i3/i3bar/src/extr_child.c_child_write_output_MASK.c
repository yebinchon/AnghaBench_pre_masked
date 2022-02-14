
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int click_events; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned char const**,size_t*) ;

__attribute__((used)) static void FUNC_6(void) {
    if (VAR_0.click_events) {
        const unsigned char *VAR_3;
        size_t VAR_4;
        ssize_t VAR_5;

        FUNC_5(VAR_2, &VAR_3, &VAR_4);

        VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
        if (VAR_5 != -1)
            VAR_5 = FUNC_3(VAR_1, "\n", 1);

        FUNC_4(VAR_2);

        if (VAR_5 == -1) {
            VAR_0.click_events = 0;
            FUNC_1();
            FUNC_2("child_write_output failed");
            FUNC_0(0);
        }
    }
}
