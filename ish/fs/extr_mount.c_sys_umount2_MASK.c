
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_raw ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

dword_t FUNC_5(addr_t VAR_7, dword_t VAR_8) {
    char VAR_9[VAR_1];
    if (FUNC_4(VAR_7, VAR_9, sizeof(VAR_9)))
        return VAR_5;
    char VAR_10[VAR_1];
    int VAR_11 = FUNC_2(VAR_0, VAR_9, VAR_10,
            VAR_8 & VAR_4 ? VAR_3 : VAR_2);
    if (VAR_11 < 0)
        return VAR_11;

    FUNC_1(&VAR_6);
    VAR_11 = FUNC_0(VAR_10);
    FUNC_3(&VAR_6);
    return VAR_11;
}
