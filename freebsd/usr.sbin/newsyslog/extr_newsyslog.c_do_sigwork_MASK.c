
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigwork_entry {scalar_t__ sw_runcmd; int sw_pidok; scalar_t__ sw_pid; char* sw_fname; int sw_signum; char* sw_pidtype; } ;


 scalar_t__ VAR_0 ;
 struct sigwork_entry* FUNC_0 (struct sigwork_entry*,int ) ;
 int FUNC_1 (char**,char*,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_9(struct sigwork_entry *VAR_7)
{
 struct sigwork_entry *VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11;

 if (VAR_7->sw_runcmd == 0 && (!(VAR_7->sw_pidok) || VAR_7->sw_pid == 0))
  return;
 if (VAR_3) {
  if (!VAR_4)
   VAR_7->sw_pidok = -1;
  return;
 }






 VAR_10 = 0;
 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (VAR_8 != ((void*)0)) {
  if (VAR_7->sw_pid == VAR_8->sw_pid)
   VAR_10 = 10;
  else
   VAR_10 = 1;
 }

 if (VAR_2) {
  if (VAR_7->sw_runcmd)
   FUNC_4("\tsh -c '%s %d'\n", VAR_7->sw_fname,
       VAR_7->sw_signum);
  else {
   FUNC_4("\tkill -%d %d \t\t# %s\n", VAR_7->sw_signum,
       (int)VAR_7->sw_pid, VAR_7->sw_fname);
   if (VAR_10 > 0)
    FUNC_4("\tsleep %d\n", VAR_10);
  }
  return;
 }

 if (VAR_7->sw_runcmd) {
  FUNC_1(&VAR_11, "%s %d", VAR_7->sw_fname, VAR_7->sw_signum);
  if (VAR_11 == ((void*)0)) {
   FUNC_7("can't allocate memory to run %s",
       VAR_7->sw_fname);
   return;
  }
  if (VAR_6)
   FUNC_4("Run command: %s\n", VAR_11);
  VAR_9 = FUNC_6(VAR_11);
  if (VAR_9) {
   FUNC_8("%s: returned non-zero exit code: %d",
       VAR_11, VAR_9);
  }
  FUNC_2(VAR_11);
  return;
 }

 VAR_9 = FUNC_3(VAR_7->sw_pid, VAR_7->sw_signum);
 if (VAR_9 != 0) {







  if (VAR_1 != VAR_0)
   VAR_7->sw_pidok = 0;
  FUNC_7("can't notify %s, pid %d = %s", VAR_7->sw_pidtype,
      (int)VAR_7->sw_pid, VAR_7->sw_fname);
 } else {
  if (VAR_6)
   FUNC_4("Notified %s pid %d = %s\n", VAR_7->sw_pidtype,
       (int)VAR_7->sw_pid, VAR_7->sw_fname);
  if (VAR_10 > 0) {
   if (VAR_6)
    FUNC_4("Pause %d second(s) between signals\n",
        VAR_10);
   FUNC_5(VAR_10);
  }
 }
}
