
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
typedef int path_raw ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_3 ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int FUNC_4 (struct mount*,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

dword_t FUNC_6(addr_t VAR_4, addr_t VAR_5) {
    char VAR_6[VAR_1];
    if (FUNC_5(VAR_4, VAR_6, sizeof(VAR_6)))
        return VAR_3;
    FUNC_0("statfs(\"%s\", %#x)", VAR_6, VAR_5);
    char VAR_7[VAR_1];
    int VAR_8 = FUNC_3(VAR_0, VAR_6, VAR_7, VAR_2);
    if (VAR_8 < 0)
        return VAR_8;
    struct mount *VAR_9 = FUNC_1(VAR_7);
    VAR_8 = FUNC_4(VAR_9, VAR_5);
    FUNC_2(VAR_9);
    return VAR_8;
}
