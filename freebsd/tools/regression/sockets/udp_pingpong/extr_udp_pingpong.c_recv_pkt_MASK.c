
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct test_pkt {size_t pnum; TYPE_3__* tss; int data; } ;
struct test_ctx {scalar_t__ use_recvmsg; int nrecvd; TYPE_1__* test_pkts; int * fds; int name; TYPE_2__* pfds; } ;
typedef int recv_buf ;
struct TYPE_6__ {int recvd; } ;
struct TYPE_5__ {scalar_t__ revents; } ;
struct TYPE_4__ {scalar_t__ lost; int tss; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct test_ctx*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,int ,char const*,int ) ;
 int FUNC_2 (int,char*,int ,char const*,int ,...) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (struct test_ctx*,int,char const*,struct test_pkt*,size_t,int *) ;
 int FUNC_7 (struct test_ctx*,int,char const*,struct test_pkt*,size_t,int *) ;

__attribute__((used)) static int
FUNC_8(struct test_ctx *VAR_3, int VAR_4, const char *VAR_5, int VAR_6)
{
    int VAR_7;
    struct test_pkt VAR_8;
    size_t VAR_9;

    VAR_7 = FUNC_5(&VAR_3->pfds[VAR_4], 1, VAR_6);
    if (VAR_7 < 0) {
        FUNC_1(1, "%s: %s: poll(%d)", VAR_3->name, VAR_5, VAR_3->fds[VAR_4]);
    }
    if (VAR_7 == 0) {
        return (-1);
    }
    if(VAR_3->pfds[VAR_4].revents != VAR_2) {
        FUNC_2(1, "%s: %s: poll(%d): unexpected result", VAR_3->name, VAR_5,
          VAR_3->fds[VAR_4]);
    }
    VAR_9 = sizeof(VAR_8);
    if (VAR_3->use_recvmsg == 0) {
        FUNC_6(VAR_3, VAR_4, VAR_5, &VAR_8, VAR_9,
          &VAR_8.tss[VAR_4].recvd);
    } else {
        FUNC_7(VAR_3, VAR_4, VAR_5, &VAR_8, VAR_9,
          &VAR_8.tss[VAR_4].recvd);
    }
    if (VAR_8.pnum < 0 || VAR_8.pnum >= VAR_0 ||
      FUNC_3(VAR_8.data, FUNC_0(VAR_3, VAR_8.pnum), VAR_1) != 0) {
        FUNC_2(1, "%s: %s: recv(%d): corrupted data, packet %d", VAR_3->name,
          VAR_5, VAR_3->fds[VAR_4], VAR_8.pnum);
    }
    VAR_3->nrecvd += 1;
    FUNC_4(VAR_3->test_pkts[VAR_8.pnum].tss, VAR_8.tss,
      sizeof(VAR_8.tss));
    VAR_3->test_pkts[VAR_8.pnum].lost = 0;
    return (VAR_8.pnum);
}
