
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct sockaddr_in {int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr* msg_name; int sin_family; } ;
struct sockaddr {int sa_family; } ;
struct msghdr {int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr* msg_name; int sin_family; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef size_t ssize_t ;
typedef int sa ;
typedef int quicly_decoded_packet_t ;
struct TYPE_10__ {TYPE_3__* now; } ;
typedef TYPE_1__ quicly_context_t ;
typedef int quicly_conn_t ;
typedef int mess ;
typedef int local ;
typedef scalar_t__ int64_t ;
typedef int fd_set ;
typedef int buf ;
struct TYPE_14__ {int master_id; } ;
struct TYPE_13__ {TYPE_2__* now; } ;
struct TYPE_12__ {scalar_t__ (* cb ) (TYPE_3__*) ;} ;
struct TYPE_11__ {scalar_t__ (* cb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,void*,int) ;
 TYPE_5__ VAR_7 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,int *,size_t) ;
 int VAR_10 ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 TYPE_7__ VAR_11 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int **,TYPE_5__*,char const*,struct sockaddr*,int *,TYPE_7__*,int ,int *,int *) ;
 size_t FUNC_11 (TYPE_5__*,int *,int *,size_t) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,struct sockaddr*,int *) ;
 size_t FUNC_16 (int,struct sockaddr_in*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int ,int ,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_20 (TYPE_3__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_22(struct sockaddr *VAR_16, const char *VAR_17)
{
    int VAR_18, VAR_19;
    struct sockaddr_in VAR_20;
    quicly_conn_t *VAR_21 = ((void*)0);

    if ((VAR_18 = FUNC_19(VAR_16->sa_family, VAR_6, VAR_3)) == -1) {
        FUNC_9("socket(2) failed");
        return 1;
    }
    FUNC_8(&VAR_20, 0, sizeof(VAR_20));
    VAR_20.sin_family = VAR_0;
    if (FUNC_4(VAR_18, (void *)&VAR_20, sizeof(VAR_20)) != 0) {
        FUNC_9("bind(2) failed");
        return 1;
    }
    VAR_19 = FUNC_10(&VAR_21, &VAR_7, VAR_17, VAR_16, ((void*)0), &VAR_11, VAR_13, &VAR_10, &VAR_12);
    FUNC_3(VAR_19 == 0);
    ++VAR_11.master_id;
    FUNC_5(VAR_21);
    FUNC_18(VAR_18, VAR_21);

    while (1) {
        fd_set VAR_22;
        struct timeval *VAR_23, VAR_24;
        do {
            int64_t VAR_25 = VAR_21 != ((void*)0) ? FUNC_14(VAR_21) : VAR_2;
            if (VAR_8 < VAR_25)
                VAR_25 = VAR_8;
            if (VAR_25 != VAR_2) {
                quicly_context_t *VAR_26 = FUNC_13(VAR_21);
                int64_t VAR_27 = VAR_25 - VAR_26->now->cb(VAR_26->now);
                if (VAR_27 > 0) {
                    VAR_24.tv_sec = VAR_27 / 1000;
                    VAR_24.tv_usec = (VAR_27 % 1000) * 1000;
                } else {
                    VAR_24.tv_sec = 0;
                    VAR_24.tv_usec = 0;
                }
                VAR_23 = &VAR_24;
            } else {
                VAR_23 = ((void*)0);
            }
            FUNC_2(&VAR_22);
            FUNC_1(VAR_18, &VAR_22);
        } while (FUNC_17(VAR_18 + 1, &VAR_22, ((void*)0), ((void*)0), VAR_23) == -1 && VAR_9 == VAR_1);
        if (VAR_8 <= VAR_7.now->cb(VAR_7.now))
            FUNC_5(VAR_21);
        if (FUNC_0(VAR_18, &VAR_22)) {
            uint8_t VAR_28[4096];
            struct msghdr VAR_29;
            struct sockaddr VAR_30;
            struct iovec VAR_31;
            FUNC_8(&VAR_29, 0, sizeof(VAR_29));
            VAR_29.msg_name = &VAR_30;
            VAR_29.msg_namelen = sizeof(VAR_30);
            VAR_31.iov_base = VAR_28;
            VAR_31.iov_len = sizeof(VAR_28);
            VAR_29.msg_iov = &VAR_31;
            VAR_29.msg_iovlen = 1;
            ssize_t VAR_32;
            while ((VAR_32 = FUNC_16(VAR_18, &VAR_29, 0)) <= 0)
                ;
            if (VAR_15 >= 2)
                FUNC_7("recvmsg", VAR_28, VAR_32);
            size_t VAR_33 = 0;
            while (VAR_33 != VAR_32) {
                quicly_decoded_packet_t VAR_34;
                size_t VAR_35 = FUNC_11(&VAR_7, &VAR_34, VAR_28 + VAR_33, VAR_32 - VAR_33);
                if (VAR_35 == VAR_5)
                    break;
                FUNC_15(VAR_21, ((void*)0), &VAR_30, &VAR_34);
                VAR_33 += VAR_35;
            }
        }
        if (VAR_21 != ((void*)0)) {
            VAR_19 = FUNC_18(VAR_18, VAR_21);
            if (VAR_19 != 0) {
                FUNC_12(VAR_21);
                VAR_21 = ((void*)0);
                if (VAR_19 == VAR_4) {
                    return 0;
                } else {
                    FUNC_6(VAR_14, "quicly_send returned %d\n", VAR_19);
                    return 1;
                }
            }
        }
    }
}
