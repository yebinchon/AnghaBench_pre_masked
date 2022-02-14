
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct timeval {int tv_sec; int tv_usec; } ;
struct pidfh {int dummy; } ;
typedef int pid_t ;
typedef int fd_set ;
typedef int curfreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_12 ;
 int FUNC_4 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_16 ;
 int FUNC_7 (int,char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_10 (int*) ;
 int VAR_19 ;
 int FUNC_11 () ;
 size_t FUNC_12 (int,int*,int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int,char**,char*) ;
 int VAR_20 ;
 int VAR_21 ;
 char** VAR_22 ;
 char* VAR_23 ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*,int*,int) ;
 struct pidfh* FUNC_17 (char const*,int,int*) ;
 int FUNC_18 (struct pidfh*) ;
 int FUNC_19 (struct pidfh*) ;
 int VAR_24 ;
 int FUNC_20 (char*,...) ;
 scalar_t__ FUNC_21 (int*,int**,int**,int,int) ;
 scalar_t__ FUNC_22 (int*) ;
 int FUNC_23 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int ,int,int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_27 (char*,int ,size_t*) ;
 int FUNC_28 () ;
 int VAR_25 ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (char*,...) ;

int
FUNC_31(int VAR_26, char * VAR_27[])
{
 struct timeval VAR_28;
 fd_set VAR_29;
 int VAR_30;
 struct pidfh *VAR_31 = ((void*)0);
 const char *VAR_32 = ((void*)0);
 int VAR_33, VAR_34, VAR_35, *VAR_36, VAR_37, VAR_38, *VAR_39, VAR_40, VAR_41;
 int VAR_42 = -1, VAR_43 = -1;
 int VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 uint64_t VAR_51;
 size_t VAR_52;


 VAR_46 = VAR_48 = VAR_7;
 VAR_47 = VAR_6;
 VAR_15 = VAR_0;
 VAR_14 = VAR_1;
 VAR_24 = VAR_2;
 VAR_51 = 0;
 VAR_25 = 0;


 if (FUNC_13() != 0)
  FUNC_8(1, "must be root to run");

 while ((VAR_44 = FUNC_14(VAR_26, VAR_27, "a:b:i:m:M:n:p:P:r:s:v")) != -1)
  switch (VAR_44) {
  case 'a':
   FUNC_16(VAR_23, &VAR_46, VAR_44);
   break;
  case 'b':
   FUNC_16(VAR_23, &VAR_47, VAR_44);
   break;
  case 's':
   FUNC_15(VAR_23, VAR_44);
   break;
  case 'i':
   VAR_14 = FUNC_4(VAR_23);
   if (VAR_14 < 0 || VAR_14 > 100) {
    FUNC_30("%d is not a valid percent",
        VAR_14);
    FUNC_28();
   }
   break;
  case 'm':
   VAR_42 = FUNC_4(VAR_23);
   if (VAR_42 < 0) {
    FUNC_30("%d is not a valid CPU frequency",
        VAR_42);
    FUNC_28();
   }
   break;
  case 'M':
   VAR_43 = FUNC_4(VAR_23);
   if (VAR_43 < 0) {
    FUNC_30("%d is not a valid CPU frequency",
        VAR_43);
    FUNC_28();
   }
   break;
  case 'n':
   FUNC_16(VAR_23, &VAR_48, VAR_44);
   break;
  case 'p':
   VAR_24 = FUNC_4(VAR_23);
   if (VAR_24 < 5) {
    FUNC_30("poll interval is in units of ms");
    FUNC_28();
   }
   break;
  case 'P':
   VAR_32 = VAR_23;
   break;
  case 'r':
   VAR_15 = FUNC_4(VAR_23);
   if (VAR_15 <= 0 || VAR_15 > 100) {
    FUNC_30("%d is not a valid percent",
        VAR_15);
    FUNC_28();
   }
   break;
  case 'v':
   VAR_25 = 1;
   break;
  default:
   FUNC_28();
  }

 VAR_45 = VAR_48;


 VAR_24 *= 1000;


 VAR_52 = 2;
 if (FUNC_27("kern.cp_times", VAR_13, &VAR_52))
  FUNC_7(1, "lookup kern.cp_times");
 VAR_52 = 4;
 if (FUNC_27("dev.cpu.0.freq", VAR_19, &VAR_52))
  FUNC_7(VAR_5, "no cpufreq(4) support -- aborting");
 VAR_52 = 4;
 if (FUNC_27("dev.cpu.0.freq_levels", VAR_21, &VAR_52))
  FUNC_7(1, "lookup freq_levels");


 if (FUNC_22(((void*)0)))
  FUNC_7(1, "read_usage_times");
 if (FUNC_21(&VAR_40, &VAR_36, &VAR_39, VAR_42, VAR_43))
  FUNC_7(1, "error reading supported CPU frequencies");
 if (VAR_40 == 0)
  FUNC_8(1, "no CPU frequencies in user-specified range");


 if (!VAR_25) {
  pid_t VAR_53;

  VAR_31 = FUNC_17(VAR_32, 0600, &VAR_53);
  if (VAR_31 == ((void*)0)) {
   if (VAR_17 == VAR_3) {
    FUNC_8(1, "powerd already running, pid: %d",
        VAR_53);
   }
   FUNC_29("cannot open pid file");
  }
  if (FUNC_5(0, 0) != 0) {
   FUNC_29("cannot enter daemon mode, exiting");
   FUNC_18(VAR_31);
   FUNC_9(VAR_4);

  }
  FUNC_19(VAR_31);
 }


 FUNC_2();




 FUNC_25(VAR_10, VAR_20);
 FUNC_25(VAR_11, VAR_20);

 VAR_33 = VAR_35 = VAR_34 = FUNC_11();
 VAR_37 = FUNC_12(VAR_34, VAR_36, VAR_40);
 if (VAR_33 < 1)
  VAR_33 = 1;





 FUNC_3();
 if (VAR_12 > 128)
  FUNC_8(1, "invalid AC line status %d", VAR_12);
 if ((VAR_12 == 130 &&
     (VAR_46 == VAR_6 || VAR_46 == VAR_7)) ||
     (VAR_12 == 129 &&
     (VAR_47 == VAR_6 || VAR_47 == VAR_7)) ||
     (VAR_12 == 128 &&
     (VAR_48 == VAR_6 || VAR_48 == VAR_7))) {

  VAR_52 = sizeof(VAR_34);
  if (FUNC_26(VAR_19, 4, &VAR_34, &VAR_52, ((void*)0), 0) != 0) {
   if (VAR_25)
    FUNC_29("error reading current CPU frequency");
  }
  if (VAR_34 < VAR_36[VAR_40 - 1]) {
   if (VAR_25) {
    FUNC_20("CPU frequency is below user-defined "
        "minimum; changing frequency to %d "
        "MHz\n", VAR_36[VAR_40 - 1]);
   }
   if (FUNC_24(VAR_36[VAR_40 - 1]) != 0) {
    FUNC_29("error setting CPU freq %d",
        VAR_36[VAR_40 - 1]);
   }
  } else if (VAR_34 > VAR_36[0]) {
   if (VAR_25) {
    FUNC_20("CPU frequency is above user-defined "
        "maximum; changing frequency to %d "
        "MHz\n", VAR_36[0]);
   }
   if (FUNC_24(VAR_36[0]) != 0) {
    FUNC_29("error setting CPU freq %d",
        VAR_36[0]);
   }
  }
 }

 VAR_49 = 0;

 for (;;) {
  FUNC_1(&VAR_29);
  if (VAR_16 >= 0) {
   FUNC_0(VAR_16, &VAR_29);
   VAR_30 = VAR_16 + 1;
  } else {
   VAR_30 = 0;
  }
  if (VAR_45 == VAR_7 || VAR_49 < 120)
   VAR_50 = VAR_24;
  else if (VAR_49 < 360)
   VAR_50 = VAR_24 * 2;
  else
   VAR_50 = VAR_24 * 4;
  VAR_28.tv_sec = VAR_50 / 1000000;
  VAR_28.tv_usec = VAR_50 % 1000000;
  FUNC_23(VAR_30, &VAR_29, ((void*)0), &VAR_29, &VAR_28);


  if (VAR_18) {
   if (VAR_25 && VAR_51 != 0)
    FUNC_20("total joules used: %u.%03u\n",
        (u_int)(VAR_51 / 1000),
        (int)VAR_51 % 1000);
   break;
  }


  FUNC_3();
  switch (VAR_12) {
  case 130:
   VAR_45 = VAR_46;
   break;
  case 129:
   VAR_45 = VAR_47;
   break;
  case 128:
   VAR_45 = VAR_48;
   break;
  default:
   FUNC_8(1, "invalid AC line status %d", VAR_12);
  }


  if (VAR_49 % 32 == 0) {
   if ((VAR_34 = FUNC_11()) == 0)
    continue;
   VAR_37 = FUNC_12(VAR_34, VAR_36, VAR_40);
  }
  VAR_49++;
  if (VAR_25) {

   if (VAR_39[VAR_37] != -1)
    VAR_51 +=
        (VAR_39[VAR_37] * (VAR_24 / 1000)) / 1000;
  }


  if (VAR_45 == VAR_9) {
   VAR_33 = VAR_36[VAR_40 - 1];
   if (VAR_34 != VAR_33) {
    if (VAR_25) {
     FUNC_20("now operating on %s power; "
         "changing frequency to %d MHz\n",
         VAR_22[VAR_12], VAR_33);
    }
    VAR_49 = 0;
    if (FUNC_24(VAR_33) != 0) {
     FUNC_29("error setting CPU freq %d",
         VAR_33);
     continue;
    }
   }
   continue;
  }


  if (VAR_45 == VAR_8) {
   VAR_33 = VAR_36[0];
   if (VAR_34 != VAR_33) {
    if (VAR_25) {
     FUNC_20("now operating on %s power; "
         "changing frequency to %d MHz\n",
         VAR_22[VAR_12], VAR_33);
    }
    VAR_49 = 0;
    if (FUNC_24(VAR_33) != 0) {
     FUNC_29("error setting CPU freq %d",
         VAR_33);
     continue;
    }
   }
   continue;
  }


  if (FUNC_22(&VAR_41)) {
   if (VAR_25)
    FUNC_29("read_usage_times() failed");
   continue;
  }

  if (VAR_45 == VAR_6) {
   if (VAR_41 > VAR_15) {
    if (VAR_41 > 95 || VAR_41 > VAR_15 * 2)
     VAR_33 *= 2;
    else
     VAR_33 = VAR_33 * VAR_41 / VAR_15;
    if (VAR_33 > VAR_36[0])
     VAR_33 = VAR_36[0];
   } else if (VAR_41 < VAR_14 &&
       VAR_34 * VAR_41 < VAR_36[FUNC_12(
       VAR_33 * 7 / 8, VAR_36, VAR_40)] *
       VAR_15) {
    VAR_33 = VAR_33 * 7 / 8;
    if (VAR_33 < VAR_36[VAR_40 - 1])
     VAR_33 = VAR_36[VAR_40 - 1];
   }
  } else {
   if (VAR_41 > VAR_15 / 2) {
    if (VAR_41 > 95 || VAR_41 > VAR_15)
     VAR_33 *= 4;
    else
     VAR_33 = VAR_33 * VAR_41 * 2 / VAR_15;
    if (VAR_33 > VAR_36[0] * 2)
     VAR_33 = VAR_36[0] * 2;
   } else if (VAR_41 < VAR_14 / 2 &&
       VAR_34 * VAR_41 < VAR_36[FUNC_12(
       VAR_33 * 31 / 32, VAR_36, VAR_40)] *
       VAR_15 / 2) {
    VAR_33 = VAR_33 * 31 / 32;
    if (VAR_33 < VAR_36[VAR_40 - 1])
     VAR_33 = VAR_36[VAR_40 - 1];
   }
  }
  if (VAR_25) {
      FUNC_20("load %3d%%, current freq %4d MHz (%2d), wanted freq %4d MHz\n",
   VAR_41, VAR_34, VAR_37, VAR_33);
  }
  VAR_38 = FUNC_12(VAR_33, VAR_36, VAR_40);
  if (VAR_37 != VAR_38) {
   if (VAR_25) {
    FUNC_20("changing clock"
        " speed from %d MHz to %d MHz\n",
        VAR_36[VAR_37], VAR_36[VAR_38]);
   }
   VAR_49 = 0;
   if (FUNC_24(VAR_36[VAR_38]))
    FUNC_29("error setting CPU frequency %d",
        VAR_36[VAR_38]);
  }
 }
 if (FUNC_24(VAR_35))
  FUNC_29("error setting CPU frequency %d", VAR_35);
 FUNC_10(VAR_36);
 FUNC_10(VAR_39);
 FUNC_6();
 if (!VAR_25)
  FUNC_18(VAR_31);

 FUNC_9(0);
}
