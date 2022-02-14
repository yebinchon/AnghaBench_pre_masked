
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_inactive; int set_active; int has_bootnum; int delete; int copy; int create; int dry_run; int delete_bootnext; int set_bootnext; int once; int del_timeout; int set_timeout; int verbose; void* order; void* loader; void* timeout; void* label; void* kernel; void* env; void* cp_src; void* bootnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,char**,char*,int ,int *) ;
 int VAR_6 ;
 void* FUNC_3 (void*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_9, char *VAR_10[])
{
 int VAR_11;

 while ((VAR_11 = FUNC_2(VAR_9, VAR_10, "AaBb:C:cDe:hk:L:l:NnOo:Tt:v",
      VAR_6, ((void*)0))) != -1) {
  switch (VAR_11) {
  case 'A':
   VAR_8.set_inactive = 1;
   break;
  case 'a':
   VAR_8.set_active = 1;
   break;
  case 'b':
   VAR_8.has_bootnum = 1;
   VAR_8.bootnum = FUNC_5(VAR_7, ((void*)0), 16);
   break;
  case 'B':
   VAR_8.delete = 1;
   break;
  case 'C':
   VAR_8.copy = 1;
   VAR_8.cp_src = FUNC_5(VAR_7, ((void*)0), 16);
  case 'c':
   VAR_8.create = 1;
   break;
  case 'D':
   VAR_8.dry_run = 1;
   break;
  case 'e':
   FUNC_1(VAR_8.env);
   VAR_8.env = FUNC_4(VAR_7);
   break;
  case 'h':
  default:
   FUNC_0(1, "%s", VAR_5);
   break;
  case 'k':
   FUNC_1(VAR_8.kernel);
   VAR_8.kernel = FUNC_4(VAR_7);
   break;
  case 'L':
   FUNC_1(VAR_8.label);
   VAR_8.label = FUNC_4(VAR_7);
   break;
  case 'l':
   FUNC_1(VAR_8.loader);
   VAR_8.loader = FUNC_4(VAR_7);
   VAR_8.loader = FUNC_3(VAR_8.loader);
   break;
  case 'N':
   VAR_8.delete_bootnext = 1;
   break;
  case 'n':
   VAR_8.set_bootnext = 1;
   break;
  case 'O':
   VAR_8.once = 1;
   break;
  case 'o':
   FUNC_1(VAR_8.order);
   VAR_8.order = FUNC_4(VAR_7);
   break;
  case 'T':
   VAR_8.del_timeout = 1;
   break;
  case 't':
   VAR_8.set_timeout = 1;
   VAR_8.timeout = FUNC_5(VAR_7, ((void*)0), 10);
   break;
  case 'v':
   VAR_8.verbose = 1;
   break;
  }
 }
 if (VAR_8.create) {
  if (!VAR_8.loader)
   FUNC_0(1, "%s",VAR_2);
  return;
 }

 if (VAR_8.order && !(VAR_8.order))
  FUNC_0(1, "%s", VAR_4);

 if ((VAR_8.set_inactive || VAR_8.set_active) && !VAR_8.has_bootnum)
  FUNC_0(1, "%s", VAR_0);

 if (VAR_8.delete && !VAR_8.has_bootnum)
  FUNC_0(1, "%s", VAR_3);

 if (VAR_8.set_bootnext && !VAR_8.has_bootnum)
  FUNC_0(1, "%s", VAR_1);
}
