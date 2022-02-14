
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int one ;
typedef scalar_t__ int_t ;
typedef scalar_t__ fd_t ;
typedef int dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int,int ) ;

int_t FUNC_8(dword_t VAR_8, dword_t VAR_9, dword_t VAR_10) {
    FUNC_0("socket(%d, %d, %d)", VAR_8, VAR_9, VAR_10);
    int VAR_11 = FUNC_4(VAR_8);
    if (VAR_11 < 0)
        return VAR_7;
    int VAR_12 = FUNC_6(VAR_9, VAR_10);
    if (VAR_12 < 0)
        return VAR_7;


    if (VAR_9 == VAR_6 && VAR_10 == VAR_3)
        VAR_10 = VAR_1;

    int VAR_13 = FUNC_7(VAR_11, VAR_12, VAR_10);
    if (VAR_13 < 0)
        return FUNC_2();
    fd_t VAR_14 = FUNC_5(VAR_13, VAR_8, VAR_9, VAR_10);
    if (VAR_14 < 0)
        FUNC_1(VAR_13);
    return VAR_14;
}
