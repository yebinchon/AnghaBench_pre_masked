
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(int VAR_1) {
    char VAR_2[1024];
    FUNC_1(VAR_2, "/proc/%d/mem", VAR_1);
    return FUNC_2(FUNC_0(VAR_2, VAR_0), "open mem");
}
