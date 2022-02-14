
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lastjid ;
typedef int jid ;
struct TYPE_2__ {int jp_flags; char* jp_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 TYPE_1__* VAR_20 ;
 int FUNC_5 (int,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,char**) ;
 int FUNC_18 (int ) ;

int
FUNC_19(int VAR_21, char **VAR_22)
{
 char *VAR_23, *VAR_24, *VAR_25, *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;

 VAR_21 = FUNC_17(VAR_21, VAR_22);
 if (VAR_21 < 0)
  FUNC_2(1);

        FUNC_18(VAR_2);
 VAR_25 = ((void*)0);
 VAR_32 = VAR_29 = VAR_30 = 0;
 while ((VAR_27 = FUNC_4(VAR_21, VAR_22, "adj:hNnqsv")) >= 0)
  switch (VAR_27) {
  case 'a':
  case 'd':
   VAR_29 |= VAR_1;
   break;
  case 'j':
   VAR_30 = FUNC_9(VAR_17, &VAR_24, 10);
   if (!VAR_30 || *VAR_24) {
    VAR_30 = 0;
    VAR_25 = VAR_17;
   }
   break;
  case 'h':
   VAR_32 = (VAR_32 & ~(VAR_10 | VAR_11)) |
       VAR_6;
   break;
  case 'N':
   VAR_32 |= VAR_7;
   break;
  case 'n':
   VAR_32 = (VAR_32 & ~VAR_11) | VAR_8;
   break;
  case 'q':
   VAR_32 |= VAR_9;
   break;
  case 's':
   VAR_32 = (VAR_32 & ~(VAR_6 | VAR_11)) |
       VAR_8 | VAR_9 | VAR_10;
   break;
  case 'v':
   VAR_32 = (VAR_32 &
       ~(VAR_6 | VAR_8 | VAR_10)) |
       VAR_11;
   break;
  default:
   FUNC_13(1, "usage: jls [-dhNnqv] [-j jail] [param ...]");
  }
 if (VAR_18 == VAR_21) {
  if (VAR_32 & (VAR_6 | VAR_8))
   FUNC_0("all", ((void*)0), (size_t)0, ((void*)0), VAR_4);
  else if (VAR_32 & VAR_11) {
   FUNC_0("jid", ((void*)0), (size_t)0, ((void*)0), VAR_4);
   FUNC_0("host.hostname", ((void*)0), (size_t)0, ((void*)0),
       VAR_4);
   FUNC_0("path", ((void*)0), (size_t)0, ((void*)0), VAR_4);
   FUNC_0("name", ((void*)0), (size_t)0, ((void*)0), VAR_4);
   FUNC_0("dying", ((void*)0), (size_t)0, ((void*)0), VAR_4);
   FUNC_0("cpuset.id", ((void*)0), (size_t)0, ((void*)0), VAR_4);
  } else {
   VAR_32 |= VAR_5;
   if (VAR_32 & VAR_7)
    FUNC_0("name", ((void*)0), (size_t)0, ((void*)0), VAR_4);
   else
    FUNC_0("jid", ((void*)0), (size_t)0, ((void*)0), VAR_4);





   FUNC_0("host.hostname", ((void*)0), (size_t)0, ((void*)0),
       VAR_4);
   FUNC_0("path", ((void*)0), (size_t)0, ((void*)0), VAR_4);
  }
 } else {
  VAR_32 &= ~VAR_11;
  while (VAR_18 < VAR_21)
   FUNC_0(VAR_22[VAR_18++], ((void*)0), (size_t)0, ((void*)0),
       VAR_4);
 }

 if (VAR_32 & VAR_10) {

  for (VAR_28 = 0; VAR_28 < VAR_16; VAR_28++) {
   if ((VAR_20[VAR_28].jp_flags & VAR_4) &&
       (VAR_23 = FUNC_6(VAR_20[VAR_28].jp_name, '.'))) {
    VAR_26 = FUNC_1((VAR_23 - VAR_20[VAR_28].jp_name) + 1);
    FUNC_7(VAR_26, VAR_20[VAR_28].jp_name,
        (VAR_23 - VAR_20[VAR_28].jp_name) + 1);
    VAR_19[VAR_28] = FUNC_0(VAR_26,
        ((void*)0), (size_t)0, ((void*)0), VAR_3);
   }
  }
 }


 if (VAR_30 != 0)
  FUNC_0("jid", &VAR_30, sizeof(VAR_30), ((void*)0), 0);
 else if (VAR_25 != ((void*)0))
  FUNC_0("name", VAR_25, FUNC_8(VAR_25), ((void*)0), 0);
 else
  FUNC_0("lastjid", &VAR_31, sizeof(VAR_31), ((void*)0), 0);


 if (VAR_32 & VAR_11) {
  FUNC_12("{T:/%3s}{T:JID}{P:  }{T:Hostname}{Pd:/%22s}{T:Path}\n",
          "", "");
  FUNC_12("{P:/%8s}{T:Name}{Pd:/%26s}{T:State}\n", "", "");
  FUNC_12("{P:/%8s}{T:CPUSetID}\n", "");
  FUNC_12("{P:/%8s}{T:IP Address(es)}\n", "");
 }
 else if (VAR_32 & VAR_5)
  if (VAR_32 & VAR_7)
   FUNC_12("{P: }{T:JID/%-15s}{P: }{T:IP Address/%-15s}"
           "{P: }{T:Hostname/%-29s}{P: }{T:Path}\n");
  else
   FUNC_12("{T:JID/%6s}{P:  }{T:IP Address}{P:/%6s}"
           "{T:Hostname}{P:/%22s}{T:Path}\n", "", "");
 else if (VAR_32 & VAR_6) {
  for (VAR_28 = VAR_33 = 0; VAR_28 < VAR_16; VAR_28++)
   if (VAR_20[VAR_28].jp_flags & VAR_4) {
    if (VAR_33)
     FUNC_12("{P: }");
    else
     VAR_33 = 1;
    FUNC_12(VAR_20[VAR_28].jp_name);
   }
  FUNC_12("{P:\n}");
 }

 FUNC_15("jail-information");
 FUNC_16("jail");

 if (VAR_30 != 0 || VAR_25 != ((void*)0)) {
  if (FUNC_5(VAR_32, VAR_29) < 0)
   FUNC_13(1, "%s", VAR_15);
 } else {
  for (VAR_31 = 0;
       (VAR_31 = FUNC_5(VAR_32, VAR_29)) >= 0; )
   ;
  if (VAR_12 != 0 && VAR_12 != VAR_0)
   FUNC_13(1, "%s", VAR_15);
 }
 FUNC_11("jail");
 FUNC_10("jail-information");
 FUNC_14();
 return (0);
}
