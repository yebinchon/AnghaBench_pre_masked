
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_status_list ;
struct TYPE_15__ {int status; TYPE_6__* index_to_workdir; TYPE_3__* head_to_index; } ;
typedef TYPE_7__ git_status_entry ;
struct TYPE_13__ {char* path; } ;
struct TYPE_12__ {char* path; } ;
struct TYPE_14__ {TYPE_5__ old_file; TYPE_4__ new_file; } ;
struct TYPE_10__ {char* path; } ;
struct TYPE_9__ {char* path; } ;
struct TYPE_11__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_7__* FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void FUNC_4(git_status_list *VAR_12)
{
 size_t VAR_13, VAR_14 = FUNC_1(VAR_12);
 const git_status_entry *VAR_15;
 int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0, VAR_19 = 0;
 const char *VAR_20, *VAR_21;



 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  char *VAR_22 = ((void*)0);

  VAR_15 = FUNC_0(VAR_12, VAR_13);

  if (VAR_15->status == VAR_0)
   continue;

  if (VAR_15->status & VAR_7)
   VAR_19 = 1;

  if (VAR_15->status & VAR_4)
   VAR_22 = "new file: ";
  if (VAR_15->status & VAR_3)
   VAR_22 = "modified: ";
  if (VAR_15->status & VAR_2)
   VAR_22 = "deleted:  ";
  if (VAR_15->status & VAR_5)
   VAR_22 = "renamed:  ";
  if (VAR_15->status & VAR_6)
   VAR_22 = "typechange:";

  if (VAR_22 == ((void*)0))
   continue;

  if (!VAR_16) {
   FUNC_2("# Changes to be committed:\n");
   FUNC_2("#   (use \"git reset HEAD <file>...\" to unstage)\n");
   FUNC_2("#\n");
   VAR_16 = 1;
  }

  VAR_20 = VAR_15->head_to_index->old_file.path;
  VAR_21 = VAR_15->head_to_index->new_file.path;

  if (VAR_20 && VAR_21 && FUNC_3(VAR_20, VAR_21))
   FUNC_2("#\t%s  %s -> %s\n", VAR_22, VAR_20, VAR_21);
  else
   FUNC_2("#\t%s  %s\n", VAR_22, VAR_20 ? VAR_20 : VAR_21);
 }

 if (VAR_16) {
  VAR_17 = 1;
  FUNC_2("#\n");
 }
 VAR_16 = 0;



 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  char *VAR_23 = ((void*)0);

  VAR_15 = FUNC_0(VAR_12, VAR_13);






  if (VAR_15->status == VAR_0 || VAR_15->index_to_workdir == ((void*)0))
   continue;


  if (VAR_15->status & VAR_8)
   VAR_23 = "modified: ";
  if (VAR_15->status & VAR_7)
   VAR_23 = "deleted:  ";
  if (VAR_15->status & VAR_10)
   VAR_23 = "renamed:  ";
  if (VAR_15->status & VAR_11)
   VAR_23 = "typechange:";

  if (VAR_23 == ((void*)0))
   continue;

  if (!VAR_16) {
   FUNC_2("# Changes not staged for commit:\n");
   FUNC_2("#   (use \"git add%s <file>...\" to update what will be committed)\n", VAR_19 ? "/rm" : "");
   FUNC_2("#   (use \"git checkout -- <file>...\" to discard changes in working directory)\n");
   FUNC_2("#\n");
   VAR_16 = 1;
  }

  VAR_20 = VAR_15->index_to_workdir->old_file.path;
  VAR_21 = VAR_15->index_to_workdir->new_file.path;

  if (VAR_20 && VAR_21 && FUNC_3(VAR_20, VAR_21))
   FUNC_2("#\t%s  %s -> %s\n", VAR_23, VAR_20, VAR_21);
  else
   FUNC_2("#\t%s  %s\n", VAR_23, VAR_20 ? VAR_20 : VAR_21);
 }

 if (VAR_16) {
  VAR_18 = 1;
  FUNC_2("#\n");
 }



 VAR_16 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  VAR_15 = FUNC_0(VAR_12, VAR_13);

  if (VAR_15->status == VAR_9) {

   if (!VAR_16) {
    FUNC_2("# Untracked files:\n");
    FUNC_2("#   (use \"git add <file>...\" to include in what will be committed)\n");
    FUNC_2("#\n");
    VAR_16 = 1;
   }

   FUNC_2("#\t%s\n", VAR_15->index_to_workdir->old_file.path);
  }
 }

 VAR_16 = 0;



 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  VAR_15 = FUNC_0(VAR_12, VAR_13);

  if (VAR_15->status == VAR_1) {

   if (!VAR_16) {
    FUNC_2("# Ignored files:\n");
    FUNC_2("#   (use \"git add -f <file>...\" to include in what will be committed)\n");
    FUNC_2("#\n");
    VAR_16 = 1;
   }

   FUNC_2("#\t%s\n", VAR_15->index_to_workdir->old_file.path);
  }
 }

 if (!VAR_17 && VAR_18)
  FUNC_2("no changes added to commit (use \"git add\" and/or \"git commit -a\")\n");
}
