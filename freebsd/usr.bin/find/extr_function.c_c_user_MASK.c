
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {scalar_t__ u_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,char*,int *) ;
 int VAR_1 ;
 struct passwd* FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;

PLAN *
FUNC_6(OPTION *VAR_2, char ***VAR_3)
{
 char *VAR_4;
 PLAN *VAR_5;
 struct passwd *VAR_6;
 uid_t VAR_7;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 VAR_1 &= ~VAR_0;

 VAR_5 = FUNC_5(VAR_2);
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == ((void*)0)) {
  char* VAR_8 = VAR_4;
  if( VAR_4[0] == '-' || VAR_4[0] == '+' )
   VAR_4++;
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 == 0 && VAR_4[0] != '0')
   FUNC_1(1, "%s: %s: no such user", VAR_2->name, VAR_4);
  VAR_7 = FUNC_2(VAR_5, VAR_2->name, VAR_8, ((void*)0));
 } else
  VAR_7 = VAR_6->pw_uid;

 VAR_5->u_data = VAR_7;
 return VAR_5;
}
