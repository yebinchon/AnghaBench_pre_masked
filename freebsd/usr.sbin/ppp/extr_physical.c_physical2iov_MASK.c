
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {scalar_t__ SampleOctets; } ;
struct TYPE_17__ {scalar_t__ SampleOctets; } ;
struct TYPE_19__ {TYPE_7__ out; TYPE_6__ in; int Timer; } ;
struct TYPE_20__ {TYPE_8__ total; } ;
struct TYPE_14__ {int StoppedTimer; int OpenTimer; int FsmTimer; } ;
struct TYPE_15__ {TYPE_3__ fsm; } ;
struct TYPE_12__ {int StoppedTimer; int OpenTimer; int FsmTimer; } ;
struct TYPE_13__ {TYPE_1__ fsm; } ;
struct TYPE_11__ {TYPE_9__ stats; TYPE_4__ ccp; TYPE_2__ lcp; } ;
struct physical {int fd; TYPE_10__ link; scalar_t__ session_owner; TYPE_5__* dl; struct device* handler; int hdlc; } ;
struct iovec {int iov_len; int * iov_base; } ;
struct device {int (* device2iov ) (struct device*,struct iovec*,int*,int,int*,int*) ;scalar_t__ type; } ;
typedef scalar_t__ pid_t ;
struct TYPE_16__ {int bundle; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct physical*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct physical*) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *,struct device*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct device*,struct iovec*,int*,int,int*,int*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct physical *VAR_5, struct iovec *VAR_6, int *VAR_7, int VAR_8,
             int *VAR_9, int *VAR_10)
{
  struct device *VAR_11;
  int VAR_12;

  VAR_11 = ((void*)0);
  if (VAR_5) {
    FUNC_5(&VAR_5->hdlc);
    FUNC_7(VAR_5);
    FUNC_13(&VAR_5->link.lcp.fsm.FsmTimer);
    FUNC_13(&VAR_5->link.ccp.fsm.FsmTimer);
    FUNC_13(&VAR_5->link.lcp.fsm.OpenTimer);
    FUNC_13(&VAR_5->link.ccp.fsm.OpenTimer);
    FUNC_13(&VAR_5->link.lcp.fsm.StoppedTimer);
    FUNC_13(&VAR_5->link.ccp.fsm.StoppedTimer);
    if (VAR_5->handler) {
      VAR_11 = VAR_5->handler;
      VAR_5->handler = (struct device *)(long)VAR_5->handler->type;
    }

    if (FUNC_1(VAR_5->dl->bundle, VAR_3) ||
        FUNC_12(VAR_5->fd) == FUNC_3())
      VAR_5->session_owner = FUNC_4();
    else
      VAR_5->session_owner = (pid_t)-1;
    FUNC_13(&VAR_5->link.stats.total.Timer);
  }

  if (*VAR_7 + 2 >= VAR_8) {
    FUNC_6(VAR_2, "physical2iov: No room for physical + throughput"
               " + device !\n");
    if (VAR_5)
      FUNC_2(VAR_5);
    return -1;
  }

  VAR_6[*VAR_7].iov_base = (void *)VAR_5;
  VAR_6[*VAR_7].iov_len = sizeof *VAR_5;
  (*VAR_7)++;

  VAR_6[*VAR_7].iov_base = VAR_5 ? (void *)VAR_5->link.stats.total.in.SampleOctets : ((void*)0);
  VAR_6[*VAR_7].iov_len = VAR_4 * sizeof(long long);
  (*VAR_7)++;
  VAR_6[*VAR_7].iov_base = VAR_5 ? (void *)VAR_5->link.stats.total.out.SampleOctets : ((void*)0);
  VAR_6[*VAR_7].iov_len = VAR_4 * sizeof(long long);
  (*VAR_7)++;

  VAR_12 = FUNC_10();
  if (VAR_5) {
    if (VAR_11 && VAR_11->device2iov)
      (*VAR_11->device2iov)(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    else {
      if ((VAR_6[*VAR_7].iov_base = FUNC_8(VAR_12)) == ((void*)0)) {
 FUNC_6(VAR_1, "physical2iov: Out of memory (%d bytes)\n", VAR_12);
 FUNC_0(VAR_0);
      }
      if (VAR_11)
        FUNC_9(VAR_6[*VAR_7].iov_base, VAR_11, sizeof *VAR_11);
      VAR_6[*VAR_7].iov_len = VAR_12;
      (*VAR_7)++;
    }
  } else {
    VAR_6[*VAR_7].iov_base = ((void*)0);
    VAR_6[*VAR_7].iov_len = VAR_12;
    (*VAR_7)++;
  }

  return VAR_5 ? VAR_5->fd : 0;
}
