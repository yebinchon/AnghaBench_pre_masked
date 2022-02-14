
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_27__ ;
typedef struct TYPE_30__ TYPE_24__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_11__ ;


typedef int uint8_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct sockaddr {int sa_family; } ;
struct msghdr {int msg_namelen; int msg_iovlen; struct iovec* msg_iov; struct sockaddr* msg_name; } ;
struct iovec {int* iov_base; int iov_len; } ;
typedef size_t ssize_t ;
typedef int socklen_t ;
typedef int sa ;
struct TYPE_38__ {scalar_t__ len; int base; } ;
struct TYPE_32__ {scalar_t__ node_id; scalar_t__ thread_id; } ;
struct TYPE_35__ {TYPE_8__ encrypted; TYPE_2__ plaintext; } ;
struct TYPE_37__ {scalar_t__ len; } ;
struct TYPE_34__ {TYPE_5__ dest; TYPE_7__ src; } ;
struct TYPE_33__ {int * base; } ;
struct TYPE_29__ {int len; int base; } ;
struct TYPE_36__ {scalar_t__ version; TYPE_4__ cid; TYPE_3__ octets; TYPE_1__ token; } ;
typedef TYPE_6__ quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
typedef int quicly_conn_t ;
typedef int quicly_address_token_plaintext_t ;
typedef int on ;
typedef int new_server_cid ;
typedef int mess ;
typedef scalar_t__ int64_t ;
typedef int fd_set ;
typedef int buf ;
struct TYPE_39__ {scalar_t__ (* cb ) (TYPE_9__*) ;} ;
struct TYPE_31__ {int enc; int dec; } ;
struct TYPE_30__ {int master_id; } ;
struct TYPE_28__ {TYPE_9__* now; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_27__ VAR_11 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int ) ;
 int ** VAR_12 ;
 TYPE_11__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (char*,int*,size_t) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int **,int **,size_t) ;
 int FUNC_10 (struct msghdr*,int ,int) ;
 TYPE_24__ VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int **,TYPE_11__*,int *,struct sockaddr*,TYPE_6__*,int *,TYPE_24__*,int *) ;
 size_t FUNC_14 (TYPE_11__*,TYPE_6__*,int*,size_t) ;
 scalar_t__ FUNC_15 (int ,int *,int ,int ,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int *,struct sockaddr*,TYPE_6__*) ;
 int FUNC_19 (int *,int *,struct sockaddr*,TYPE_6__*) ;
 int * FUNC_20 (TYPE_11__*,int ,struct sockaddr*,TYPE_7__,int *,int ,TYPE_8__,int ,int ) ;
 int * FUNC_21 (TYPE_11__*,struct sockaddr*,int *,int ) ;
 int * FUNC_22 (TYPE_11__*,struct sockaddr*,TYPE_7__,int *,TYPE_8__) ;
 int ** FUNC_23 (int **,int) ;
 size_t FUNC_24 (int,struct msghdr*,int ) ;
 int FUNC_25 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_26 (int,int *) ;
 scalar_t__ FUNC_27 (int,int *) ;
 scalar_t__ FUNC_28 (int,int ,int ,int*,int) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ,int ) ;
 scalar_t__ FUNC_31 (TYPE_9__*) ;
 scalar_t__ FUNC_32 (TYPE_9__*) ;
 scalar_t__ FUNC_33 (struct sockaddr*,TYPE_7__,TYPE_8__,int *) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_34(struct sockaddr *VAR_20, socklen_t VAR_21)
{
    int VAR_22;

    FUNC_29(VAR_6, VAR_18);
    FUNC_29(VAR_5, VAR_18);

    if ((VAR_22 = FUNC_30(VAR_20->sa_family, VAR_8, VAR_2)) == -1) {
        FUNC_11("socket(2) failed");
        return 1;
    }
    int VAR_23 = 1;
    if (FUNC_28(VAR_22, VAR_9, VAR_10, &VAR_23, sizeof(VAR_23)) != 0) {
        FUNC_11("setsockopt(SO_REUSEADDR) failed");
        return 1;
    }
    if (FUNC_6(VAR_22, VAR_20, VAR_21) != 0) {
        FUNC_11("bind(2) failed");
        return 1;
    }

    while (1) {
        fd_set VAR_24;
        struct timeval *VAR_25, VAR_26;
        do {
            int64_t VAR_27 = VAR_1;
            size_t VAR_28;
            for (VAR_28 = 0; VAR_28 != VAR_17; ++VAR_28) {
                int64_t VAR_29 = FUNC_17(VAR_12[VAR_28]);
                if (VAR_29 < VAR_27)
                    VAR_27 = VAR_29;
            }
            if (VAR_27 != VAR_1) {
                int64_t VAR_30 = VAR_27 - VAR_13.now->cb(VAR_13.now);
                if (VAR_30 > 0) {
                    VAR_26.tv_sec = VAR_30 / 1000;
                    VAR_26.tv_usec = (VAR_30 % 1000) * 1000;
                } else {
                    VAR_26.tv_sec = 0;
                    VAR_26.tv_usec = 0;
                }
                VAR_25 = &VAR_26;
            } else {
                VAR_25 = ((void*)0);
            }
            FUNC_2(&VAR_24);
            FUNC_1(VAR_22, &VAR_24);
        } while (FUNC_25(VAR_22 + 1, &VAR_24, ((void*)0), ((void*)0), VAR_25) == -1 && VAR_15 == VAR_0);
        if (FUNC_0(VAR_22, &VAR_24)) {
            uint8_t VAR_31[4096];
            struct msghdr VAR_32;
            struct sockaddr VAR_33;
            struct iovec VAR_34;
            FUNC_10(&VAR_32, 0, sizeof(VAR_32));
            VAR_32.msg_name = &VAR_33;
            VAR_32.msg_namelen = sizeof(VAR_33);
            VAR_34.iov_base = VAR_31;
            VAR_34.iov_len = sizeof(VAR_31);
            VAR_32.msg_iov = &VAR_34;
            VAR_32.msg_iovlen = 1;
            ssize_t VAR_35;
            while ((VAR_35 = FUNC_24(VAR_22, &VAR_32, 0)) <= 0)
                ;
            if (VAR_19 >= 2)
                FUNC_7("recvmsg", VAR_31, VAR_35);
            size_t VAR_36 = 0;
            while (VAR_36 != VAR_35) {
                quicly_decoded_packet_t VAR_37;
                size_t VAR_38 = FUNC_14(&VAR_13, &VAR_37, VAR_31 + VAR_36, VAR_35 - VAR_36);
                if (VAR_38 == VAR_7)
                    break;
                if (FUNC_4(VAR_37.octets.base[0])) {
                    if (VAR_37.version != VAR_4) {
                        quicly_datagram_t *VAR_39 =
                            FUNC_22(&VAR_13, &VAR_33, VAR_37.cid.src, ((void*)0), VAR_37.cid.dest.encrypted);
                        FUNC_5(VAR_39 != ((void*)0));
                        if (FUNC_26(VAR_22, VAR_39) == -1)
                            FUNC_11("sendmsg failed");
                        break;
                    }

                    if (VAR_37.cid.dest.encrypted.len > VAR_3 || VAR_37.cid.src.len > VAR_3)
                        break;
                }

                quicly_conn_t *VAR_40 = ((void*)0);
                size_t VAR_41;
                for (VAR_41 = 0; VAR_41 != VAR_17; ++VAR_41) {
                    if (FUNC_18(VAR_12[VAR_41], ((void*)0), &VAR_33, &VAR_37)) {
                        VAR_40 = VAR_12[VAR_41];
                        break;
                    }
                }
                if (VAR_40 != ((void*)0)) {

                    FUNC_19(VAR_40, ((void*)0), &VAR_33, &VAR_37);
                } else if (FUNC_3(VAR_37.octets.base[0])) {

                    quicly_address_token_plaintext_t *VAR_42 = ((void*)0), VAR_43;
                    if (VAR_37.token.len != 0 &&
                        FUNC_15(VAR_11.dec, &VAR_43, VAR_37.token.base, VAR_37.token.len, 0) ==
                            0 &&
                        FUNC_33(&VAR_33, VAR_37.cid.src, VAR_37.cid.dest.encrypted, &VAR_43))
                        VAR_42 = &VAR_43;
                    if (VAR_14 && VAR_42 == ((void*)0) && VAR_37.cid.dest.encrypted.len >= 8) {


                        uint8_t VAR_44[8];
                        FUNC_8(VAR_44, VAR_37.cid.dest.encrypted.base, sizeof(VAR_44));
                        VAR_44[0] ^= 0xff;
                        quicly_datagram_t *VAR_45 = FUNC_20(&VAR_13, VAR_11.enc, &VAR_33, VAR_37.cid.src, ((void*)0),
                                                                  FUNC_12(VAR_44, sizeof(VAR_44)),
                                                                  VAR_37.cid.dest.encrypted, FUNC_12(((void*)0), 0),
                                                                  FUNC_12(((void*)0), 0));
                        FUNC_5(VAR_45 != ((void*)0));
                        if (FUNC_26(VAR_22, VAR_45) == -1)
                            FUNC_11("sendmsg failed");
                        break;
                    } else {

                        int VAR_46 = FUNC_13(&VAR_40, &VAR_13, ((void*)0), &VAR_33, &VAR_37, VAR_42, &VAR_16, ((void*)0));
                        if (VAR_46 == 0) {
                            FUNC_5(VAR_40 != ((void*)0));
                            ++VAR_16.master_id;
                            VAR_12 = FUNC_23(VAR_12, sizeof(*VAR_12) * (VAR_17 + 1));
                            FUNC_5(VAR_12 != ((void*)0));
                            VAR_12[VAR_17++] = VAR_40;
                        } else {
                            FUNC_5(VAR_40 == ((void*)0));
                        }
                    }
                } else if (!FUNC_4(VAR_37.octets.base[0])) {



                    if (VAR_37.cid.dest.plaintext.node_id == 0 && VAR_37.cid.dest.plaintext.thread_id == 0) {
                        quicly_datagram_t *VAR_47 = FUNC_21(&VAR_13, &VAR_33, ((void*)0), VAR_37.cid.dest.encrypted.base);
                        if (FUNC_26(VAR_22, VAR_47) == -1)
                            FUNC_11("sendmsg failed");
                    }
                }
                VAR_36 += VAR_38;
            }
        }
        {
            size_t VAR_48;
            for (VAR_48 = 0; VAR_48 != VAR_17; ++VAR_48) {
                if (FUNC_17(VAR_12[VAR_48]) <= VAR_13.now->cb(VAR_13.now)) {
                    if (FUNC_27(VAR_22, VAR_12[VAR_48]) != 0) {
                        FUNC_16(VAR_12[VAR_48]);
                        FUNC_9(VAR_12 + VAR_48, VAR_12 + VAR_48 + 1, (VAR_17 - VAR_48 - 1) * sizeof(*VAR_12));
                        --VAR_48;
                        --VAR_17;
                    }
                }
            }
        }
    }
}
