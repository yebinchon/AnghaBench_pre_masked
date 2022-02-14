
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_pack_args {scalar_t__ stateless_rpc; scalar_t__ progress; scalar_t__ quiet; scalar_t__ use_ofs_delta; scalar_t__ use_thin_pack; } ;
struct ref {struct ref* next; int new_oid; int old_oid; } ;
struct oid_array {int nr; int * oid; } ;
struct child_process {int in; int out; int git_cmd; int args; } ;
typedef scalar_t__ ssize_t ;
typedef int FILE ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct child_process*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int,int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (struct child_process*) ;
 int VAR_2 ;
 int * FUNC_14 (int,char*) ;
 char* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int,char*,int ) ;

__attribute__((used)) static int FUNC_17(int VAR_3, struct ref *VAR_4, struct oid_array *VAR_5, struct send_pack_args *VAR_6)
{





 struct child_process VAR_7 = VAR_0;
 FILE *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_0(&VAR_7.args, "pack-objects");
 FUNC_0(&VAR_7.args, "--all-progress-implied");
 FUNC_0(&VAR_7.args, "--revs");
 FUNC_0(&VAR_7.args, "--stdout");
 if (VAR_6->use_thin_pack)
  FUNC_0(&VAR_7.args, "--thin");
 if (VAR_6->use_ofs_delta)
  FUNC_0(&VAR_7.args, "--delta-base-offset");
 if (VAR_6->quiet || !VAR_6->progress)
  FUNC_0(&VAR_7.args, "-q");
 if (VAR_6->progress)
  FUNC_0(&VAR_7.args, "--progress");
 if (FUNC_11(VAR_2))
  FUNC_0(&VAR_7.args, "--shallow");
 VAR_7.in = -1;
 VAR_7.out = VAR_6->stateless_rpc ? -1 : VAR_3;
 VAR_7.git_cmd = 1;
 if (FUNC_13(&VAR_7))
  FUNC_2("git pack-objects failed");





 VAR_8 = FUNC_14(VAR_7.in, "w");
 for (VAR_9 = 0; VAR_9 < VAR_5->nr; VAR_9++)
  FUNC_5(&VAR_5->oid[VAR_9], VAR_8, 1);

 while (VAR_4) {
  if (!FUNC_10(&VAR_4->old_oid))
   FUNC_5(&VAR_4->old_oid, VAR_8, 1);
  if (!FUNC_10(&VAR_4->new_oid))
   FUNC_5(&VAR_4->new_oid, VAR_8, 0);
  VAR_4 = VAR_4->next;
 }

 FUNC_7(VAR_8);
 if (FUNC_6(VAR_8))
  FUNC_2("error writing to pack-objects");
 FUNC_4(VAR_8);

 if (VAR_6->stateless_rpc) {
  char *VAR_11 = FUNC_15(VAR_1);
  while (1) {
   ssize_t VAR_12 = FUNC_16(VAR_7.out, VAR_11, VAR_1);
   if (VAR_12 <= 0)
    break;
   FUNC_12(VAR_3, -1, VAR_11, VAR_12, VAR_1);
  }
  FUNC_9(VAR_11);
  FUNC_1(VAR_7.out);
  VAR_7.out = -1;
 }

 VAR_10 = FUNC_8(&VAR_7);
 if (VAR_10) {
  if (VAR_10 > 128 && VAR_10 != 141)
   FUNC_3("pack-objects died of signal %d", VAR_10 - 128);
  return -1;
 }
 return 0;
}
