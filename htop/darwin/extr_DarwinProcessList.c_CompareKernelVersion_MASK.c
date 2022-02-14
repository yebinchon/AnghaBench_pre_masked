
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern {short* version; } ;


 int FUNC_0 (struct kern*) ;

int FUNC_1(short int VAR_0, short int VAR_1, short int VAR_2) {
    struct kern VAR_3;
    FUNC_0(&VAR_3);
    if ( VAR_3.version[0] != VAR_0) return VAR_3.version[0] - VAR_0;
    if ( VAR_3.version[1] != VAR_1) return VAR_3.version[1] - VAR_1;
    if ( VAR_3.version[2] != VAR_2) return VAR_3.version[2] - VAR_2;
    return 0;
}
