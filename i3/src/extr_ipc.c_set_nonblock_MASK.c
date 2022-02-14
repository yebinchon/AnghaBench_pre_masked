
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3) {
    int VAR_4 = FUNC_1(VAR_3, VAR_0, 0);
    if (VAR_4 & VAR_2) {
        return;
    }
    VAR_4 |= VAR_2;
    if (FUNC_1(VAR_3, VAR_1, VAR_4) < 0)
        FUNC_0(-1, "Could not set O_NONBLOCK");
}
