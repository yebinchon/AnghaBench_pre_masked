
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; } ;
struct sbuf {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (double*,scalar_t__) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (double*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 scalar_t__ FUNC_6 (struct sbuf*) ;
 struct sbuf* FUNC_7 () ;
 int FUNC_8 (struct sbuf*,char*,int,...) ;
 scalar_t__ FUNC_9 (char*,int,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (char const*,...) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void
FUNC_12(time_t *VAR_3, int VAR_4)
{
 double VAR_5[3];
 time_t VAR_6;
 struct timespec VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13[256];
 struct sbuf *VAR_14;

 VAR_14 = FUNC_7();



 if (FUNC_9(VAR_13, sizeof(VAR_13),
     VAR_1 ? "%l:%M%p" : "%k:%M", FUNC_2(VAR_3)) != 0)
  FUNC_10("{:time-of-day/%s} ", VAR_13);



 if (FUNC_0(VAR_0, &VAR_7) != -1) {
  VAR_6 = VAR_7.tv_sec;
  if (VAR_6 > 60)
   VAR_6 += 30;
  VAR_8 = VAR_6 / 86400;
  VAR_6 %= 86400;
  VAR_9 = VAR_6 / 3600;
  VAR_6 %= 3600;
  VAR_11 = VAR_6 / 60;
  VAR_12 = VAR_6 % 60;
  FUNC_10(" up");
  FUNC_10("{e:uptime/%lu}", (unsigned long) VAR_7.tv_sec);
  FUNC_10("{e:days/%d}{e:hours/%d}{e:minutes/%d}{e:seconds/%d}", VAR_8, VAR_9, VAR_11, VAR_12);

  if (VAR_8 > 0)
   FUNC_8(VAR_14, " %d day%s,",
    VAR_8, VAR_8 > 1 ? "s" : "");
  if (VAR_9 > 0 && VAR_11 > 0)
   FUNC_8(VAR_14, " %2d:%02d,", VAR_9, VAR_11);
  else if (VAR_9 > 0)
   FUNC_8(VAR_14, " %d hr%s,",
    VAR_9, VAR_9 > 1 ? "s" : "");
  else if (VAR_11 > 0)
   FUNC_8(VAR_14, " %d min%s,",
    VAR_11, VAR_11 > 1 ? "s" : "");
  else
   FUNC_8(VAR_14, " %d sec%s,",
    VAR_12, VAR_12 > 1 ? "s" : "");
  if (FUNC_6(VAR_14) != 0)
   FUNC_11(1, "Could not generate output");
  FUNC_10("{:uptime-human/%s}", FUNC_4(VAR_14));
  FUNC_5(VAR_14);
 }


 FUNC_10(" {:users/%d} {Np:user,users}", VAR_4);




 if (FUNC_1(VAR_5, FUNC_3(VAR_5)) == -1)
  FUNC_10(", no load average information available\n");
 else {
         static const char *VAR_15[] = {
      " {:load-average-1/%.2f}",
      " {:load-average-5/%.2f}",
      " {:load-average-15/%.2f}",
  };
  FUNC_10(", load averages:");
  for (VAR_10 = 0; VAR_10 < (int)(FUNC_3(VAR_5)); VAR_10++) {
   if (VAR_2 && VAR_10 > 0)
    FUNC_10(",");
   FUNC_10(VAR_15[VAR_10], VAR_5[VAR_10]);
  }
  FUNC_10("\n");
 }
}
