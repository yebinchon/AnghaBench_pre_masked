
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(addr_t VAR_5, int_t VAR_6, int VAR_7) {
    if (VAR_6 < 0)
        return VAR_2;
    if (VAR_7 & VAR_0) {
        if ((size_t) VAR_6 > VAR_4)
            VAR_6 = VAR_4;
    } else {
        if ((size_t) VAR_6 > FUNC_0(&VAR_3))
            VAR_6 = FUNC_0(&VAR_3);
    }
    char *VAR_8 = FUNC_3(VAR_6);
    FUNC_1(&VAR_3, VAR_8, VAR_6, VAR_7);
    int VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_6);
    FUNC_2(VAR_8);
    if (VAR_9)
        return VAR_1;
    return VAR_6;
}
