
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct conf_entry {char const* pid_cmd_file; int fsize; int numlogs; int trsize; int hours; scalar_t__ def_cfg; int sig; int compress; scalar_t__ flags; scalar_t__ permissions; int * trim_at; scalar_t__ gid; scalar_t__ uid; scalar_t__ rotate; scalar_t__ firstcreate; int * r_reason; int * log; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,char*,int *,char const*) ;
 int * VAR_2 ;
 int FUNC_1 (int,char*,char const*) ;
 struct conf_entry* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int * FUNC_4 (int *) ;
 void* FUNC_5 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static struct conf_entry *
FUNC_6(const char *VAR_4, struct conf_entry *VAR_5)
{
 struct conf_entry *VAR_6;

 if (VAR_3 > 4)
  FUNC_3("\t--> [creating entry for %s]\n", VAR_4);

 VAR_6 = FUNC_2(sizeof(struct conf_entry));
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "malloc of conf_entry for %s", VAR_4);

 if (VAR_2 == ((void*)0) || VAR_4[0] != '/')
  VAR_6->log = FUNC_5(VAR_4);
 else
  FUNC_0(&VAR_6->log, "%s%s", VAR_2, VAR_4);
 if (VAR_6->log == ((void*)0))
  FUNC_1(1, "strdup for %s", VAR_4);

 if (VAR_5 != ((void*)0)) {
  VAR_6->pid_cmd_file = ((void*)0);
  if (VAR_5->pid_cmd_file)
   VAR_6->pid_cmd_file = FUNC_5(VAR_5->pid_cmd_file);
  VAR_6->r_reason = ((void*)0);
  VAR_6->firstcreate = 0;
  VAR_6->rotate = 0;
  VAR_6->fsize = -1;
  VAR_6->uid = VAR_5->uid;
  VAR_6->gid = VAR_5->gid;
  VAR_6->numlogs = VAR_5->numlogs;
  VAR_6->trsize = VAR_5->trsize;
  VAR_6->hours = VAR_5->hours;
  VAR_6->trim_at = ((void*)0);
  if (VAR_5->trim_at != ((void*)0))
   VAR_6->trim_at = FUNC_4(VAR_5->trim_at);
  VAR_6->permissions = VAR_5->permissions;
  VAR_6->flags = VAR_5->flags;
  VAR_6->compress = VAR_5->compress;
  VAR_6->sig = VAR_5->sig;
  VAR_6->def_cfg = VAR_5->def_cfg;
 } else {

  VAR_6->pid_cmd_file = ((void*)0);
  VAR_6->r_reason = ((void*)0);
  VAR_6->firstcreate = 0;
  VAR_6->rotate = 0;
  VAR_6->fsize = -1;
  VAR_6->uid = (uid_t)-1;
  VAR_6->gid = (gid_t)-1;
  VAR_6->numlogs = 1;
  VAR_6->trsize = -1;
  VAR_6->hours = -1;
  VAR_6->trim_at = ((void*)0);
  VAR_6->permissions = 0;
  VAR_6->flags = 0;
  VAR_6->compress = VAR_0;
  VAR_6->sig = VAR_1;
  VAR_6->def_cfg = 0;
 }

 return (VAR_6);
}
