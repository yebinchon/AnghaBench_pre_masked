
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(int VAR_3, int VAR_4, const char *VAR_5, int VAR_6)
{
    if ((VAR_3 & VAR_0) != 0) {
        FUNC_1(VAR_2 + VAR_4);
    } else if ((VAR_3 & VAR_1) != 0) {
        FUNC_2(VAR_2 + VAR_4);
    } else {
        FUNC_0(!"unexpected mode");
    }
}
