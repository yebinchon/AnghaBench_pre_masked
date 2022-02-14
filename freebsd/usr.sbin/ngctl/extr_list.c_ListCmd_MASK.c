
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u_long ;
struct nodeinfo {int id; char* name; char* type; int hooks; } ;
struct ng_mesg {scalar_t__ data; } ;
struct namelist {int numnames; struct nodeinfo* nodeinfo; } ;
typedef int path ;
struct TYPE_2__ {int (* func ) (int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct ng_mesg**,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *,int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_9 ;
 int FUNC_4 (char*,...) ;
 TYPE_1__ VAR_10 ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_11, char **VAR_12)
{
 struct ng_mesg *VAR_13;
 struct namelist *VAR_14;
 struct nodeinfo *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18, VAR_19 = VAR_1;


 VAR_9 = 1;
 while ((VAR_18 = FUNC_3(VAR_11, VAR_12, "ln")) != -1) {
  switch (VAR_18) {
  case 'l':
   VAR_16 = 1;
   break;
  case 'n':
   VAR_17 = 1;
   break;
  case '?':
  default:
   return (VAR_2);
   break;
  }
 }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;


 switch (VAR_11) {
 case 0:
  break;
 default:
  return (VAR_2);
 }


 if (FUNC_1(VAR_8, ".", VAR_3,
     VAR_17 ? VAR_4 : VAR_5, ((void*)0), 0) < 0) {
  FUNC_7("send msg");
  return (VAR_0);
 }
 if (FUNC_0(VAR_8, &VAR_13, ((void*)0)) < 0) {
  FUNC_7("recv msg");
  return (VAR_0);
 }


 VAR_14 = (struct namelist *) VAR_13->data;
 FUNC_4("There are %d total %snodes:\n",
     VAR_14->numnames, VAR_17 ? "named " : "");
 VAR_15 = VAR_14->nodeinfo;
 if (VAR_16) {
  char VAR_20[VAR_6];
  char *VAR_21[2] = { "show", VAR_20 };

  while (VAR_14->numnames > 0) {
   FUNC_5(VAR_20, sizeof(VAR_20),
       "[%lx]:", (u_long)VAR_15->id);
   if ((VAR_19 = (*VAR_10.func)(2, VAR_21)) != VAR_1)
    break;
   VAR_15++;
   VAR_14->numnames--;
   if (VAR_14->numnames > 0)
    FUNC_4("\n");
  }
 } else {
  while (VAR_14->numnames > 0) {
   if (!*VAR_15->name)
    FUNC_5(VAR_15->name, sizeof(VAR_15->name),
        "%s", VAR_7);
   FUNC_4("  Name: %-15s Type: %-15s ID: %08x   "
       "Num hooks: %d\n",
       VAR_15->name, VAR_15->type, VAR_15->id, VAR_15->hooks);
   VAR_15++;
   VAR_14->numnames--;
  }
 }


 FUNC_2(VAR_13);
 return (VAR_19);
}
