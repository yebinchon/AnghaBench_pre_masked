
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int flags; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct ng_mesg* const,int,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_9, char **VAR_10)
{
 u_char VAR_11[sizeof(struct ng_mesg) + VAR_6];
 struct ng_mesg *const VAR_12 = (struct ng_mesg *) VAR_11;
 char *const VAR_13 = (char *) VAR_12->data;
 char *VAR_14;
 int VAR_15 = 0;


 switch (VAR_9) {
 case 2:
  VAR_14 = VAR_10[1];
  break;
 default:
  return (VAR_2);
 }


 if (FUNC_1(VAR_7, VAR_14, VAR_4,
     VAR_5, ((void*)0), 0) < 0) {
  switch (VAR_8) {
  case 128:
   VAR_15 = 1;
   break;
  default:
   FUNC_3("send msg");
   return (VAR_0);
  }
 } else {
  if (FUNC_0(VAR_7, VAR_12, sizeof(VAR_11), ((void*)0)) < 0
      || (VAR_12->header.flags & VAR_3) == 0)
   VAR_15 = 1;
 }


 if (VAR_15)
  FUNC_2("No status available for \"%s\"\n", VAR_14);
 else
  FUNC_2("Status for \"%s\":\n%s\n", VAR_14, VAR_13);
 return (VAR_1);
}
