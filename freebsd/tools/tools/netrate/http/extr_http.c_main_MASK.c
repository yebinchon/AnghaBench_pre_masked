
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_9__ {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct state {char* path; int run_done; TYPE_2__* hwd; int start_barrier; TYPE_5__ sin; } ;
typedef scalar_t__ pid_t ;
struct TYPE_8__ {scalar_t__ hwd_pid; scalar_t__ hwd_errorcount; scalar_t__ hwd_count; int hwd_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct state* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int VAR_10 ;
 int FUNC_2 (int,char*) ;
 int VAR_11 ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,char*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (struct state*,size_t,int ) ;
 struct state* FUNC_14 (int *,size_t,int,int ,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (int *,int *,int) ;
 scalar_t__ FUNC_17 (int *,int *,int (*) (TYPE_2__*),TYPE_2__*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 size_t FUNC_19 (int,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 struct state* VAR_17 ;
 int VAR_18 ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 (scalar_t__,int *,int ) ;

int
FUNC_25(int VAR_19, char *VAR_20[])
{
 int VAR_21, VAR_22, VAR_23;
 struct state *VAR_24;
 uintmax_t VAR_25;
 size_t VAR_26;
 pid_t VAR_27;

 VAR_14 = VAR_2;
 VAR_13 = VAR_1;
 while ((VAR_21 = FUNC_6(VAR_19, VAR_20, "n:s:t")) != -1) {
  switch (VAR_21) {
  case 'n':
   VAR_14 = FUNC_0(VAR_15);
   break;

  case 's':
   VAR_13 = FUNC_0(VAR_15);
   break;

  case 't':
   VAR_18 = 1;
   break;

  default:
   FUNC_23();
  }
 }
 VAR_19 -= VAR_16;
 VAR_20 += VAR_16;

 if (VAR_19 != 3)
  FUNC_23();

 if (VAR_14 > VAR_6)
  FUNC_3(-1, "%d exceeds max threads %d", VAR_14,
      VAR_6);

 VAR_26 = FUNC_19(sizeof(struct state), FUNC_7());
 VAR_24 = FUNC_14(((void*)0), VAR_26, VAR_7 | VAR_8, VAR_4, -1, 0);
 if (VAR_24 == VAR_5)
  FUNC_2(-1, "mmap");
 if (FUNC_13(VAR_24, VAR_26, VAR_3) < 0)
  FUNC_2(-1, "minherit");
 VAR_17 = VAR_24;

 FUNC_1(&VAR_17->sin, sizeof(VAR_17->sin));
 VAR_17->sin.sin_len = sizeof(VAR_17->sin);
 VAR_17->sin.sin_family = VAR_0;
 VAR_17->sin.sin_addr.s_addr = FUNC_11(VAR_20[0]);
 VAR_17->sin.sin_port = FUNC_8(FUNC_0(VAR_20[1]));
 VAR_17->path = VAR_20[2];




 if (FUNC_9(&VAR_17->sin, VAR_17->path, 0) < 0)
  FUNC_4(-1);

 if (VAR_18) {
  if (FUNC_16(&VAR_17->start_barrier, ((void*)0),
      VAR_14) != 0)
   FUNC_2(-1, "pthread_barrier_init");
 }

 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  VAR_17->hwd[VAR_23].hwd_count = 0;
  if (VAR_18) {
   if (FUNC_17(&VAR_17->hwd[VAR_23].hwd_thread, ((void*)0),
       FUNC_10, &VAR_17->hwd[VAR_23]) != 0)
    FUNC_2(-1, "pthread_create");
  } else {
   VAR_10 = VAR_23;
   VAR_27 = FUNC_5();
   if (VAR_27 < 0) {
    VAR_22 = VAR_11;
    FUNC_12();
    VAR_11 = VAR_22;
    FUNC_2(-1, "fork");
   }
   if (VAR_27 == 0) {
    FUNC_10(&VAR_17->hwd[VAR_23]);
    FUNC_15("Doh\n");
    FUNC_4(0);
   }
   VAR_17->hwd[VAR_23].hwd_pid = VAR_27;
  }
 }
 if (!VAR_18) {
  FUNC_20(VAR_9, VAR_12);
  FUNC_22(2);
  FUNC_21();
 }
 FUNC_22(VAR_13);
 VAR_17->run_done = 1;
 if (!VAR_18)
  FUNC_22(2);
 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  if (VAR_18) {
   if (FUNC_18(VAR_17->hwd[VAR_23].hwd_thread, ((void*)0))
       != 0)
    FUNC_2(-1, "pthread_join");
  } else {
   VAR_27 = FUNC_24(VAR_17->hwd[VAR_23].hwd_pid, ((void*)0), 0);
   if (VAR_27 == VAR_17->hwd[VAR_23].hwd_pid)
    VAR_17->hwd[VAR_23].hwd_pid = 0;
  }
 }
 if (!VAR_18)
  FUNC_12();
 VAR_25 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++)
  VAR_25 += VAR_17->hwd[VAR_23].hwd_count;
 FUNC_15("%ju transfers/second\n", VAR_25 / VAR_13);
 VAR_25 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++)
  VAR_25 += VAR_17->hwd[VAR_23].hwd_errorcount;
 FUNC_15("%ju errors/second\n", VAR_25 / VAR_13);
 return (0);
}
