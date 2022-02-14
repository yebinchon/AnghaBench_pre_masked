
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigwork_entry {int sw_pidok; long sw_pid; char* sw_pidtype; } ;
struct conf_entry {int flags; long pid_cmd_file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (long,char*) ;
 int FUNC_4 (char) ;
 long FUNC_5 (char*,char**,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*,long) ;
 int FUNC_7 (char*,long,...) ;

__attribute__((used)) static void
FUNC_8(struct sigwork_entry *VAR_8, const struct conf_entry *VAR_9)
{
 FILE *VAR_10;
 long VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15, VAR_16[VAR_0];

 VAR_11 = VAR_4;
 VAR_12 = VAR_3;
 VAR_8->sw_pidok = 0;
 VAR_8->sw_pid = 0;
 VAR_8->sw_pidtype = "daemon";
 if (VAR_9->flags & VAR_1) {





  VAR_11 = -VAR_3;
  VAR_12 = -VAR_4;
  VAR_8->sw_pidtype = "process-group";
 }

 VAR_10 = FUNC_3(VAR_9->pid_cmd_file, "r");
 if (VAR_10 == ((void*)0)) {
  if (VAR_6 == VAR_2 && VAR_5 == 0) {







   VAR_8->sw_pidok = 1;
   FUNC_7("pid file doesn't exist: %s", VAR_9->pid_cmd_file);
  } else
   FUNC_6("can't open pid file: %s", VAR_9->pid_cmd_file);
  return;
 }

 if (FUNC_2(VAR_16, VAR_0, VAR_10) == ((void*)0)) {






  if (FUNC_1(VAR_10) && VAR_5 == 0) {
   VAR_8->sw_pidok = 1;
   FUNC_7("pid/cmd file is empty: %s", VAR_9->pid_cmd_file);
  } else
   FUNC_6("can't read from pid file: %s", VAR_9->pid_cmd_file);
  (void)FUNC_0(VAR_10);
  return;
 }
 (void)FUNC_0(VAR_10);

 VAR_6 = 0;
 VAR_15 = VAR_16;
 while (*VAR_15 == ' ')
  VAR_15++;
 VAR_13 = FUNC_5(VAR_15, &VAR_14, 10);
 if (*VAR_14 != '\0' && !FUNC_4(*VAR_14)) {
  FUNC_7("pid file does not start with a valid number: %s",
      VAR_9->pid_cmd_file);
 } else if (VAR_13 < VAR_11 || VAR_13 > VAR_12) {
  FUNC_7("bad value '%ld' for process number in %s",
      VAR_13, VAR_9->pid_cmd_file);
  if (VAR_7)
   FUNC_7("\t(expecting value between %ld and %ld)",
       VAR_11, VAR_12);
 } else {
  VAR_8->sw_pidok = 1;
  VAR_8->sw_pid = VAR_13;
 }

 return;
}
