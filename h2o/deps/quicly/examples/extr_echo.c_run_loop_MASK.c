
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct msghdr {int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr_storage* msg_name; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int ssize_t ;
typedef int sa ;
typedef int quicly_datagram_t ;
typedef int quicly_conn_t ;
typedef scalar_t__ int64_t ;
typedef int fd_set ;
typedef int dgrams ;
typedef int conns ;
typedef int buf ;
struct TYPE_6__ {TYPE_1__* packet_allocator; TYPE_2__* now; } ;
struct TYPE_5__ {scalar_t__ (* cb ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int (* free_packet ) (TYPE_1__*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

 int FUNC_3 (int ) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int **,int ,int) ;
 int FUNC_8 (int ,int **,struct msghdr*,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int **,size_t*) ;
 int FUNC_12 (int,struct msghdr*,int ) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (int,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_17(int VAR_5, quicly_conn_t *VAR_6)
{
    quicly_conn_t *VAR_7[256] = {VAR_6};
    size_t VAR_8;
    int VAR_9 = VAR_6 != ((void*)0);

    while (1) {


        fd_set VAR_10;
        struct timeval VAR_11;
        do {
            int64_t VAR_12 = VAR_1, VAR_13 = VAR_2.now->cb(VAR_2.now);
            for (VAR_8 = 0; VAR_7[VAR_8] != ((void*)0); ++VAR_8) {
                int64_t VAR_14 = FUNC_10(VAR_7[VAR_8]);
                if (VAR_14 < VAR_12)
                    VAR_12 = VAR_14;
            }
            if (VAR_13 < VAR_12) {
                int64_t VAR_15 = VAR_12 - VAR_13;
                if (VAR_15 > 1000 * 1000)
                    VAR_15 = 1000 * 1000;
                VAR_11.tv_sec = VAR_15 / 1000;
                VAR_11.tv_usec = (VAR_15 % 1000) * 1000;
            } else {
                VAR_11.tv_sec = 1000;
                VAR_11.tv_usec = 0;
            }
            FUNC_2(&VAR_10);
            FUNC_1(VAR_5, &VAR_10);

            if (VAR_9)
                FUNC_1(0, &VAR_10);
        } while (FUNC_13(VAR_5 + 1, &VAR_10, ((void*)0), ((void*)0), &VAR_11) == -1 && VAR_3 == VAR_0);


        if (FUNC_0(VAR_5, &VAR_10)) {
            uint8_t VAR_16[4096];
            struct sockaddr_storage VAR_17;
            struct iovec VAR_18 = {.iov_base = VAR_16, .iov_len = sizeof(VAR_16)};
            struct msghdr VAR_19 = {.msg_name = &VAR_17, .msg_namelen = sizeof(VAR_17), .msg_iov = &VAR_18, .msg_iovlen = 1};
            ssize_t VAR_20;
            while ((VAR_20 = FUNC_12(VAR_5, &VAR_19, 0)) == -1 && VAR_3 == VAR_0)
                ;
            if (VAR_20 > 0)
                FUNC_8(VAR_6 != ((void*)0), VAR_7, &VAR_19, VAR_20);
        }


        if (FUNC_0(0, &VAR_10)) {
            FUNC_3(VAR_6 != ((void*)0));
            if (!FUNC_4(VAR_6))
                VAR_9 = 0;
        }


        for (VAR_8 = 0; VAR_7[VAR_8] != ((void*)0); ++VAR_8) {
            quicly_datagram_t *VAR_21[16];
            size_t VAR_22 = sizeof(VAR_21) / sizeof(VAR_21[0]);
            int VAR_23 = FUNC_11(VAR_7[VAR_8], VAR_21, &VAR_22);
            switch (VAR_23) {
            case 0: {
                size_t VAR_24;
                for (VAR_24 = 0; VAR_24 != VAR_22; ++VAR_24) {
                    FUNC_14(VAR_5, VAR_21[VAR_24]);
                    VAR_2.packet_allocator->free_packet(VAR_2.packet_allocator, VAR_21[VAR_24]);
                }
            } break;
            case 128:

                FUNC_9(VAR_7[VAR_8]);
                FUNC_7(VAR_7 + VAR_8, VAR_7 + VAR_8 + 1, sizeof(VAR_7) - sizeof(VAR_7[0]) * (VAR_8 + 1));
                --VAR_8;
                if (!FUNC_6())
                    return 0;
                break;
            default:
                FUNC_5(VAR_4, "quicly_send returned %d\n", VAR_23);
                return 1;
            }
        }
    }

    return 0;
}
