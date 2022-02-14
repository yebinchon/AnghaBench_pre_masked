
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;

int_t FUNC_2(int_t VAR_7, int_t VAR_8, int_t VAR_9) {
    FUNC_0("reboot(%#x, %d, %d)", VAR_7, VAR_8, VAR_9);
    if (!FUNC_1())
        return VAR_6;
    if (VAR_7 != (int) VAR_0 ||
            (VAR_8 != VAR_1 &&
             VAR_8 != VAR_2 &&
             VAR_8 != VAR_3 &&
             VAR_8 != VAR_4))
        return VAR_5;

    switch (VAR_9) {
        case 128:
        case 129:
            return 0;
        default:
            return VAR_6;
    }
}
