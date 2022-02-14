
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct dirent {char* d_name; } ;
struct _dom_binding {int dom_lockfd; int dom_default; struct _dom_binding* dom_pnext; scalar_t__ dom_alive; int dom_vers; int dom_domain; } ;
typedef int DIR ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 () ;
 int FUNC_2 (struct _dom_binding*) ;
 int FUNC_3 (struct _dom_binding*,int) ;
 int FUNC_4 () ;
 int VAR_26 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 char* VAR_27 ;
 int VAR_28 ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ VAR_29 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int) ;
 int VAR_30 ;
 int FUNC_10 (int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (struct _dom_binding*) ;
 scalar_t__ FUNC_13 (int *,int ,int ) ;
 struct _dom_binding* FUNC_14 (int) ;
 int FUNC_15 (int ,int,int) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (char*,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_31 ;
 struct dirent* FUNC_19 (int *) ;
 int VAR_32 ;
 int FUNC_20 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int ,char*,int) ;
 scalar_t__ FUNC_25 (char*) ;
 int VAR_33 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ,int ,int ,int ) ;
 int * FUNC_28 (int ,int ,int ) ;
 int * FUNC_29 (int ) ;
 int FUNC_30 (int ,char*) ;
 int * VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int FUNC_31 (char*) ;
 int FUNC_32 (char*,char*) ;
 int FUNC_33 (char**) ;
 int VAR_37 ;
 int FUNC_34 (char*) ;
 struct _dom_binding* VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

int
FUNC_35(int VAR_43, char *VAR_44[])
{
 struct timeval VAR_45;
 int VAR_46;
 DIR *VAR_47;
 struct dirent *VAR_48;
 struct _dom_binding *VAR_49, *VAR_50;


 if ((VAR_40 = (FUNC_15(VAR_19, VAR_14|VAR_13, 0444))) == -1)
  FUNC_7(1, "%s", VAR_19);

 if (FUNC_10(VAR_40, VAR_5|VAR_6) == -1 && VAR_29 == VAR_2)
  FUNC_8(1, "another ypbind is already running. Aborting");


 FUNC_33(&VAR_27);
 if (VAR_27[0] == '\0')
  FUNC_8(1, "domainname not set. Aborting");

 for (VAR_46 = 1; VAR_46<VAR_43; VAR_46++) {
  if (FUNC_23("-ypset", VAR_44[VAR_46]) == 0)
   VAR_42 = VAR_23;
  else if (FUNC_23("-ypsetme", VAR_44[VAR_46]) == 0)
          VAR_42 = VAR_24;
  else if (FUNC_23("-s", VAR_44[VAR_46]) == 0)
          VAR_41++;
  else if (FUNC_23("-S", VAR_44[VAR_46]) == 0 && VAR_43 > VAR_46)
   FUNC_34(VAR_44[++VAR_46]);
  else if (FUNC_23("-m", VAR_44[VAR_46]) == 0)
   VAR_37++;
  else
   FUNC_8(1, "unknown option: %s", VAR_44[VAR_46]);
 }

 if (FUNC_25(VAR_27) > VAR_22)
  FUNC_32("truncating domain name %s", VAR_27);



 if ((VAR_47 = FUNC_16(VAR_0)) != ((void*)0)) {
  char VAR_51[VAR_11];
  while ((VAR_48 = FUNC_19(VAR_47)) != ((void*)0))
   if (FUNC_23(VAR_48->d_name, ".") &&
       FUNC_23(VAR_48->d_name, "..")) {
    FUNC_22(VAR_51,"%s/%s",VAR_0,VAR_48->d_name);
    FUNC_31(VAR_51);
   }
  FUNC_5(VAR_47);
 }






 FUNC_18(VAR_20, VAR_21);

 VAR_36 = FUNC_29(VAR_16);
 if (VAR_36 == ((void*)0))
  FUNC_8(1, "cannot create udp service");
 if (!FUNC_27(VAR_36, VAR_20, VAR_21, VAR_39,
     VAR_4))
  FUNC_8(1, "unable to register (YPBINDPROG, YPBINDVERS, udp)");

 VAR_34 = FUNC_28(VAR_16, 0, 0);
 if (VAR_34 == ((void*)0))
  FUNC_8(1, "cannot create tcp service");

 if (!FUNC_27(VAR_34, VAR_20, VAR_21, VAR_39,
     VAR_3))
  FUNC_8(1, "unable to register (YPBINDPROG, YPBINDVERS, tcp)");


 VAR_38 = FUNC_14(sizeof *VAR_38);
 if (VAR_38 == ((void*)0))
  FUNC_8(1, "malloc");
 FUNC_3(VAR_38, sizeof *VAR_38);
 FUNC_24(VAR_38->dom_domain, VAR_27, sizeof VAR_38->dom_domain);
 VAR_38->dom_vers = VAR_25;
 VAR_38->dom_alive = 0;
 VAR_38->dom_lockfd = -1;
 VAR_38->dom_default = 1;
 VAR_28++;

 FUNC_21(VAR_17, VAR_32);
 FUNC_21(VAR_18, VAR_35);

 VAR_31 = FUNC_11();

 FUNC_17(VAR_44[0], VAR_8, VAR_7);

 if (FUNC_13(((void*)0), 0, VAR_10) != 0)
  FUNC_30(VAR_9, "madvise(): %m");


 FUNC_2(VAR_38);

 while (1) {
  VAR_30 = VAR_33;

  VAR_45.tv_sec = 60;
  VAR_45.tv_usec = 0;

  switch (FUNC_20(FUNC_1(), &VAR_30, ((void*)0), ((void*)0), &VAR_45)) {
  case 0:
   FUNC_4();
   break;
  case -1:
   if (VAR_29 != VAR_1)
    FUNC_30(VAR_9, "select: %m");
   break;
  default:
   for (VAR_49 = VAR_38; VAR_49; VAR_49 = VAR_50) {
    VAR_50 = VAR_49->dom_pnext;
    if (VAR_15 > 0 && FUNC_0(VAR_15, &VAR_30)) {
     FUNC_12(VAR_49);
     if (VAR_26 == (VAR_12 - 1))
      FUNC_4();
    }
   }
   FUNC_26(&VAR_30);
   break;
  }
 }


 FUNC_9(1);
}
