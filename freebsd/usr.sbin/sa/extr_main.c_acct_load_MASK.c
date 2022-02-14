
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdinfo {int ci_calls; char* ci_comm; int ci_utime; int ci_stime; int ci_uid; int ci_io; int ci_mem; int ci_etime; int ci_flags; } ;
struct acctv3 {char* ac_comm; int ac_flagx; int ac_utime; int ac_stime; int ac_uid; int ac_io; int ac_mem; int ac_etime; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct cmdinfo*) ;
 int FUNC_4 (char*,int,int,int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_5 (int *,struct acctv3*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct cmdinfo*) ;
 int FUNC_7 (char*,char const*,...) ;

__attribute__((used)) static FILE *
FUNC_8(const char *VAR_7, int VAR_8)
{
 struct acctv3 VAR_9;
 struct cmdinfo VAR_10;
 ssize_t VAR_11;
 FILE *VAR_12;
 int VAR_13;




 VAR_12 = FUNC_0(VAR_7, VAR_8 ? "r+" : "r");
 if (VAR_12 == ((void*)0)) {
  FUNC_7("open %s %s", VAR_7, VAR_8 ? "for read/write" : "read-only");
  return (((void*)0));
 }





 while (1) {

  VAR_11 = FUNC_5(VAR_12, &VAR_9);
  if (VAR_11 != 1) {
   if (VAR_11 == VAR_2)
    FUNC_7("error reading %s", VAR_7);
   break;
  }


  VAR_10.ci_calls = 1;
  for (VAR_13 = 0; VAR_13 < (int)sizeof VAR_9.ac_comm && VAR_9.ac_comm[VAR_13] != '\0';
      VAR_13++) {
   char VAR_14 = VAR_9.ac_comm[VAR_13];

   if (!FUNC_1(VAR_14) || FUNC_2(VAR_14)) {
    VAR_10.ci_comm[VAR_13] = '?';
    VAR_10.ci_flags |= VAR_1;
   } else
    VAR_10.ci_comm[VAR_13] = VAR_14;
  }
  if (VAR_9.ac_flagx & VAR_0)
   VAR_10.ci_comm[VAR_13++] = '*';
  VAR_10.ci_comm[VAR_13++] = '\0';
  VAR_10.ci_etime = VAR_9.ac_etime;
  VAR_10.ci_utime = VAR_9.ac_utime;
  VAR_10.ci_stime = VAR_9.ac_stime;
  VAR_10.ci_uid = VAR_9.ac_uid;
  VAR_10.ci_mem = VAR_9.ac_mem;
  VAR_10.ci_io = VAR_9.ac_io;

  if (!VAR_6) {

   if (VAR_5 || (!VAR_3 && !VAR_4))
    FUNC_3(&VAR_10);
   if (VAR_5 || (VAR_3 && !VAR_4))
    FUNC_6(&VAR_10);
  } else if (!VAR_4)
   FUNC_4("%6u %12.3lf cpu %12.0lfk mem %12.0lf io %s\n",
       VAR_10.ci_uid,
       (VAR_10.ci_utime + VAR_10.ci_stime) / 1000000,
       VAR_10.ci_mem, VAR_10.ci_io,
       VAR_10.ci_comm);
 }


 return (VAR_12);
}
