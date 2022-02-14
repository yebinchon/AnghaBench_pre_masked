
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fd* unix_peer; } ;
struct fd {TYPE_1__ socket; } ;
typedef int int_t ;
typedef int dword_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct fd* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int*) ;

int_t FUNC_12(dword_t VAR_3, dword_t VAR_4, dword_t VAR_5, addr_t VAR_6) {
    FUNC_0("socketpair(%d, %d, %d, 0x%x)", VAR_3, VAR_4, VAR_5, VAR_6);
    int VAR_7 = FUNC_5(VAR_3);
    if (VAR_7 < 0)
        return VAR_1;
    int VAR_8 = FUNC_7(VAR_4, VAR_5);
    if (VAR_8 < 0)
        return VAR_1;

    int VAR_9[2];
    int VAR_10 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_9);
    if (VAR_10 < 0)
        return FUNC_2();

    FUNC_4(&VAR_2);
    int VAR_11[2];
    VAR_10 = VAR_11[0] = FUNC_6(VAR_9[0], VAR_3, VAR_4, VAR_5);
    if (VAR_11[0] < 0) {
        FUNC_10(&VAR_2);
        goto close_sockets;
    }
    VAR_10 = VAR_11[1] = FUNC_6(VAR_9[1], VAR_3, VAR_4, VAR_5);
    if (VAR_11[1] < 0) {
        FUNC_10(&VAR_2);
        goto close_fake_0;
    }
    struct fd *VAR_12 = FUNC_3(VAR_11[0]);
    struct fd *VAR_13 = FUNC_3(VAR_11[1]);
    VAR_12->socket.unix_peer = VAR_13;
    VAR_13->socket.unix_peer = VAR_12;
    FUNC_10(&VAR_2);

    VAR_10 = VAR_0;
    if (FUNC_11(VAR_6, VAR_11))
        goto close_fake_1;

    FUNC_0(" [%d, %d]", VAR_11[0], VAR_11[1]);
    return 0;

close_fake_1:
    FUNC_9(VAR_11[1]);
close_fake_0:
    FUNC_9(VAR_11[0]);
close_sockets:
    FUNC_1(VAR_9[0]);
    FUNC_1(VAR_9[1]);
    return VAR_10;
}
