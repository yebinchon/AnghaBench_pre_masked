
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_regs_struct {int rsp; int rax; int rbx; int rcx; scalar_t__ rdx; } ;
struct msghdr {char* msg_control; int msg_controllen; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int sent_fd ;
typedef int msg_bak ;
typedef int msg32 ;
typedef int cmsg_bak ;
typedef int cmsg ;
typedef int addr_t ;
struct TYPE_2__ {int real_fd; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int,struct user_regs_struct*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int,...) ;
 int FUNC_10 (int,int,...) ;
 int FUNC_11 (int,struct msghdr*,int ) ;
 int FUNC_12 (int,struct user_regs_struct*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(int VAR_3, int VAR_4, int VAR_5, int VAR_6) {



    int VAR_7 = FUNC_5(VAR_6)->real_fd;
    struct msghdr VAR_8 = {};
    char VAR_9[FUNC_3(sizeof(int))];
    FUNC_7(VAR_9, 0, sizeof(VAR_9));

    VAR_8.msg_control = VAR_9;
    VAR_8.msg_controllen = sizeof(VAR_9);

    struct cmsghdr *VAR_10 = FUNC_1(&VAR_8);
    VAR_10->cmsg_level = VAR_1;
    VAR_10->cmsg_type = VAR_0;
    VAR_10->cmsg_len = FUNC_2(sizeof(int));
    *(int *) FUNC_0(VAR_10) = VAR_7;

    FUNC_14(FUNC_11(VAR_4, &VAR_8, 0), "sendmsg insanity");



    struct user_regs_struct VAR_11;
    FUNC_6(VAR_3, &VAR_11);
    struct user_regs_struct VAR_12 = VAR_11;


    VAR_12.rsp -= 16;
    addr_t VAR_13 = VAR_12.rsp;
    char VAR_14[16];
    FUNC_9(VAR_3, VAR_12.rsp, VAR_14, sizeof(VAR_14));


    VAR_12.rsp -= 32;
    int VAR_15[] = {0, 0, 0, 0, VAR_13, 20, 0};
    addr_t VAR_16 = VAR_12.rsp;
    char VAR_17[32];
    FUNC_9(VAR_3, VAR_12.rsp, VAR_17, sizeof(VAR_17));
    FUNC_10(VAR_3, VAR_12.rsp, &VAR_15, sizeof(VAR_15));

    VAR_12.rax = 372;
    VAR_12.rbx = VAR_5;
    VAR_12.rcx = VAR_16;
    VAR_12.rdx = 0;

    FUNC_12(VAR_3, &VAR_12);
    FUNC_13(VAR_3);
    FUNC_6(VAR_3, &VAR_12);

    int VAR_18;
    if ((long) VAR_12.rax >= 0)
        FUNC_9(VAR_3, VAR_13 + 12, &VAR_18, sizeof(VAR_18));
    else
        VAR_18 = VAR_12.rax;


    FUNC_10(VAR_3, VAR_13, VAR_14, sizeof(VAR_14));
    FUNC_10(VAR_3, VAR_16, VAR_17, sizeof(VAR_17));
    FUNC_12(VAR_3, &VAR_12);

    if (VAR_18 < 0) {
        VAR_2 = -VAR_18;
        FUNC_8("remote recvmsg insanity");
        FUNC_4(1);
    }

    return VAR_18;
}
