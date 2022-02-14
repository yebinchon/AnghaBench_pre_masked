
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef size_t u_short ;
struct fdescriptor {int dummy; } ;
struct datalink {int desc; struct datalink* next; } ;
struct TYPE_20__ {int desc; } ;
struct TYPE_21__ {TYPE_7__ server; } ;
struct TYPE_13__ {TYPE_8__ mp; } ;
struct TYPE_19__ {int desc; } ;
struct TYPE_22__ {scalar_t__ state; char* name; int load; struct bundle* arg; int func; } ;
struct TYPE_18__ {TYPE_9__ timer; } ;
struct TYPE_16__ {int timeout; } ;
struct TYPE_17__ {int ifqueue; TYPE_3__ choked; } ;
struct TYPE_15__ {int fd; } ;
struct TYPE_14__ {int all; } ;
struct bundle {scalar_t__ phase; TYPE_11__ ncp; struct datalink* links; TYPE_6__ radius; TYPE_5__ choked; TYPE_4__ cfg; TYPE_2__ dev; TYPE_1__ phys_type; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bundle* FUNC_1 (struct fdescriptor*) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 size_t FUNC_4 (TYPE_11__*,struct bundle*) ;
 size_t FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*) ;

__attribute__((used)) static int
FUNC_8(struct fdescriptor *VAR_8, fd_set *VAR_9, fd_set *VAR_10, fd_set *VAR_11, int *VAR_12)
{
  struct bundle *VAR_13 = FUNC_1(VAR_8);
  struct datalink *VAR_14;
  int VAR_15, VAR_16;
  u_short VAR_17;
  size_t VAR_18;

  VAR_15 = 0;


  for (VAR_16 = 0, VAR_14 = VAR_13->links; VAR_14; VAR_14 = VAR_14->next)
    VAR_16++;

  if (VAR_16) {
    VAR_18 = VAR_9 ? FUNC_4(&VAR_13->ncp, VAR_13) :
                 FUNC_5(&VAR_13->ncp);

    if (VAR_9 && (VAR_13->phase == VAR_1 ||
              VAR_13->phys_type.all & VAR_2)) {

      VAR_17 = VAR_16 > VAR_13->cfg.ifqueue ? VAR_16 : VAR_13->cfg.ifqueue;
      if (VAR_18 < VAR_17) {

        if (VAR_13->choked.timer.state == VAR_4)
          FUNC_7(&VAR_13->choked.timer);
        FUNC_0(VAR_13->dev.fd, VAR_9);
        if (*VAR_12 < VAR_13->dev.fd + 1)
          *VAR_12 = VAR_13->dev.fd + 1;
        FUNC_3(VAR_0, "%s: fdset(r) %d\n", VAR_6, VAR_13->dev.fd);
        VAR_15++;
      } else if (VAR_13->choked.timer.state == VAR_5) {
        VAR_13->choked.timer.func = VAR_7;
        VAR_13->choked.timer.name = "output choke";
        VAR_13->choked.timer.load = VAR_13->cfg.choked.timeout * VAR_3;
        VAR_13->choked.timer.arg = VAR_13;
        FUNC_6(&VAR_13->choked.timer);
      }
    }
  }


  VAR_15 += FUNC_2(&VAR_13->radius.desc, VAR_9, VAR_10, VAR_11, VAR_12);



  for (VAR_14 = VAR_13->links; VAR_14; VAR_14 = VAR_14->next)
    VAR_15 += FUNC_2(&VAR_14->desc, VAR_9, VAR_10, VAR_11, VAR_12);






  VAR_15 += FUNC_2(&VAR_13->ncp.mp.server.desc, VAR_9, VAR_10, VAR_11, VAR_12);

  return VAR_15;
}
