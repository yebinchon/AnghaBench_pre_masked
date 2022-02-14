
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int direction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static direction_t FUNC_3(const char *VAR_4) {
    if (FUNC_2(VAR_4, "left") == 0) {
        return VAR_1;
    } else if (FUNC_2(VAR_4, "right") == 0) {
        return VAR_2;
    } else if (FUNC_2(VAR_4, "up") == 0) {
        return VAR_3;
    } else if (FUNC_2(VAR_4, "down") == 0) {
        return VAR_0;
    } else {
        FUNC_0("Invalid direction. This is a parser bug.\n");
        FUNC_1(0);
    }
}
