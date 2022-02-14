
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* path; } ;
typedef TYPE_1__ git_diff_file ;
typedef int git_checkout_notify_t ;
struct TYPE_8__ {scalar_t__ debug; int n_ignored; int n_untracked; int n_updates; int n_dirty; int n_conflicts; } ;
typedef TYPE_2__ checkout_counts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_5 ;

int FUNC_2(
 git_checkout_notify_t VAR_6,
 const char *VAR_7,
 const git_diff_file *VAR_8,
 const git_diff_file *VAR_9,
 const git_diff_file *VAR_10,
 void *VAR_11)
{
 checkout_counts *VAR_12 = VAR_11;

 FUNC_0(VAR_8); FUNC_0(VAR_9); FUNC_0(VAR_10);

 if (VAR_6 & VAR_0) {
  VAR_12->n_conflicts++;

  if (VAR_12->debug) {
   if (VAR_10) {
    if (VAR_8) {
     if (VAR_9)
      FUNC_1(VAR_5, "M %s (conflicts with M %s)\n",
       VAR_10->path, VAR_9->path);
     else
      FUNC_1(VAR_5, "M %s (conflicts with D %s)\n",
       VAR_10->path, VAR_8->path);
    } else {
     if (VAR_9)
      FUNC_1(VAR_5, "Existing %s (conflicts with A %s)\n",
       VAR_10->path, VAR_9->path);
     else
      FUNC_1(VAR_5, "How can an untracked file be a conflict (%s)\n", VAR_10->path);
    }
   } else {
    if (VAR_8) {
     if (VAR_9)
      FUNC_1(VAR_5, "D %s (conflicts with M %s)\n",
       VAR_9->path, VAR_8->path);
     else
      FUNC_1(VAR_5, "D %s (conflicts with D %s)\n",
       VAR_8->path, VAR_8->path);
    } else {
     if (VAR_9)
      FUNC_1(VAR_5, "How can an added file with no workdir be a conflict (%s)\n", VAR_9->path);
     else
      FUNC_1(VAR_5, "How can a nonexistent file be a conflict (%s)\n", VAR_7);
    }
   }
  }
 }

 if (VAR_6 & VAR_1) {
  VAR_12->n_dirty++;

  if (VAR_12->debug) {
   if (VAR_10)
    FUNC_1(VAR_5, "M %s\n", VAR_10->path);
   else
    FUNC_1(VAR_5, "D %s\n", VAR_8->path);
  }
 }

 if (VAR_6 & VAR_4) {
  VAR_12->n_updates++;

  if (VAR_12->debug) {
   if (VAR_8) {
    if (VAR_9)
     FUNC_1(VAR_5, "update: M %s\n", VAR_7);
    else
     FUNC_1(VAR_5, "update: D %s\n", VAR_7);
   } else {
    if (VAR_9)
     FUNC_1(VAR_5, "update: A %s\n", VAR_7);
    else
     FUNC_1(VAR_5, "update: this makes no sense %s\n", VAR_7);
   }
  }
 }

 if (VAR_6 & VAR_3) {
  VAR_12->n_untracked++;

  if (VAR_12->debug)
   FUNC_1(VAR_5, "? %s\n", VAR_7);
 }

 if (VAR_6 & VAR_2) {
  VAR_12->n_ignored++;

  if (VAR_12->debug)
   FUNC_1(VAR_5, "I %s\n", VAR_7);
 }

 return 0;
}
