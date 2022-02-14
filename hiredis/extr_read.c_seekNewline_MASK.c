
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, size_t VAR_1) {
    int VAR_2 = 0;
    int VAR_3 = VAR_1-1;





    while (VAR_2 < VAR_3) {
        while(VAR_2 < VAR_3 && VAR_0[VAR_2] != '\r') VAR_2++;
        if (VAR_2==VAR_3) {

            return ((void*)0);
        } else {
            if (VAR_0[VAR_2+1] == '\n') {

                return VAR_0+VAR_2;
            } else {

                VAR_2++;
            }
        }
    }
    return ((void*)0);
}
