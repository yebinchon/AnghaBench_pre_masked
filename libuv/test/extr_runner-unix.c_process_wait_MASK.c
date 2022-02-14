
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_7__ {int pid; } ;
typedef TYPE_1__ process_info_t ;
typedef int fd_set ;
struct TYPE_8__ {int n; int* pipe; TYPE_1__* vec; } ;
typedef TYPE_2__ dowait_args ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (struct timeval*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int (*) (TYPE_2__*),TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;

int FUNC_16(process_info_t* VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  int VAR_7;
  int VAR_8;
  process_info_t* VAR_9;
  dowait_args VAR_10;
  pthread_t VAR_11;
  pthread_attr_t VAR_12;
  unsigned int VAR_13;
  struct timeval VAR_14;
  struct timeval VAR_15;
  fd_set VAR_16;

  VAR_10.vec = VAR_3;
  VAR_10.n = VAR_4;
  VAR_10.pipe[0] = -1;
  VAR_10.pipe[1] = -1;


  if (VAR_5 == -1) {
    FUNC_5(&VAR_10);
    return 0;
  }







  VAR_7 = FUNC_9((int*)&(VAR_10.pipe));
  if (VAR_7) {
    FUNC_8("pipe()");
    return -1;
  }

  if (FUNC_11(&VAR_12))
    FUNC_2();




  if (FUNC_12(&VAR_12, 256 * 1024))

    FUNC_2();

  VAR_7 = FUNC_13(&VAR_11, &VAR_12, FUNC_5, &VAR_10);

  if (FUNC_10(&VAR_12))
    FUNC_2();

  if (VAR_7) {
    FUNC_8("pthread_create()");
    VAR_8 = -1;
    goto terminate;
  }

  if (FUNC_6(&VAR_14, ((void*)0)))
    FUNC_2();

  VAR_15 = VAR_14;
  for (;;) {

    FUNC_3(VAR_15.tv_sec > VAR_14.tv_sec ||
           (VAR_15.tv_sec == VAR_14.tv_sec && VAR_15.tv_usec >= VAR_14.tv_usec));

    VAR_13 =
        (VAR_15.tv_sec - VAR_14.tv_sec) * 1000 +
        (VAR_15.tv_usec / 1000) -
        (VAR_14.tv_usec / 1000);

    VAR_7 = 0;
    if (VAR_13 >= (unsigned) VAR_5)
      break;

    VAR_15.tv_sec = (VAR_5 - VAR_13) / 1000;
    VAR_15.tv_usec = (VAR_5 - VAR_13) % 1000 * 1000;

    FUNC_1(&VAR_16);
    FUNC_0(VAR_10.pipe[0], &VAR_16);

    VAR_7 = FUNC_15(VAR_10.pipe[0] + 1, &VAR_16, ((void*)0), ((void*)0), &VAR_15);
    if (!(VAR_7 == -1 && VAR_2 == VAR_0))
      break;

    if (FUNC_6(&VAR_15, ((void*)0)))
      FUNC_2();
  }

  if (VAR_7 == -1) {
    FUNC_8("select()");
    VAR_8 = -1;

  } else if (VAR_7) {

    VAR_8 = 0;

  } else {

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
      VAR_9 = (process_info_t*)(VAR_3 + VAR_6 * sizeof(process_info_t));
      FUNC_7(VAR_9->pid, VAR_1);
    }
    VAR_8 = -2;
  }

  if (FUNC_14(VAR_11, ((void*)0)))
    FUNC_2();

terminate:
  FUNC_4(VAR_10.pipe[0]);
  FUNC_4(VAR_10.pipe[1]);
  return VAR_8;
}
