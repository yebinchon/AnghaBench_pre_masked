
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {int hash; struct packed_git* next; } ;
struct TYPE_2__ {char* buf; } ;
struct http_pack_request {TYPE_1__ tmpfile; struct packed_git** lst; int * packfile; struct packed_git* target; } ;
struct child_process {int git_cmd; int no_stdin; int no_stdout; int args; } ;


 int FUNC_0 (char*) ;
 struct child_process VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (struct packed_git*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,struct packed_git*) ;
 scalar_t__ FUNC_8 (struct child_process*) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,size_t*) ;
 int VAR_1 ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,int,char*) ;

int FUNC_14(struct http_pack_request *VAR_2)
{
 struct packed_git **VAR_3;
 struct packed_git *VAR_4 = VAR_2->target;
 char *VAR_5;
 size_t VAR_6;
 struct child_process VAR_7 = VAR_0;

 FUNC_3(VAR_4);

 FUNC_4(VAR_2->packfile);
 VAR_2->packfile = ((void*)0);

 VAR_3 = VAR_2->lst;
 while (*VAR_3 != VAR_4)
  VAR_3 = &((*VAR_3)->next);
 *VAR_3 = (*VAR_3)->next;

 if (!FUNC_11(VAR_2->tmpfile.buf, ".pack.temp", &VAR_6))
  FUNC_0("pack tmpfile does not end in .pack.temp?");
 VAR_5 = FUNC_13("%.*s.idx.temp", (int)VAR_6, VAR_2->tmpfile.buf);

 FUNC_1(&VAR_7.args, "index-pack");
 FUNC_2(&VAR_7.args, "-o", VAR_5, ((void*)0));
 FUNC_1(&VAR_7.args, VAR_2->tmpfile.buf);
 VAR_7.git_cmd = 1;
 VAR_7.no_stdin = 1;
 VAR_7.no_stdout = 1;

 if (FUNC_8(&VAR_7)) {
  FUNC_12(VAR_2->tmpfile.buf);
  FUNC_12(VAR_5);
  FUNC_6(VAR_5);
  return -1;
 }

 FUNC_12(FUNC_9(VAR_4->hash));

 if (FUNC_5(VAR_2->tmpfile.buf, FUNC_10(VAR_4->hash))
  || FUNC_5(VAR_5, FUNC_9(VAR_4->hash))) {
  FUNC_6(VAR_5);
  return -1;
 }

 FUNC_7(VAR_1, VAR_4);
 FUNC_6(VAR_5);
 return 0;
}
