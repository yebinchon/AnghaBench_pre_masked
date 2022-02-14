
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs64_ {int dummy; } ;
struct mount {int dummy; } ;
typedef int path_raw ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int FUNC_4 (struct mount*,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

dword_t FUNC_6(addr_t VAR_5, dword_t VAR_6, addr_t VAR_7) {
    char VAR_8[VAR_1];
    if (FUNC_5(VAR_5, VAR_8, sizeof(VAR_8)))
        return VAR_3;
    FUNC_0("statfs64(\"%s\", %d, %#x)", VAR_8, VAR_6, VAR_7);
    if (VAR_6 != sizeof(struct statfs64_))
        return VAR_4;
    char VAR_9[VAR_1];
    int VAR_10 = FUNC_3(VAR_0, VAR_8, VAR_9, VAR_2);
    if (VAR_10 < 0)
        return VAR_10;
    struct mount *VAR_11 = FUNC_1(VAR_9);
    VAR_10 = FUNC_4(VAR_11, VAR_7);
    FUNC_2(VAR_11);
    return VAR_10;
}
