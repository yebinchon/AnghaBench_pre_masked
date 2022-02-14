
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_t ;
typedef int addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int*) ;

int_t FUNC_7(addr_t VAR_4, int_t VAR_5) {
    FUNC_1("pipe2(%#x, %#x)", VAR_4, VAR_5);
    if (VAR_5 & ~(VAR_0|VAR_1)) {
        FUNC_0("unsupported pipe2 flags");
        return VAR_3;
    }

    int VAR_6[2];
    int VAR_7 = FUNC_4(VAR_6);
    if (VAR_7 < 0)
        return VAR_7;

    int VAR_8[2];
    VAR_7 = VAR_8[0] = FUNC_5(VAR_6[0], VAR_5);
    if (VAR_8[0] < 0)
        goto close_pipe;
    VAR_7 = VAR_8[1] = FUNC_5(VAR_6[1], VAR_5);
    if (VAR_8[1] < 0)
        goto close_fake_0;

    VAR_7 = VAR_2;
    if (FUNC_6(VAR_4, VAR_8))
        goto close_fake_1;
    FUNC_1(" [%d %d]", VAR_8[0], VAR_8[1]);
    return 0;

close_fake_1:
    FUNC_3(VAR_8[1]);
close_fake_0:
    FUNC_3(VAR_8[0]);
close_pipe:
    FUNC_2(VAR_6[0]);
    FUNC_2(VAR_6[1]);
    return VAR_7;
}
