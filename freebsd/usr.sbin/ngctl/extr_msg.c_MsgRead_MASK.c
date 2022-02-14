
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ arglen; int flags; int cmd; char* cmdstr; } ;
struct ng_mesg {char* data; TYPE_1__ header; } ;


 int FUNC_0 (int const*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct ng_mesg**,char*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,struct ng_mesg*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

void
FUNC_6(void)
{
 struct ng_mesg *VAR_5, *VAR_6;
 struct ng_mesg *VAR_7;
 char VAR_8[VAR_3];


 if (FUNC_1(VAR_4, &VAR_5, VAR_8) < 0) {
  FUNC_5("recv incoming message");
  return;
 }


 if (FUNC_2(VAR_4, VAR_8, VAR_2,
       VAR_1, VAR_5, sizeof(*VAR_5) + VAR_5->header.arglen) < 0
     || FUNC_1(VAR_4, &VAR_6, ((void*)0)) < 0) {
  FUNC_4("Rec'd %s %d from \"%s\":\n",
      (VAR_5->header.flags & VAR_0) != 0 ? "response" : "command",
      VAR_5->header.cmd, VAR_8);
  if (VAR_5->header.arglen == 0)
   FUNC_4("No arguments\n");
  else
   FUNC_0((const u_char *)VAR_5->data, VAR_5->header.arglen);
  FUNC_3(VAR_5);
  return;
 }


 FUNC_3(VAR_5);
 VAR_7 = (struct ng_mesg *)VAR_6->data;
 FUNC_4("Rec'd %s \"%s\" (%d) from \"%s\":\n",
     (VAR_7->header.flags & VAR_0) != 0 ? "response" : "command",
     VAR_7->header.cmdstr, VAR_7->header.cmd, VAR_8);
 if (*VAR_7->data != '\0')
  FUNC_4("Args:\t%s\n", VAR_7->data);
 else
  FUNC_4("No arguments\n");
 FUNC_3(VAR_6);
}
