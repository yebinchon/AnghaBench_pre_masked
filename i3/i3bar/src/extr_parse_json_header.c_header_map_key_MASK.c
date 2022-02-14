
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(void *VAR_5, const unsigned char *VAR_6, size_t VAR_7) {
    if (FUNC_0("version")) {
        VAR_4 = VAR_3;
    } else if (FUNC_0("stop_signal")) {
        VAR_4 = VAR_2;
    } else if (FUNC_0("cont_signal")) {
        VAR_4 = VAR_1;
    } else if (FUNC_0("click_events")) {
        VAR_4 = VAR_0;
    }
    return 1;
}
