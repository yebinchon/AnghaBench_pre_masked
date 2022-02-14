
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;
struct flock {int l_start; int l_len; int l_type; int l_whence; } ;
typedef int outbuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,struct flock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,char*,int,int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,struct itimerval*,int *) ;
 int FUNC_15 (char*,int,char*,int,int,...) ;
 int FUNC_16 (int ) ;
 int VAR_11 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char const*,int *,int ) ;
 int FUNC_19 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_20 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_21(int VAR_13, int VAR_14, const char **VAR_15)
{





 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20[20], VAR_21;
 char VAR_22[128];
 char VAR_23[128];
 int VAR_24[128];
 char VAR_25[512];
 struct flock VAR_26;
 struct itimerval VAR_27;
 int VAR_28;

 VAR_19 = 0;
 if (VAR_14 >= 2)
  VAR_19 = FUNC_18(VAR_15[1], ((void*)0), 0);

 FUNC_10("14 - soak test: ");
 FUNC_4(VAR_11);

 for (VAR_16 = 0; VAR_16 < 128; VAR_16++)
  VAR_24[VAR_16] = VAR_5;

 for (VAR_16 = 0; VAR_16 < 20; VAR_16++) {

  VAR_21 = FUNC_5();
  if (VAR_21 < 0)
   FUNC_1(1, "fork");
  if (VAR_21) {



   VAR_20[VAR_16] = VAR_21;
   continue;
  }




  VAR_18 = VAR_19 + VAR_16;
  FUNC_16(FUNC_6());

  for (VAR_17 = 0; VAR_17 < 50; VAR_17++) {
   int VAR_29, VAR_30, VAR_31;
   int VAR_32, VAR_33;

   do {
    VAR_29 = FUNC_12() & 127;
    VAR_30 = FUNC_12() & 127;
   } while (VAR_30 <= VAR_29);

   VAR_32 = FUNC_12() & 1;
   VAR_33 = FUNC_12() & 1;

   VAR_31 = VAR_30 - VAR_29;
   VAR_26.l_start = VAR_29;
   VAR_26.l_len = VAR_31;
   VAR_26.l_whence = VAR_8;
   if (VAR_32)
    VAR_26.l_type = VAR_33 ? VAR_6 : VAR_3;
   else
    VAR_26.l_type = VAR_5;

   VAR_27.it_interval.tv_sec = 0;
   VAR_27.it_interval.tv_usec = 0;
   VAR_27.it_value.tv_sec = 0;
   VAR_27.it_value.tv_usec = 3000;
   FUNC_14(VAR_7, &VAR_27, ((void*)0));

   if (FUNC_3(VAR_13, VAR_4, &VAR_26) < 0) {
    if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {
     if (VAR_12) {
      FUNC_15(VAR_25, sizeof(VAR_25),
          "%d[%d]: %s [%d .. %d] %s\n",
          VAR_18, VAR_17,
          VAR_32 ? (VAR_33 ? "write lock"
       : "read lock")
          : "unlock", VAR_29, VAR_30,
          VAR_10 == VAR_1
          ? "deadlock"
          : "interrupted");
      FUNC_20(1, VAR_25,
          FUNC_17(VAR_25));
     }
     continue;
    } else {
     FUNC_8("fcntl");
    }
   }

   VAR_27.it_interval.tv_sec = 0;
   VAR_27.it_interval.tv_usec = 0;
   VAR_27.it_value.tv_sec = 0;
   VAR_27.it_value.tv_usec = 0;
   FUNC_14(VAR_7, &VAR_27, ((void*)0));

   if (VAR_12) {
    FUNC_15(VAR_25, sizeof(VAR_25),
        "%d[%d]: %s [%d .. %d] succeeded\n",
        VAR_18, VAR_17,
        VAR_32 ? (VAR_33 ? "write lock" : "read lock")
        : "unlock", VAR_29, VAR_30);
    FUNC_20(1, VAR_25, FUNC_17(VAR_25));
   }

   if (VAR_32) {
    if (VAR_33) {





     for (VAR_16 = VAR_29; VAR_16 < VAR_30; VAR_16++)
      VAR_24[VAR_16] = VAR_6;
     FUNC_7(&VAR_22[VAR_29], VAR_18, VAR_31);
     if (FUNC_11(VAR_13, &VAR_22[VAR_29], VAR_31,
      VAR_29) != VAR_31) {
      FUNC_10("%d: short write\n", VAR_18);
      FUNC_2(1);
     }
    } else {







     for (VAR_16 = VAR_29; VAR_16 < VAR_30; VAR_16++)
      VAR_24[VAR_16] = VAR_3;
     if (FUNC_9(VAR_13, &VAR_22[VAR_29], VAR_31,
      VAR_29) != VAR_31) {
      FUNC_10("%d: short read\n", VAR_18);
      FUNC_2(1);
     }
    }
   } else {
    for (VAR_16 = VAR_29; VAR_16 < VAR_30; VAR_16++)
     VAR_24[VAR_16] = VAR_5;
   }

   FUNC_19(1000);






   if (FUNC_9(VAR_13, VAR_23, sizeof(VAR_23), 0) != sizeof(VAR_23)) {
    FUNC_10("%d: short read\n", VAR_18);
    FUNC_2(1);
   }

   for (VAR_16 = 0; VAR_16 < 128; VAR_16++) {
    if (VAR_24[VAR_16] != VAR_5 && VAR_22[VAR_16] != VAR_23[VAR_16]) {
     FUNC_15(VAR_25, sizeof(VAR_25),
         "%d: byte %d expected %d, "
         "got %d\n", VAR_18, VAR_16, VAR_22[VAR_16], VAR_23[VAR_16]);
     FUNC_20(1, VAR_25, FUNC_17(VAR_25));
     FUNC_2(1);
    }
   }
  }
  if (VAR_12)
   FUNC_10("%d[%d]: done\n", VAR_18, VAR_17);

  FUNC_2(0);
 }

 VAR_28 = 0;
 for (VAR_16 = 0; VAR_16 < 20; VAR_16++) {
  VAR_28 += FUNC_13(VAR_20[VAR_16]);
 }
 if (VAR_28)
  FUNC_0(VAR_28 != 0);

 VAR_9;
}
