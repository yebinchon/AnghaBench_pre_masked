
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int jobids; int users; struct req_user* authinfo; struct req_user* prettyname; struct req_user* authname; struct req_user* logname; } ;
struct req_user {int dummy; } ;
typedef struct req_user req_jobid ;


 struct req_user* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct req_user*,int ) ;
 int FUNC_2 (struct req_user*) ;
 int FUNC_3 (struct request*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct request *VAR_2)
{
 struct req_user *VAR_3;
 struct req_jobid *VAR_4;

 if (VAR_2->logname)
  FUNC_2(VAR_2->logname);
 if (VAR_2->authname)
  FUNC_2(VAR_2->authname);
 if (VAR_2->prettyname)
  FUNC_2(VAR_2->prettyname);
 if (VAR_2->authinfo)
  FUNC_2(VAR_2->authinfo);
 while ((VAR_3 = FUNC_0(&VAR_2->users)) != ((void*)0)) {
  FUNC_1(&VAR_2->users, VAR_3, VAR_1);
  FUNC_2(VAR_3);
 }
 while ((VAR_4 = FUNC_0(&VAR_2->jobids)) != ((void*)0)) {
  FUNC_1(&VAR_2->jobids, VAR_4, VAR_0);
  FUNC_2(VAR_4);
 }
 FUNC_3(VAR_2);
}
