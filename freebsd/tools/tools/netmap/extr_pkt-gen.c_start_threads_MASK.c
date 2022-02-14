
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct targ {int fd; int used; int me; int affinity; int thread; int frags; struct nm_desc* nmd; struct glob_arg* g; int seed; } ;
struct TYPE_2__ {int nr_flags; int nr_ringid; } ;
struct nm_desc {int fd; TYPE_1__ req; struct nm_desc* self; } ;
struct glob_arg {int nthreads; scalar_t__ dev_type; scalar_t__ td_type; int ifname; int main_fd; int affinity; int cpus; int td_body; int wait_link; int frags; struct nm_desc* nmd; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct targ*,int) ;
 struct targ* FUNC_2 (int,int) ;
 int VAR_7 ;
 int FUNC_3 (struct targ*) ;
 int FUNC_4 (int ,int*,int) ;
 struct nm_desc* FUNC_5 (int,int *,int,struct nm_desc*) ;
 int FUNC_6 (int *,int *,int ,struct targ*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct targ* VAR_8 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct glob_arg *VAR_9) {
 int VAR_10;

 VAR_8 = FUNC_2(VAR_9->nthreads, sizeof(*VAR_8));
 struct targ *VAR_11;




 for (VAR_10 = 0; VAR_10 < VAR_9->nthreads; VAR_10++) {
  uint64_t VAR_12 = FUNC_9(0) | (FUNC_9(0) << 32);
  VAR_11 = &VAR_8[VAR_10];

  FUNC_1(VAR_11, sizeof(*VAR_11));
  VAR_11->fd = -1;
  VAR_11->g = VAR_9;
  FUNC_4(VAR_11->seed, &VAR_12, sizeof(VAR_11->seed));

  if (VAR_9->dev_type == VAR_0) {
   struct nm_desc VAR_13 = *VAR_9->nmd;
   uint64_t VAR_14 = 0;
   VAR_13.self = &VAR_13;

   if (VAR_10 > 0) {



    if (VAR_9->nthreads > 1) {
     VAR_13.req.nr_flags =
      VAR_9->nmd->req.nr_flags & ~VAR_4;
     VAR_13.req.nr_flags |= VAR_5;
     VAR_13.req.nr_ringid = VAR_10;
    }

    if (VAR_9->td_type == VAR_6)
     VAR_14 |= VAR_1;


    VAR_11->nmd = FUNC_5(VAR_11->g->ifname, ((void*)0), VAR_14 |
      VAR_2 | VAR_3, &VAR_13);
    if (VAR_11->nmd == ((void*)0)) {
     FUNC_0("Unable to open %s: %s",
       VAR_11->g->ifname, FUNC_8(VAR_7));
     continue;
    }
   } else {
    VAR_11->nmd = VAR_9->nmd;
   }
   VAR_11->fd = VAR_11->nmd->fd;
   VAR_11->frags = VAR_9->frags;
  } else {
   VAR_8[VAR_10].fd = VAR_9->main_fd;
  }
  VAR_11->used = 1;
  VAR_11->me = VAR_10;
  if (VAR_9->affinity >= 0) {
   VAR_11->affinity = (VAR_9->affinity + VAR_10) % VAR_9->cpus;
  } else {
   VAR_11->affinity = -1;
  }

  FUNC_3(VAR_11);
 }

 FUNC_0("Wait %d secs for phy reset", VAR_9->wait_link);
 FUNC_7(VAR_9->wait_link);
 FUNC_0("Ready...");

 for (VAR_10 = 0; VAR_10 < VAR_9->nthreads; VAR_10++) {
  VAR_11 = &VAR_8[VAR_10];
  if (FUNC_6(&VAR_11->thread, ((void*)0), VAR_9->td_body, VAR_11) == -1) {
   FUNC_0("Unable to create thread %d: %s", VAR_10, FUNC_8(VAR_7));
   VAR_11->used = 0;
  }
 }
}
