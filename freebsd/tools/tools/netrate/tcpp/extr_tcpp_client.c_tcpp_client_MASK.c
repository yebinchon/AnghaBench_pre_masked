
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct tcpp_header {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int intmax_t ;
typedef int cp_time_start ;
typedef int cp_time_finish ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__* FUNC_8 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int ,long**,size_t*,int *,int ) ;
 int FUNC_11 (int) ;
 int VAR_14 ;
 int FUNC_12 (struct timespec*,struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_13 (scalar_t__,int*,int ) ;
 int FUNC_14 (char*) ;

void
FUNC_15(void)
{
 struct timespec VAR_15, VAR_16;
 long VAR_17[VAR_1], VAR_18[VAR_1];
 long VAR_19;
 size_t VAR_20;
 pid_t VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (VAR_9 < sizeof(struct tcpp_header))
  FUNC_4(-1, "Can't use -b less than %zu\n",
     sizeof(struct tcpp_header));
 VAR_11 = VAR_9 - sizeof(struct tcpp_header);

 VAR_13 = FUNC_8(sizeof(*VAR_13) * VAR_12);
 if (VAR_13 == ((void*)0))
  FUNC_3(-1, "malloc pid_list");
 FUNC_1(VAR_13, sizeof(*VAR_13) * VAR_12);




 VAR_20 = sizeof(VAR_17);
 if (FUNC_10(VAR_8, &VAR_17, &VAR_20, ((void*)0), 0)
     < 0)
  FUNC_3(-1, "sysctlbyname: %s", VAR_8);
 if (FUNC_2(VAR_0, &VAR_15) < 0)
  FUNC_3(-1, "clock_gettime");
 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  VAR_21 = FUNC_6();
  if (VAR_21 < 0) {
   FUNC_14("fork");
   for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
    if (VAR_13[VAR_22] != 0)
     (void)FUNC_7(VAR_13[VAR_22], VAR_7);
   }
   FUNC_5(-1);
  }
  if (VAR_21 == 0) {
   FUNC_11(VAR_22);
   FUNC_5(0);
  }
  VAR_13[VAR_22] = VAR_21;
 }




 VAR_23 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  if (VAR_13[VAR_22] != 0) {
   while (FUNC_13(VAR_13[VAR_22], &VAR_24, 0) != VAR_13[VAR_22]);
   if (FUNC_0(VAR_24) != 0)
    VAR_23 = 1;
  }
 }
 if (FUNC_2(VAR_0, &VAR_16) < 0)
  FUNC_3(-1, "clock_gettime");
 VAR_20 = sizeof(VAR_18);
 if (FUNC_10(VAR_8, &VAR_18, &VAR_20, ((void*)0), 0)
     < 0)
  FUNC_3(-1, "sysctlbyname: %s", VAR_8);
 FUNC_12(&VAR_16, &VAR_15, &VAR_16);

 if (VAR_23)
  FUNC_4(-1, "Too many errors");

 if (VAR_10)
  FUNC_9("bytes,seconds,conn/s,Gb/s,user%%,nice%%,sys%%,"
      "intr%%,idle%%\n");




 FUNC_9("%jd,", VAR_9 * VAR_14 * VAR_12);
 FUNC_9("%jd.%09jd,", (intmax_t)VAR_16.tv_sec,
     (intmax_t)(VAR_16.tv_nsec));




 FUNC_9("%f,", (double)(VAR_12 * VAR_14)/
     (VAR_16.tv_sec + VAR_16.tv_nsec * 1e-9));
 FUNC_9("%f,", (double)(VAR_9 * VAR_14 * VAR_12 * 8) /
     (VAR_16.tv_sec + VAR_16.tv_nsec * 1e-9) * 1e-9);




 VAR_19 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_18[VAR_22] -= VAR_17[VAR_22];
  VAR_19 += VAR_18[VAR_22];
 }
 FUNC_9("%0.02f,", (float)(100 * VAR_18[VAR_6]) / VAR_19);
 FUNC_9("%0.02f,", (float)(100 * VAR_18[VAR_4]) / VAR_19);
 FUNC_9("%0.02f,", (float)(100 * VAR_18[VAR_5]) / VAR_19);
 FUNC_9("%0.02f,", (float)(100 * VAR_18[VAR_3]) / VAR_19);
 FUNC_9("%0.02f", (float)(100 * VAR_18[VAR_2]) / VAR_19);
 FUNC_9("\n");
}
