
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev_signal {int dummy; } ;
typedef int signal_watchers ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ev_signal*,int ,int ) ;
 int FUNC_1 (int ,struct ev_signal*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(void) {
    static struct ev_signal VAR_7[6];
    size_t VAR_8 = sizeof(VAR_7) / sizeof(VAR_7[0]);







    FUNC_0(&VAR_7[0], VAR_5, VAR_1);
    FUNC_0(&VAR_7[1], VAR_5, VAR_2);
    FUNC_0(&VAR_7[2], VAR_5, VAR_0);
    FUNC_0(&VAR_7[3], VAR_5, VAR_3);
    FUNC_0(&VAR_7[4], VAR_5, VAR_4);
    FUNC_0(&VAR_7[5], VAR_5, VAR_4);
    for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        FUNC_1(VAR_6, &VAR_7[VAR_9]);



        FUNC_2(VAR_6);
    }
}
