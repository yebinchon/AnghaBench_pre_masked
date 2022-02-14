
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int status; char* remote_status; int * peer_ref; int deletion; } ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ref*,int,int) ;
 int FUNC_3 (char,char*,struct ref*,int *,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct ref *VAR_2, const char *VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 if (!VAR_4) {
  char *VAR_7 = FUNC_4(VAR_3);
  FUNC_0(VAR_5 ? VAR_1 : VAR_0, "To %s\n", VAR_7);
  FUNC_1(VAR_7);
 }

 switch(VAR_2->status) {
 case 138:
  FUNC_3('X', "[no match]", VAR_2, ((void*)0), ((void*)0),
     VAR_5, VAR_6);
  break;
 case 133:
  FUNC_3('!', "[rejected]", VAR_2, ((void*)0),
     "remote does not support deleting refs",
     VAR_5, VAR_6);
  break;
 case 128:
  FUNC_3('=', "[up to date]", VAR_2,
     VAR_2->peer_ref, ((void*)0), VAR_5, VAR_6);
  break;
 case 132:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "non-fast-forward", VAR_5, VAR_6);
  break;
 case 136:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "already exists", VAR_5, VAR_6);
  break;
 case 135:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "fetch first", VAR_5, VAR_6);
  break;
 case 134:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "needs force", VAR_5, VAR_6);
  break;
 case 130:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "stale info", VAR_5, VAR_6);
  break;
 case 131:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "new shallow roots not allowed",
     VAR_5, VAR_6);
  break;
 case 129:
  FUNC_3('!', "[remote rejected]", VAR_2,
     VAR_2->deletion ? ((void*)0) : VAR_2->peer_ref,
     VAR_2->remote_status, VAR_5, VAR_6);
  break;
 case 139:
  FUNC_3('!', "[remote failure]", VAR_2,
     VAR_2->deletion ? ((void*)0) : VAR_2->peer_ref,
     "remote failed to report status",
     VAR_5, VAR_6);
  break;
 case 140:
  FUNC_3('!', "[rejected]", VAR_2, VAR_2->peer_ref,
     "atomic push failed", VAR_5, VAR_6);
  break;
 case 137:
  FUNC_2(VAR_2, VAR_5, VAR_6);
  break;
 }

 return 1;
}
