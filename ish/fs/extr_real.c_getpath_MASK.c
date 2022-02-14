
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 size_t FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, char *VAR_3) {

    char VAR_4[20];
    FUNC_2(VAR_4, "/proc/self/fd/%d", VAR_2);
    ssize_t VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_1 - 1);
    if (VAR_5 >= 0)
        VAR_3[VAR_5] = '\0';
    return VAR_5;



}
