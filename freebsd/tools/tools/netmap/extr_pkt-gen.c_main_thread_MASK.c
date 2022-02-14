
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int dummy; } ;
struct my_ctrs {scalar_t__ pkts; scalar_t__ bytes; scalar_t__ events; scalar_t__ min_space; int t; } ;
struct glob_arg {int nthreads; int options; int* win; size_t win_idx; double framing; scalar_t__ dev_type; scalar_t__ td_type; int report_interval; } ;
typedef int b4 ;
struct TYPE_3__ {scalar_t__ pkts; scalar_t__ bytes; scalar_t__ events; int min_space; } ;
struct TYPE_4__ {scalar_t__ used; scalar_t__ completed; int toc; int tic; TYPE_1__ ctr; int fd; int * nmd; int thread; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 double FUNC_7 (double) ;
 int FUNC_8 (char*,char*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_9 (struct timeval*) ;
 int FUNC_10 (struct timeval*) ;
 int FUNC_11 (struct timeval*,struct timeval*,struct timeval*) ;
 struct timeval FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,struct timespec*) ;
 struct timespec FUNC_14 (struct timeval*) ;
 int FUNC_15 (struct glob_arg*,struct my_ctrs*,double,char*) ;
 int FUNC_16 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_17(struct glob_arg *VAR_7)
{
 int VAR_8;

 struct my_ctrs VAR_9, VAR_10;
 double VAR_11;
 struct timeval VAR_12, VAR_13;

 VAR_9.pkts = VAR_9.bytes = VAR_9.events = 0;
 FUNC_2(&VAR_9.t, ((void*)0));
 for (;;) {
  char VAR_14[40], VAR_15[40], VAR_16[40], VAR_17[100];
  uint64_t VAR_18, VAR_19;
  struct my_ctrs VAR_20;
  double VAR_21;
  int VAR_22 = 0;

  VAR_19 = FUNC_16(&VAR_9.t, &VAR_10.t,
    VAR_7->report_interval);

  VAR_10.pkts = VAR_10.bytes = VAR_10.events = 0;
  VAR_10.min_space = 0;
  if (VAR_19 < 10000)
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_7->nthreads; VAR_8++) {
   VAR_10.pkts += VAR_6[VAR_8].ctr.pkts;
   VAR_10.bytes += VAR_6[VAR_8].ctr.bytes;
   VAR_10.events += VAR_6[VAR_8].ctr.events;
   VAR_10.min_space += VAR_6[VAR_8].ctr.min_space;
   VAR_6[VAR_8].ctr.min_space = 99999;
   if (VAR_6[VAR_8].used == 0)
    VAR_22++;
  }
  VAR_20.pkts = VAR_10.pkts - VAR_9.pkts;
  VAR_20.bytes = VAR_10.bytes - VAR_9.bytes;
  VAR_20.events = VAR_10.events - VAR_9.events;
  VAR_18 = (VAR_20.pkts*1000000 + VAR_19/2) / VAR_19;
  VAR_21 = (VAR_20.events > 0) ? (VAR_20.pkts / (double) VAR_20.events) : 0;

  if (!(VAR_7->options & VAR_1)) {
   FUNC_8(VAR_17, "");
  } else {

   double VAR_23 = 0.0, VAR_24 = 0.0;
   int VAR_25 = 0;

   VAR_7->win[VAR_7->win_idx] = VAR_18;
   VAR_7->win_idx = (VAR_7->win_idx + 1) % VAR_2;

   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    VAR_23 += VAR_7->win[VAR_8];
    if (VAR_7->win[VAR_8]) {
     VAR_25 ++;
    }
   }
   VAR_23 /= VAR_25;

   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    if (VAR_7->win[VAR_8] == 0) {
     continue;
    }
    VAR_24 += (VAR_7->win[VAR_8] - VAR_23) * (VAR_7->win[VAR_8] - VAR_23);
   }
   VAR_24 /= VAR_25;
   VAR_24 = FUNC_7(VAR_24);

   FUNC_6(VAR_17, sizeof(VAR_17), "[avg/std %s/%s pps]",
     FUNC_4(VAR_14, VAR_23, VAR_5), FUNC_4(VAR_15, VAR_24, VAR_5));
  }

  FUNC_0("%spps %s(%spkts %sbps in %llu usec) %.2f avg_batch %d min_space",
   FUNC_4(VAR_14, VAR_18, VAR_5), VAR_17,
   FUNC_4(VAR_15, (double)VAR_20.pkts, VAR_5),
   FUNC_4(VAR_16, 1000000*((double)VAR_20.bytes*8+(double)VAR_20.pkts*VAR_7->framing)/VAR_19, VAR_5),
   (unsigned long long)VAR_19,
   VAR_21, (int)VAR_10.min_space);
  VAR_9 = VAR_10;

  if (VAR_22 == VAR_7->nthreads)
   break;
 }

 FUNC_9(&VAR_12);
 FUNC_9(&VAR_13);
 VAR_10.pkts = VAR_10.bytes = VAR_10.events = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->nthreads; VAR_8++) {
  struct timespec VAR_26, VAR_27;




  if (VAR_6[VAR_8].used)
   FUNC_5(VAR_6[VAR_8].thread, ((void*)0));
  if (VAR_7->dev_type == VAR_0) {
   FUNC_3(VAR_6[VAR_8].nmd);
   VAR_6[VAR_8].nmd = ((void*)0);
  } else {
   FUNC_1(VAR_6[VAR_8].fd);
  }

  if (VAR_6[VAR_8].completed == 0)
   FUNC_0("ouch, thread %d exited with error", VAR_8);





  VAR_10.pkts += VAR_6[VAR_8].ctr.pkts;
  VAR_10.bytes += VAR_6[VAR_8].ctr.bytes;
  VAR_10.events += VAR_6[VAR_8].ctr.events;




  VAR_26 = FUNC_14(&VAR_12);
  VAR_27 = FUNC_14(&VAR_13);
  if (!FUNC_10(&VAR_12) || FUNC_13(&VAR_6[VAR_8].tic, &VAR_26))
   VAR_12 = FUNC_12(&VAR_6[VAR_8].tic);
  if (!FUNC_10(&VAR_13) || FUNC_13(&VAR_6[VAR_8].toc, &VAR_27))
   VAR_13 = FUNC_12(&VAR_6[VAR_8].toc);
 }


 FUNC_11(&VAR_13, &VAR_12, &VAR_13);
 VAR_11 = VAR_13.tv_sec + 1e-6* VAR_13.tv_usec;
 if (VAR_7->td_type == VAR_4)
  FUNC_15(VAR_7, &VAR_10, VAR_11, "Sent");
 else if (VAR_7->td_type == VAR_3)
  FUNC_15(VAR_7, &VAR_10, VAR_11, "Received");
}
