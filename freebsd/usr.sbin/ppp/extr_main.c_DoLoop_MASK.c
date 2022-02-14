
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct bundle {int desc; } ;
typedef int fd_set ;
struct TYPE_2__ {int desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bundle*) ;
 int FUNC_3 (struct bundle*,int) ;
 scalar_t__ FUNC_4 (struct bundle*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct bundle*,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int*) ;
 scalar_t__ FUNC_8 (int *,struct bundle*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int * FUNC_12 () ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(struct bundle *VAR_7)
{
  fd_set *VAR_8, *VAR_9, *VAR_10;
  int VAR_11, VAR_12, VAR_13;

  if ((VAR_8 = FUNC_12()) == ((void*)0)) {
    FUNC_11(VAR_2, "DoLoop: Cannot create fd_set\n");
    return;
  }

  if ((VAR_9 = FUNC_12()) == ((void*)0)) {
    FUNC_11(VAR_2, "DoLoop: Cannot create fd_set\n");
    FUNC_9(VAR_8);
    return;
  }

  if ((VAR_10 = FUNC_12()) == ((void*)0)) {
    FUNC_11(VAR_2, "DoLoop: Cannot create fd_set\n");
    FUNC_9(VAR_8);
    FUNC_9(VAR_9);
    return;
  }

  for (; !FUNC_4(VAR_7); FUNC_2(VAR_7)) {
    VAR_12 = 0;
    FUNC_16(VAR_8);
    FUNC_16(VAR_9);
    FUNC_16(VAR_10);


    FUNC_7(&VAR_7->desc, VAR_8, VAR_9, VAR_10, &VAR_12);


    FUNC_7(&VAR_6.desc, VAR_8, ((void*)0), ((void*)0), &VAR_12);

    FUNC_2(VAR_7);
    if (FUNC_4(VAR_7))

      break;
    if (FUNC_14())
      continue;

    VAR_11 = FUNC_13(VAR_12, VAR_8, VAR_9, VAR_10, ((void*)0));

    if (VAR_11 < 0 && VAR_5 != VAR_0) {
      FUNC_11(VAR_2, "DoLoop: select(): %s\n", FUNC_15(VAR_5));
      if (FUNC_10(VAR_4)) {
        struct timeval VAR_14;

        for (VAR_11 = 0; VAR_11 <= VAR_12; VAR_11++) {
          if (FUNC_1(VAR_11, VAR_8)) {
            FUNC_11(VAR_4, "Read set contains %d\n", VAR_11);
            FUNC_0(VAR_11, VAR_8);
            VAR_14.tv_sec = VAR_14.tv_usec = 0;
            if (FUNC_13(VAR_12, VAR_8, VAR_9, VAR_10, &VAR_14) != -1) {
              FUNC_11(VAR_4, "The culprit !\n");
              break;
            }
          }
          if (FUNC_1(VAR_11, VAR_9)) {
            FUNC_11(VAR_4, "Write set contains %d\n", VAR_11);
            FUNC_0(VAR_11, VAR_9);
            VAR_14.tv_sec = VAR_14.tv_usec = 0;
            if (FUNC_13(VAR_12, VAR_8, VAR_9, VAR_10, &VAR_14) != -1) {
              FUNC_11(VAR_4, "The culprit !\n");
              break;
            }
          }
          if (FUNC_1(VAR_11, VAR_10)) {
            FUNC_11(VAR_4, "Error set contains %d\n", VAR_11);
            FUNC_0(VAR_11, VAR_10);
            VAR_14.tv_sec = VAR_14.tv_usec = 0;
            if (FUNC_13(VAR_12, VAR_8, VAR_9, VAR_10, &VAR_14) != -1) {
              FUNC_11(VAR_4, "The culprit !\n");
              break;
            }
          }
        }
      }
      break;
    }

    FUNC_11(VAR_4, "Select returns %d\n", VAR_11);

    FUNC_14();

    if (VAR_11 <= 0)
      continue;

    for (VAR_11 = 0; VAR_11 <= VAR_12; VAR_11++)
      if (FUNC_1(VAR_11, VAR_10)) {
        FUNC_11(VAR_3, "Exception detected on descriptor %d\n", VAR_11);

        if (!FUNC_3(VAR_7, VAR_11)) {
          FUNC_11(VAR_2, "Exception cannot be handled !\n");
          break;
        }
      }

    if (VAR_11 <= VAR_12)
      break;

    VAR_13 = 1;

    if (FUNC_5(&VAR_6.desc, VAR_8)) {
      FUNC_6(&VAR_6.desc, VAR_7, VAR_8);
      VAR_13 = 0;
    }

    if (FUNC_5(&VAR_7->desc, VAR_8)) {
      FUNC_6(&VAR_7->desc, VAR_7, VAR_8);
      VAR_13 = 0;
    }

    if (FUNC_5(&VAR_7->desc, VAR_9))
      if (FUNC_8(&VAR_7->desc, VAR_7, VAR_9) <= 0 && VAR_13) {






        struct timeval VAR_15;

        VAR_15.tv_sec = 0;
        VAR_15.tv_usec = 100000;
        FUNC_13(0, ((void*)0), ((void*)0), ((void*)0), &VAR_15);
      }
  }

  FUNC_11(VAR_1, "DoLoop done.\n");
}
