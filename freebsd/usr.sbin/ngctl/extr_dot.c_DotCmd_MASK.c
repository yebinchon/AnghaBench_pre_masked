
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t u_int ;
struct nodeinfo {size_t hooks; } ;
struct ng_mesg {scalar_t__ data; } ;
struct namelist {size_t numnames; TYPE_1__* nodeinfo; } ;
struct hooklist {TYPE_3__* link; struct nodeinfo nodeinfo; } ;
typedef int path ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {int peerhook; TYPE_2__ nodeinfo; int ourhook; } ;
struct TYPE_4__ {scalar_t__ id; char* name; scalar_t__ hooks; int type; } ;
typedef int FILE ;


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
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct ng_mesg*) ;
 int FUNC_6 (int,char**,char*) ;
 int VAR_9 ;
 int FUNC_7 (char*,int,char*,int ) ;
 int * VAR_10 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(int VAR_11, char **VAR_12)
{
 struct ng_mesg *VAR_13;
 struct namelist *VAR_14;
 FILE *VAR_15 = VAR_10;
 int VAR_16;
 u_int VAR_17;


 VAR_9 = 1;
 while ((VAR_16 = FUNC_6(VAR_11, VAR_12, "")) != -1) {
  switch (VAR_16) {
  case '?':
  default:
   return (VAR_2);
   break;
  }
 }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;


 switch (VAR_11) {
 case 1:
  VAR_15 = FUNC_3(VAR_12[0], "w");
  if (VAR_15 == ((void*)0)) {
   FUNC_8("Could not open %s for writing", VAR_12[0]);
   return (VAR_0);
  }
 case 0:
  break;
 default:
  if (VAR_15 != VAR_10)
   (void)FUNC_2(VAR_15);
  return (VAR_2);
 }


 if (FUNC_1(VAR_8, ".", VAR_3, VAR_5, ((void*)0),
     0) < 0) {
  FUNC_8("send listnodes msg");
  goto error;
 }
 if (FUNC_0(VAR_8, &VAR_13, ((void*)0)) < 0) {
  FUNC_8("recv listnodes msg");
  goto error;
 }

 VAR_14 = (struct namelist *)VAR_13->data;
 FUNC_4(VAR_15, "graph netgraph {\n");

 FUNC_4(VAR_15, "\tedge [ weight = 1.0 ];\n");
 FUNC_4(VAR_15, "\tnode [ shape = record, fontsize = 12 ] {\n");
 for (VAR_17 = 0; VAR_17 < VAR_14->numnames; VAR_17++)
  FUNC_4(VAR_15, "\t\t\"%jx\" [ label = \"{%s:|{%s|[%jx]:}}\" ];\n",
      (uintmax_t)VAR_14->nodeinfo[VAR_17].id,
      VAR_14->nodeinfo[VAR_17].name[0] != '\0' ?
      VAR_14->nodeinfo[VAR_17].name : VAR_7,
      VAR_14->nodeinfo[VAR_17].type, (uintmax_t)VAR_14->nodeinfo[VAR_17].id);
 FUNC_4(VAR_15, "\t};\n");

 FUNC_4(VAR_15, "\tsubgraph cluster_disconnected {\n");
 FUNC_4(VAR_15, "\t\tbgcolor = pink;\n");
 for (VAR_17 = 0; VAR_17 < VAR_14->numnames; VAR_17++)
  if (VAR_14->nodeinfo[VAR_17].hooks == 0)
   FUNC_4(VAR_15, "\t\t\"%jx\";\n",
       (uintmax_t)VAR_14->nodeinfo[VAR_17].id);
 FUNC_4(VAR_15, "\t};\n");

 for (VAR_17 = 0; VAR_17 < VAR_14->numnames; VAR_17++) {
  struct ng_mesg *VAR_18;
  struct hooklist *VAR_19;
  struct nodeinfo *VAR_20;
  char VAR_21[VAR_6];
  u_int VAR_22;

  (void)FUNC_7(VAR_21, sizeof(VAR_21), "[%jx]:",
      (uintmax_t)VAR_14->nodeinfo[VAR_17].id);


  if (FUNC_1(VAR_8, VAR_21, VAR_3, VAR_4,
      ((void*)0), 0) < 0) {
   FUNC_5(VAR_13);
   FUNC_8("send listhooks msg");
   goto error;
  }
  if (FUNC_0(VAR_8, &VAR_18, ((void*)0)) < 0) {
   FUNC_5(VAR_13);
   FUNC_8("recv listhooks msg");
   goto error;
  }

  VAR_19 = (struct hooklist *)VAR_18->data;
  VAR_20 = &VAR_19->nodeinfo;
  if (VAR_20->hooks == 0) {
   FUNC_5(VAR_18);
   continue;
  }

  FUNC_4(VAR_15, "\tnode [ shape = octagon, fontsize = 10 ] {\n");
  for (VAR_22 = 0; VAR_22 < VAR_20->hooks; VAR_22++)
   FUNC_4(VAR_15, "\t\t\"%jx.%s\" [ label = \"%s\" ];\n",
       (uintmax_t)VAR_14->nodeinfo[VAR_17].id,
       VAR_19->link[VAR_22].ourhook, VAR_19->link[VAR_22].ourhook);
  FUNC_4(VAR_15, "\t};\n");

  FUNC_4(VAR_15, "\t{\n\t\tedge [ weight = 2.0, style = bold ];\n");
  for (VAR_22 = 0; VAR_22 < VAR_20->hooks; VAR_22++)
   FUNC_4(VAR_15, "\t\t\"%jx\" -- \"%jx.%s\";\n",
       (uintmax_t)VAR_14->nodeinfo[VAR_17].id,
       (uintmax_t)VAR_14->nodeinfo[VAR_17].id,
       VAR_19->link[VAR_22].ourhook);
  FUNC_4(VAR_15, "\t};\n");

  for (VAR_22 = 0; VAR_22 < VAR_20->hooks; VAR_22++) {

   if (VAR_19->link[VAR_22].nodeinfo.id > VAR_14->nodeinfo[VAR_17].id)
    continue;
   FUNC_4(VAR_15, "\t\"%jx.%s\" -- \"%jx.%s\";\n",
       (uintmax_t)VAR_14->nodeinfo[VAR_17].id,
       VAR_19->link[VAR_22].ourhook,
       (uintmax_t)VAR_19->link[VAR_22].nodeinfo.id,
       VAR_19->link[VAR_22].peerhook);
  }
  FUNC_5(VAR_18);
 }

 FUNC_4(VAR_15, "}\n");

 FUNC_5(VAR_13);
 if (VAR_15 != VAR_10)
  (void)FUNC_2(VAR_15);
 return (VAR_1);
error:
 if (VAR_15 != VAR_10)
  (void)FUNC_2(VAR_15);
 return (VAR_0);
}
