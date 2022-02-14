
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_mask; scalar_t__ sa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4() {
    extern void FUNC_5(int VAR_3);
    struct sigaction VAR_4;
    VAR_4.sa_handler = FUNC_5;
    VAR_4.sa_flags = 0;
    FUNC_2(&VAR_4.sa_mask);
    FUNC_1(&VAR_4.sa_mask, VAR_1);
    FUNC_0(VAR_1, &VAR_4, ((void*)0));
    FUNC_3(VAR_0, VAR_2);
}
