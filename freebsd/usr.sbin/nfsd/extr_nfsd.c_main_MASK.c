
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfsd_nfsd_args {int mirrorcnt; scalar_t__ addrlen; int * addr; } ;
struct nfsd_addsock_args {int sock; int namelen; struct nfsd_addsock_args* name; } ;
struct netconfig {int dummy; } ;
struct netbuf {int maxlen; int len; int buf; } ;
struct addrinfo {void* ai_family; void* ai_socktype; void* ai_protocol; int ai_addrlen; int ai_addr; void* ai_flags; } ;
typedef int socklen_t ;
typedef int pid_t ;
typedef int peer ;
typedef int on ;
typedef int nfs_minvers ;
typedef int fd_set ;
typedef struct nfsd_addsock_args* caddr_t ;
struct TYPE_3__ {char* name; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 void* FUNC_4 (char*) ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int VAR_45 ;
 int* VAR_46 ;
 int VAR_47 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_48 ;
 int FUNC_8 (int,char*,...) ;
 int VAR_49 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (struct addrinfo*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 struct netconfig* FUNC_15 (char*) ;
 int FUNC_16 (int,char**,char*,TYPE_1__*,int*) ;
 char* VAR_50 ;
 char* VAR_51 ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (int,int) ;
 TYPE_1__* VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int FUNC_20 (struct addrinfo*,int ,int) ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (int) ;
 int VAR_58 ;
 scalar_t__ FUNC_23 (int,struct nfsd_addsock_args*) ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_24 (scalar_t__*,int *) ;
 int FUNC_25 (char*,int,int ) ;
 char* VAR_61 ;
 scalar_t__ VAR_62 ;
 int FUNC_26 (char*,struct nfsd_nfsd_args*) ;
 char** FUNC_27 (char**,int) ;
 int VAR_63 ;
 int FUNC_28 (int ,int,struct netconfig*,struct netbuf*) ;
 int FUNC_29 (int,int *,int *,int *,int *) ;
 int FUNC_30 (void*) ;
 scalar_t__ FUNC_31 (struct addrinfo**,char*,struct addrinfo) ;
 int FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (int,int ,int ,...) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (void*,void*,void*) ;
 scalar_t__ VAR_64 ;
 int FUNC_36 (int,struct nfsd_nfsd_args*,char const*) ;
 int FUNC_37 (char const*,char*) ;
 char* FUNC_38 (char*) ;
 int FUNC_39 (char*) ;
 int FUNC_40 (char*,int*,size_t*,int *,int ) ;
 int FUNC_41 (int ,char*,...) ;
 int FUNC_42 () ;
 int FUNC_43 () ;
 int FUNC_44 (char*,...) ;

int
FUNC_45(int VAR_65, char **VAR_66)
{
 struct nfsd_addsock_args VAR_67;
 struct addrinfo *VAR_68, *VAR_69, *VAR_70, *VAR_71, VAR_72;
 struct netconfig *VAR_73, *VAR_74, *VAR_75, *VAR_76;
 struct netbuf VAR_77, VAR_78, VAR_79, VAR_80;
 struct sockaddr_storage VAR_81;
 fd_set VAR_82, VAR_83;
 int VAR_84, VAR_85, VAR_86, VAR_87, VAR_88;
 socklen_t VAR_89;
 int VAR_90 = 1, VAR_91, VAR_92, VAR_93;
 int VAR_94, VAR_95, VAR_96, VAR_97;
 int VAR_98, VAR_99, VAR_100, VAR_101;
 int VAR_102, VAR_103, VAR_104, VAR_105;
 int VAR_106;
 int VAR_107 = 0;
 int VAR_108 = VAR_26;
 size_t VAR_109;
 const char *VAR_110;
 char **VAR_111 = ((void*)0);
 pid_t VAR_112;
 struct nfsd_nfsd_args VAR_113;
 const char *VAR_114 = ((void*)0);

 VAR_113.mirrorcnt = 1;
 VAR_113.addr = ((void*)0);
 VAR_113.addrlen = 0;
 VAR_58 = VAR_3;
 VAR_91 = VAR_92 = VAR_96 = VAR_87 = 0;
 VAR_103 = VAR_98 = VAR_85 = VAR_102 = 0;
 VAR_50 = "ah:n:rdtuep:m:V:";
 VAR_51 =
     "usage:\n"
     "  nfsd [-ardtue] [-h bindip]\n"
     "       [-n numservers] [--minthreads #] [--maxthreads #]\n"
     "       [-p/--pnfs dsserver0:/dsserver0-mounted-on-dir,...,"
     "dsserverN:/dsserverN-mounted-on-dir] [-m mirrorlevel]\n"
     "       [-V virtual_hostname]\n";
 while ((VAR_84 = FUNC_16(VAR_65, VAR_66, VAR_50, VAR_52,
      &VAR_107)) != -1)
  switch (VAR_84) {
  case 'V':
   if (FUNC_39(VAR_61) <= VAR_17)
    VAR_114 = VAR_61;
   else
    FUNC_44("Virtual host name (%s) is too long",
        VAR_61);
   break;
  case 'a':
   VAR_103 = 1;
   break;
  case 'n':
   FUNC_30(FUNC_4(VAR_61));
   break;
  case 'h':
   VAR_102++;
   VAR_111 = FUNC_27(VAR_111,sizeof(char *)*VAR_102);
   if (VAR_111 == ((void*)0))
    FUNC_9(1, "Out of memory");
   VAR_111[VAR_102-1] = FUNC_38(VAR_61);
   if (VAR_111[VAR_102-1] == ((void*)0))
    FUNC_9(1, "Out of memory");
   break;
  case 'r':
   VAR_92 = 1;
   break;
  case 'd':
   VAR_91 = 1;
   break;
  case 't':
   VAR_96 = 1;
   break;
  case 'u':
   VAR_98 = 1;
   break;
  case 'e':

   break;
  case 'p':

   FUNC_26(VAR_61, &VAR_113);
   break;
  case 'm':

   VAR_86 = FUNC_4(VAR_61);
   if (VAR_86 < 2 || VAR_86 > VAR_18)
    FUNC_9(1, "Mirror level out of range 2<-->%d",
        VAR_18);
   VAR_113.mirrorcnt = VAR_86;
   break;
  case 0:
   VAR_110 = VAR_52[VAR_107].name;
   if (!FUNC_37(VAR_110, "minthreads")) {
    VAR_56 = FUNC_4(VAR_61);
   } else if (!FUNC_37(VAR_110, "maxthreads")) {
    VAR_54 = FUNC_4(VAR_61);
   }
   break;
  default:
  case '?':
   FUNC_43();
  }
 if (!VAR_96 && !VAR_98)
  VAR_98 = 1;
 VAR_66 += VAR_62;
 VAR_65 -= VAR_62;
 if (VAR_57 && VAR_55 && VAR_56 > VAR_54)
  FUNC_9(VAR_8,
      "error: minthreads(%d) can't be greater than "
      "maxthreads(%d)", VAR_56, VAR_54);





 if (VAR_65 > 1)
  FUNC_43();
 if (VAR_65 == 1)
  FUNC_30(FUNC_4(VAR_66[0]));





 if (FUNC_21("nfsd") < 0) {

  if (FUNC_18("nfsd") < 0 || FUNC_21("nfsd") < 0)
   FUNC_9(1, "NFS server is not available");
 }

 VAR_95 = 1;
 VAR_101 = FUNC_35(VAR_1, VAR_38, VAR_11);
 if (VAR_101 == -1) {
  if (VAR_49 != VAR_7 && VAR_49 != VAR_4)
   FUNC_8(1, "socket");
  VAR_95 = 0;
 } else if (FUNC_15("udp6") == ((void*)0) ||
  FUNC_15("tcp6") == ((void*)0)) {
  VAR_95 = 0;
 }
 if (VAR_101 != -1)
  FUNC_6(VAR_101);

 if (VAR_102 == 0 || VAR_103) {
  VAR_102++;
  VAR_111 = FUNC_27(VAR_111,sizeof(char *)*VAR_102);
  if (VAR_111 == ((void*)0))
   FUNC_9(1, "Out of memory");
  VAR_111[VAR_102-1] = FUNC_38("*");
  if (VAR_111[VAR_102-1] == ((void*)0))
   FUNC_9(1, "Out of memory");
 }

 VAR_109 = sizeof(VAR_108);
 VAR_100 = FUNC_40("vfs.nfsd.server_min_nfsvers", &VAR_108,
     &VAR_109, ((void*)0), 0);
 if (VAR_100 != 0 || VAR_108 < VAR_26 || VAR_108 > VAR_28) {
  FUNC_44("sysctlbyname(vfs.nfsd.server_min_nfsvers) failed,"
      " defaulting to NFSv2");
  VAR_108 = VAR_26;
 }

 if (VAR_91) {
  FUNC_42();
  FUNC_10 (0);
 }
 if (VAR_92) {
  if (VAR_98) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_68);
   if (VAR_99 != 0)
    FUNC_8(1, "getaddrinfo udp: %s", FUNC_13(VAR_99));
   VAR_73 = FUNC_15("udp");
   if (VAR_73 == ((void*)0))
    FUNC_8(1, "getnetconfigent udp failed");
   VAR_77.buf = VAR_68->ai_addr;
   VAR_77.len = VAR_77.maxlen = VAR_68->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_73,
        &VAR_77))
     FUNC_8(1, "rpcb_set udp failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_73,
        &VAR_77))
     FUNC_8(1, "rpcb_set udp failed");
   FUNC_12(VAR_68);
  }
  if (VAR_98 && VAR_95) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_70);
   if (VAR_99 != 0)
    FUNC_8(1, "getaddrinfo udp6: %s", FUNC_13(VAR_99));
   VAR_75 = FUNC_15("udp6");
   if (VAR_75 == ((void*)0))
    FUNC_8(1, "getnetconfigent udp6 failed");
   VAR_79 = VAR_70->ai_addr;
   VAR_79 = VAR_79 = VAR_70->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_75,
        &VAR_79))
     FUNC_8(1, "rpcb_set udp6 failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_75,
        &VAR_79))
     FUNC_8(1, "rpcb_set udp6 failed");
   FUNC_12(VAR_70);
  }
  if (VAR_96) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_69);
   if (VAR_99 != 0)
    FUNC_8(1, "getaddrinfo tcp: %s", FUNC_13(VAR_99));
   VAR_74 = FUNC_15("tcp");
   if (VAR_74 == ((void*)0))
    FUNC_8(1, "getnetconfigent tcp failed");
   VAR_78.buf = VAR_69->ai_addr;
   VAR_78.len = VAR_78.maxlen = VAR_69->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_74,
        &VAR_78))
     FUNC_8(1, "rpcb_set tcp failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_74,
        &VAR_78))
     FUNC_8(1, "rpcb_set tcp failed");
   FUNC_12(VAR_69);
  }
  if (VAR_96 && VAR_95) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_71);
   if (VAR_99 != 0)
    FUNC_8(1, "getaddrinfo tcp6: %s", FUNC_13(VAR_99));
   VAR_76 = FUNC_15("tcp6");
   if (VAR_76 == ((void*)0))
    FUNC_8(1, "getnetconfigent tcp6 failed");
   VAR_80 = VAR_71->ai_addr;
   VAR_80 = VAR_80 = VAR_71->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_76,
        &VAR_80))
     FUNC_8(1, "rpcb_set tcp6 failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_76,
       &VAR_80))
     FUNC_8(1, "rpcb_set tcp6 failed");
   FUNC_12(VAR_71);
  }
  FUNC_10 (0);
 }
 if (VAR_48 == 0) {
  FUNC_7(0, 0);
  (void)FUNC_34(VAR_30, VAR_37);
  (void)FUNC_34(VAR_31, VAR_37);






  (void)FUNC_34(VAR_34, VAR_37);
  (void)FUNC_34(VAR_32, VAR_37);
 }
 (void)FUNC_34(VAR_33, VAR_60);
 (void)FUNC_34(VAR_29, VAR_63);
 (void)FUNC_34(VAR_36, VAR_43);

 FUNC_25("nfsd", VAR_16 | (VAR_48 ? VAR_15 : 0), VAR_13);
 FUNC_24(&VAR_64, &VAR_44);
 if (VAR_64 < 0) {
  FUNC_41(VAR_14, "Can't open %s: %m\n", VAR_19);
  FUNC_10(1);
 }

 FUNC_23(VAR_20, ((void*)0));
 if (FUNC_23(VAR_24, (caddr_t)&VAR_64) < 0) {
  FUNC_41(VAR_14, "Can't read stable storage file: %m\n");
  FUNC_10(1);
 }
 VAR_106 = VAR_22;
 VAR_59 = VAR_23 | VAR_21;

 if (VAR_96) {





  VAR_53 = FUNC_17();
  VAR_112 = FUNC_11();
  if (VAR_112 == -1) {
   FUNC_41(VAR_14, "fork: %m");
   FUNC_22(1);
  }
  if (VAR_112) {
   VAR_46[0] = VAR_112;
  } else {
   (void)FUNC_34(VAR_35, VAR_45);
   FUNC_32("server");
   FUNC_36(0, &VAR_113, VAR_114);
  }
 }

 (void)FUNC_34(VAR_35, VAR_47);
 FUNC_2(&VAR_83);

 VAR_105 = 0;

 if (VAR_98) {
  VAR_104 = 0;
  for (VAR_86 = 0; VAR_86 < VAR_102; VAR_86++) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   if (FUNC_31(&VAR_68, VAR_111[VAR_86], VAR_72) == 0) {
    VAR_104 = 1;
    VAR_105++;
    if ((VAR_93 = FUNC_35(VAR_68->ai_family,
        VAR_68->ai_socktype,
        VAR_68->ai_protocol)) < 0) {
     FUNC_41(VAR_14,
         "can't create udp socket");
     FUNC_22(1);
    }
    if (FUNC_5(VAR_93, VAR_68->ai_addr,
        VAR_68->ai_addrlen) < 0) {
     FUNC_41(VAR_14,
         "can't bind udp addr %s: %m",
         VAR_111[VAR_86]);
     FUNC_22(1);
    }
    FUNC_12(VAR_68);
    VAR_67.sock = VAR_93;
    VAR_67.name = ((void*)0);
    VAR_67.namelen = 0;
    if (FUNC_23(VAR_106, &VAR_67) < 0) {
     FUNC_41(VAR_14, "can't Add UDP socket");
     FUNC_22(1);
    }
    (void)FUNC_6(VAR_93);
   }
  }
  if (VAR_104 == 1) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_68);
   if (VAR_99 != 0) {
    FUNC_41(VAR_14, "getaddrinfo udp: %s",
       FUNC_13(VAR_99));
    FUNC_22(1);
   }
   VAR_73 = FUNC_15("udp");
   if (VAR_73 == ((void*)0))
    FUNC_8(1, "getnetconfigent udp failed");
   VAR_77.buf = VAR_68->ai_addr;
   VAR_77.len = VAR_77.maxlen = VAR_68->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_73,
        &VAR_77))
     FUNC_8(1, "rpcb_set udp failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_73,
        &VAR_77))
     FUNC_8(1, "rpcb_set udp failed");
   FUNC_12(VAR_68);
  }
 }


 if (VAR_98 && VAR_95) {
  VAR_104 = 0;
  for (VAR_86 = 0; VAR_86 < VAR_102; VAR_86++) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   if (FUNC_31(&VAR_70, VAR_111[VAR_86], VAR_72) == 0) {
    VAR_104 = 1;
    VAR_105++;
    if ((VAR_93 = FUNC_35(VAR_70->ai_family,
        VAR_70->ai_socktype,
        VAR_70->ai_protocol)) < 0) {
     FUNC_41(VAR_14,
      "can't create udp6 socket");
     FUNC_22(1);
    }
    if (FUNC_33(VAR_93, VAR_9, VAR_12,
        &VAR_90, sizeof VAR_90) < 0) {
     FUNC_41(VAR_14,
         "can't set v6-only binding for "
         "udp6 socket: %m");
     FUNC_22(1);
    }
    if (FUNC_5(VAR_93, VAR_70->ai_addr,
        VAR_70->ai_addrlen) < 0) {
     FUNC_41(VAR_14,
         "can't bind udp6 addr %s: %m",
         VAR_111[VAR_86]);
     FUNC_22(1);
    }
    FUNC_12(VAR_70);
    VAR_67.sock = VAR_93;
    VAR_67.name = ((void*)0);
    VAR_67.namelen = 0;
    if (FUNC_23(VAR_106, &VAR_67) < 0) {
     FUNC_41(VAR_14,
         "can't add UDP6 socket");
     FUNC_22(1);
    }
    (void)FUNC_6(VAR_93);
   }
  }
  if (VAR_104 == 1) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_38;
   VAR_72.ai_protocol = VAR_11;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_70);
   if (VAR_99 != 0) {
    FUNC_41(VAR_14, "getaddrinfo udp6: %s",
       FUNC_13(VAR_99));
    FUNC_22(1);
   }
   VAR_75 = FUNC_15("udp6");
   if (VAR_75 == ((void*)0))
    FUNC_8(1, "getnetconfigent udp6 failed");
   VAR_79 = VAR_70->ai_addr;
   VAR_79 = VAR_79 = VAR_70->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_75,
        &VAR_79))
     FUNC_8(1,
         "rpcb_set udp6 failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_75,
        &VAR_79))
     FUNC_8(1,
         "rpcb_set udp6 failed");
   FUNC_12(VAR_70);
  }
 }


 if (VAR_96) {
  VAR_104 = 0;
  for (VAR_86 = 0; VAR_86 < VAR_102; VAR_86++) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   if (FUNC_31(&VAR_69, VAR_111[VAR_86], VAR_72) == 0) {
    VAR_104 = 1;
    VAR_105++;
    if ((VAR_97 = FUNC_35(VAR_0, VAR_39,
        0)) < 0) {
     FUNC_41(VAR_14,
         "can't create tcp socket");
     FUNC_22(1);
    }
    if (FUNC_33(VAR_97, VAR_40,
        VAR_42,
        (char *)&VAR_90, sizeof(VAR_90)) < 0)
     FUNC_41(VAR_14,
          "setsockopt SO_REUSEADDR: %m");
    if (FUNC_5(VAR_97, VAR_69->ai_addr,
        VAR_69->ai_addrlen) < 0) {
     FUNC_41(VAR_14,
         "can't bind tcp addr %s: %m",
         VAR_111[VAR_86]);
     FUNC_22(1);
    }
    if (FUNC_19(VAR_97, -1) < 0) {
     FUNC_41(VAR_14, "listen failed");
     FUNC_22(1);
    }
    FUNC_12(VAR_69);
    FUNC_1(VAR_97, &VAR_83);
    VAR_87 = VAR_97;
    VAR_85++;
   }
  }
  if (VAR_104 == 1) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_0;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72,
        &VAR_69);
   if (VAR_99 != 0) {
    FUNC_41(VAR_14, "getaddrinfo tcp: %s",
       FUNC_13(VAR_99));
    FUNC_22(1);
   }
   VAR_74 = FUNC_15("tcp");
   if (VAR_74 == ((void*)0))
    FUNC_8(1, "getnetconfigent tcp failed");
   VAR_78.buf = VAR_69->ai_addr;
   VAR_78.len = VAR_78.maxlen = VAR_69->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_74,
        &VAR_78))
     FUNC_8(1, "rpcb_set tcp failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_74,
        &VAR_78))
     FUNC_8(1, "rpcb_set tcp failed");
   FUNC_12(VAR_69);
  }
 }


 if (VAR_96 && VAR_95) {
  VAR_104 = 0;
  for (VAR_86 = 0; VAR_86 < VAR_102; VAR_86++) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   if (FUNC_31(&VAR_71, VAR_111[VAR_86], VAR_72) == 0) {
    VAR_104 = 1;
    VAR_105++;
    if ((VAR_94 = FUNC_35(VAR_71->ai_family,
        VAR_71->ai_socktype,
        VAR_71->ai_protocol)) < 0) {
     FUNC_41(VAR_14,
         "can't create tcp6 socket");
     FUNC_22(1);
    }
    if (FUNC_33(VAR_94, VAR_40,
        VAR_42,
        (char *)&VAR_90, sizeof(VAR_90)) < 0)
     FUNC_41(VAR_14,
         "setsockopt SO_REUSEADDR: %m");
    if (FUNC_33(VAR_94, VAR_9,
        VAR_12, &VAR_90, sizeof VAR_90) < 0) {
     FUNC_41(VAR_14,
     "can't set v6-only binding for tcp6 "
         "socket: %m");
     FUNC_22(1);
    }
    if (FUNC_5(VAR_94, VAR_71->ai_addr,
        VAR_71->ai_addrlen) < 0) {
     FUNC_41(VAR_14,
         "can't bind tcp6 addr %s: %m",
         VAR_111[VAR_86]);
     FUNC_22(1);
    }
    if (FUNC_19(VAR_94, -1) < 0) {
     FUNC_41(VAR_14, "listen failed");
     FUNC_22(1);
    }
    FUNC_12(VAR_71);
    FUNC_1(VAR_94, &VAR_83);
    if (VAR_87 < VAR_94)
     VAR_87 = VAR_94;
    VAR_85++;
   }
  }
  if (VAR_104 == 1) {
   FUNC_20(&VAR_72, 0, sizeof VAR_72);
   VAR_72.ai_flags = VAR_2;
   VAR_72.ai_family = VAR_1;
   VAR_72.ai_socktype = VAR_39;
   VAR_72.ai_protocol = VAR_10;
   VAR_99 = FUNC_14(((void*)0), "nfs", &VAR_72, &VAR_71);
   if (VAR_99 != 0) {
    FUNC_41(VAR_14, "getaddrinfo tcp6: %s",
       FUNC_13(VAR_99));
    FUNC_22(1);
   }
   VAR_76 = FUNC_15("tcp6");
   if (VAR_76 == ((void*)0))
    FUNC_8(1, "getnetconfigent tcp6 failed");
   VAR_80 = VAR_71->ai_addr;
   VAR_80 = VAR_80 = VAR_71->ai_addrlen;
   if (VAR_108 == VAR_26)
    if (!FUNC_28(VAR_25, 2, VAR_76,
        &VAR_80))
     FUNC_8(1, "rpcb_set tcp6 failed");
   if (VAR_108 <= VAR_27)
    if (!FUNC_28(VAR_25, 3, VAR_76,
        &VAR_80))
     FUNC_8(1, "rpcb_set tcp6 failed");
   FUNC_12(VAR_71);
  }
 }

 if (VAR_105 == 0) {
  FUNC_41(VAR_14, "rpcb_set() failed, nothing to do: %m");
  FUNC_22(1);
 }

 if (VAR_96 && VAR_85 == 0) {
  FUNC_41(VAR_14, "tcp connects == 0, nothing to do: %m");
  FUNC_22(1);
 }

 FUNC_32("master");







 if (!VAR_96)
  FUNC_36(1, &VAR_113, VAR_114);





 for (;;) {
  VAR_82 = VAR_83;
  if (VAR_85 > 1) {
   if (FUNC_29(VAR_87 + 1,
       &VAR_82, ((void*)0), ((void*)0), ((void*)0)) < 1) {
    VAR_100 = VAR_49;
    if (VAR_100 == VAR_6)
     continue;
    FUNC_41(VAR_14, "select failed: %m");
    FUNC_22(1);
   }
  }
  for (VAR_97 = 0; VAR_97 <= VAR_87; VAR_97++) {
   if (FUNC_0(VAR_97, &VAR_82)) {
    VAR_89 = sizeof(VAR_81);
    if ((VAR_88 = FUNC_3(VAR_97,
        (struct sockaddr *)&VAR_81, &VAR_89)) < 0) {
     VAR_100 = VAR_49;
     FUNC_41(VAR_14, "accept failed: %m");
     if (VAR_100 == VAR_5 ||
         VAR_100 == VAR_6)
      continue;
     FUNC_22(1);
    }
    if (FUNC_33(VAR_88, VAR_40,
        VAR_41, (char *)&VAR_90, sizeof(VAR_90)) < 0)
     FUNC_41(VAR_14,
         "setsockopt SO_KEEPALIVE: %m");
    VAR_67.sock = VAR_88;
    VAR_67.name = (caddr_t)&VAR_81;
    VAR_67.namelen = VAR_89;
    FUNC_23(VAR_106, &VAR_67);
    (void)FUNC_6(VAR_88);
   }
  }
 }
}
