
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int mode_t_ ;
typedef int dword_t ;
typedef int dev_t_ ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

dword_t FUNC_4(addr_t VAR_2, mode_t_ VAR_3, dev_t_ VAR_4) {
    char VAR_5[VAR_0];
    if (FUNC_3(VAR_2, VAR_5, sizeof(VAR_5)))
        return VAR_1;
    FUNC_0("mknod(\"%s\", %#x, %#x)", VAR_5, VAR_3, VAR_4);
    FUNC_1(&VAR_3);
    return FUNC_2(VAR_5, VAR_3, VAR_4);
}
