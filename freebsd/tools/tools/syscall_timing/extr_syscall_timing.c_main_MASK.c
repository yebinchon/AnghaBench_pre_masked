
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct test {char* t_name; int t_flags; int (* t_func ) (int,int ,char const*) ;int t_int; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,char**,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*) ;
 long long FUNC_13 (char*,char**,int) ;
 int FUNC_14 (int,int ,char const*) ;
 int FUNC_15 (int,int ,char const*) ;
 struct test* VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (TYPE_1__*,int *,TYPE_1__*) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,char*) ;

int
FUNC_20(int VAR_14, char *VAR_15[])
{
 struct timespec VAR_16;
 const struct test *VAR_17;
 const char *VAR_18;
 char *VAR_19, *VAR_20;
 long long VAR_21;
 char *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 uintmax_t VAR_29, VAR_30, VAR_31;

 VAR_6 = 1;
 VAR_29 = 0;
 VAR_31 = 10;
 VAR_18 = ((void*)0);
 VAR_20 = ((void*)0);
 while ((VAR_23 = FUNC_6(VAR_14, VAR_15, "i:l:p:s:")) != -1) {
  switch (VAR_23) {
  case 'i':
   VAR_21 = FUNC_13(VAR_8, &VAR_22, 10);
   if (*VAR_22 != 0 || VAR_21 < 1)
    FUNC_18();
   VAR_29 = VAR_21;
   break;

  case 'l':
   VAR_21 = FUNC_13(VAR_8, &VAR_22, 10);
   if (*VAR_22 != 0 || VAR_21 < 1 || VAR_21 > 100000)
    FUNC_18();
   VAR_31 = VAR_21;
   break;

  case 'p':
   VAR_18 = VAR_8;
   break;

  case 's':
   VAR_21 = FUNC_13(VAR_8, &VAR_22, 10);
   if (*VAR_22 != 0 || VAR_21 < 1 || VAR_21 > 60*60)
    FUNC_18();
   VAR_6 = VAR_21;
   break;

  case '?':
  default:
   FUNC_18();
  }
 }
 VAR_14 -= VAR_9;
 VAR_15 += VAR_9;

 if (VAR_29 < 1 && VAR_6 < 1)
  FUNC_18();
 if (VAR_29 < 1)
  VAR_29 = VAR_5;
 if (VAR_31 < 1)
  VAR_31 = 1;

 if (VAR_14 < 1)
  FUNC_18();





 for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++) {
  VAR_17 = ((void*)0);
  for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
   if (FUNC_11(VAR_15[VAR_27], VAR_10[VAR_26].t_name) == 0)
    VAR_17 = &VAR_10[VAR_26];
  }
  if (VAR_17 == ((void*)0))
   FUNC_18();
  if ((VAR_17->t_flags & VAR_2) && (VAR_18 == ((void*)0))) {
   VAR_19 = FUNC_12("/tmp/syscall_timing.XXXXXXXX");
   if (VAR_19 == ((void*)0))
    FUNC_4(1, "strdup");
   VAR_19 = FUNC_7(VAR_19);
   if (VAR_19 == ((void*)0))
    FUNC_4(1, "mkdtemp");
   VAR_28 = FUNC_0(&VAR_20, "%s/testfile", VAR_19);
   if (VAR_28 <= 0)
    FUNC_4(1, "asprintf");
  }
 }

 VAR_25 = FUNC_2(VAR_0, &VAR_16);
 FUNC_1(VAR_25 == 0);
 FUNC_9("Clock resolution: %ju.%09ju\n", (uintmax_t)VAR_16.tv_sec,
     (uintmax_t)VAR_16.tv_nsec);
 FUNC_9("test\tloop\ttime\titerations\tperiteration\n");

 for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++) {
  uintmax_t VAR_32, VAR_33;

  VAR_17 = ((void*)0);
  for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
   if (FUNC_11(VAR_15[VAR_27], VAR_10[VAR_26].t_name) == 0)
    VAR_17 = &VAR_10[VAR_26];
  }

  if (VAR_20 != ((void*)0)) {
   VAR_24 = FUNC_8(VAR_20, VAR_4 | VAR_3, 0700);
   if (VAR_24 < 0)
    FUNC_4(1, "cannot open %s", VAR_20);
   VAR_25 = FUNC_5(VAR_24, 1000000);
   if (VAR_25 != 0)
    FUNC_4(1, "ftruncate");
   VAR_25 = FUNC_3(VAR_24);
   if (VAR_25 != 0)
    FUNC_4(1, "close");
   VAR_18 = VAR_20;
  }




  VAR_17->t_func(VAR_29, VAR_17->t_int, VAR_18);
  VAR_32 = 0;
  for (VAR_30 = 0; VAR_30 < VAR_31; VAR_30++) {
   VAR_32 = VAR_17->t_func(VAR_29, VAR_17->t_int,
       VAR_18);
   FUNC_16(&VAR_12, &VAR_13, &VAR_12);
   FUNC_9("%s\t%ju\t", VAR_17->t_name, VAR_30);
   FUNC_9("%ju.%09ju\t%ju\t", (uintmax_t)VAR_12.tv_sec,
       (uintmax_t)VAR_12.tv_nsec, VAR_32);







   VAR_33 = VAR_12.tv_sec * 1000000000;
   VAR_33 += VAR_12.tv_nsec;
   VAR_33 /= VAR_32;
   FUNC_9("0.%09ju\n", (uintmax_t)VAR_33);
  }
 }

 if (VAR_20 != ((void*)0)) {
  VAR_25 = FUNC_17(VAR_20);
  if (VAR_25 != 0 && VAR_7 != VAR_1)
   FUNC_19("cannot unlink %s", VAR_20);
  VAR_25 = FUNC_10(VAR_19);
  if (VAR_25 != 0)
   FUNC_19("cannot rmdir %s", VAR_19);
 }

 return (0);
}
