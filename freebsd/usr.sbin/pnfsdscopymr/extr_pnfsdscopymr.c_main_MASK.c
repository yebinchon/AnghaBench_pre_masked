
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct statfs {char* f_fstypename; char* f_mntonname; int f_mntfromname; } ;
struct stat {int st_mode; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct sockaddr_in6 {int sin6_addr; TYPE_1__ sin_addr; } ;
struct sockaddr_in {int sin6_addr; TYPE_1__ sin_addr; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {scalar_t__ sin_family; TYPE_2__ sin_addr; } ;
struct pnfsdsfile {TYPE_4__ dsf_sin6; TYPE_3__ dsf_sin; } ;
struct nfsd_pnfsd_args {char* dspath; char* curdspath; char* mdspath; int op; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; struct addrinfo* ai_next; int ai_addr; void* ai_socktype; } ;
typedef int ssize_t ;
typedef int sin6 ;
typedef int sin ;
typedef int mirrorlevel ;
typedef int host ;
typedef int hints ;
typedef int dsfile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,struct pnfsdsfile*,int) ;
 int FUNC_6 (struct addrinfo*) ;
 scalar_t__ FUNC_7 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char**,char*,int ,int *) ;
 int VAR_12 ;
 int FUNC_10 (struct sockaddr_in6*,int ,int) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 int FUNC_12 (int ,struct nfsd_pnfsd_args*) ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 scalar_t__ FUNC_14 (char*,struct statfs*) ;
 char* FUNC_15 (char*,char) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (char*,int*,size_t*,int *,int ) ;
 int FUNC_19 () ;

int
FUNC_20(int VAR_15, char *VAR_16[])
{
 struct nfsd_pnfsd_args VAR_17;
 struct pnfsdsfile VAR_18[VAR_5];
 struct stat VAR_19;
 struct statfs VAR_20;
 struct addrinfo VAR_21, *VAR_22, *VAR_23;
 struct sockaddr_in VAR_24;
 struct sockaddr_in6 VAR_25;
 ssize_t VAR_26, VAR_27;
 size_t VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37;
 char VAR_38[VAR_4 + VAR_7 + 2], *VAR_39;

 if (FUNC_8() != 0)
  FUNC_3(1, "Must be run as root/su");

 VAR_35 = VAR_33 = 0;
 VAR_17.dspath = VAR_17.curdspath = ((void*)0);
 while ((VAR_29 = FUNC_9(VAR_15, VAR_16, "m:r:", VAR_12, ((void*)0))) != -1) {
  switch (VAR_29) {
  case 'm':

   if (VAR_35 != 0)
    FUNC_3(1, "-r and -m are mutually exclusive");
   VAR_33 = 1;
   VAR_17.curdspath = VAR_13;
   break;
  case 'r':

   if (VAR_33 != 0)
    FUNC_3(1, "-r and -m are mutually exclusive");
   VAR_35 = 1;
   VAR_17.dspath = VAR_13;
   break;
  default:
   FUNC_19();
  }
 }
 VAR_15 -= VAR_14;
 VAR_16 += VAR_14;
 if (VAR_33 != 0) {
  if (VAR_15 != 2)
   FUNC_19();
  VAR_17.dspath = *VAR_16++;
 } else if (VAR_15 != 1)
  FUNC_19();


 VAR_28 = sizeof(VAR_37);
 VAR_36 = FUNC_18("vfs.nfs.pnfsmirror", &VAR_37, &VAR_28,
     ((void*)0), 0);
 if (VAR_36 < 0)
  FUNC_3(1, "Can't get vfs.nfs.pnfsmirror");

 if (VAR_17.dspath != ((void*)0) && VAR_17.curdspath != ((void*)0) &&
     FUNC_16(VAR_17.dspath, VAR_17.curdspath) == 0)
  FUNC_3(1, "Can't migrate to same server");





 VAR_26 = FUNC_5(*VAR_16, VAR_3,
     "pnfsd.dsfile", VAR_18, sizeof(VAR_18));
 VAR_34 = VAR_26 / sizeof(struct pnfsdsfile);
 VAR_27 = VAR_34 * sizeof(struct pnfsdsfile);
 if (VAR_34 < 1 || VAR_26 != VAR_27)
  FUNC_3(1, "Can't get extattr pnfsd.dsfile for %s", *VAR_16);


 VAR_31 = 0;
 for (VAR_32 = 0; VAR_32 < VAR_34; VAR_32++) {
  if (VAR_18[VAR_32].dsf_sin.sin_family == VAR_0 &&
      VAR_18[VAR_32].dsf_sin.sin_addr.s_addr == 0)
   VAR_31 = 1;
 }


 if (VAR_35 == 0 && VAR_33 == 0 && (VAR_37 < 2 ||
     (VAR_31 == 0 && VAR_34 >= VAR_37) ||
     (VAR_31 != 0 && VAR_34 > VAR_37)))
  FUNC_4(0);


 if (VAR_35 != 0 && (VAR_31 == 0 || VAR_37 < 2 ||
     VAR_34 < 2 || VAR_34 > VAR_37))
  FUNC_4(0);


 if (VAR_17.dspath != ((void*)0)) {

  if (FUNC_13(VAR_17.dspath, &VAR_19) < 0)
   FUNC_3(1, "Can't stat %s", VAR_17.dspath);
  if (!FUNC_1(VAR_19.st_mode))
   FUNC_3(1, "%s is not a directory", VAR_17.dspath);
  if (FUNC_14(VAR_17.dspath, &VAR_20) < 0)
   FUNC_3(1, "Can't fsstat %s", VAR_17.dspath);
  if (FUNC_16(VAR_20.f_fstypename, "nfs") != 0)
   FUNC_3(1, "%s is not an NFS mount", VAR_17.dspath);
  if (FUNC_16(VAR_20.f_mntonname, VAR_17.dspath) != 0)
   FUNC_3(1, "%s is not the mounted-on dir for the new DS",
       VAR_17.dspath);





  FUNC_17(VAR_38, VAR_20.f_mntfromname, sizeof(VAR_38));
  VAR_39 = FUNC_15(VAR_38, ':');
  if (VAR_39 == ((void*)0))
   FUNC_3(1, "No <host>: in mount %s", VAR_38);
  *VAR_39 = '\0';
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.ai_family = VAR_8;
  VAR_21.ai_socktype = VAR_10;
  if (FUNC_7(VAR_38, ((void*)0), &VAR_21, &VAR_22) != 0)
   FUNC_3(1, "Can't get address for %s", VAR_38);
  for (VAR_32 = 0; VAR_32 < VAR_34; VAR_32++) {
   VAR_23 = VAR_22;
   while (VAR_23 != ((void*)0)) {
    if (VAR_18[VAR_32].dsf_sin.sin_family ==
        VAR_23->ai_family) {





     if (VAR_23->ai_family == VAR_0 &&
         VAR_23->ai_addrlen >= sizeof(VAR_24)) {
      FUNC_10(&VAR_24, VAR_23->ai_addr,
          sizeof(VAR_24));
      if (VAR_24.sin_addr.s_addr ==
          VAR_18[VAR_32].dsf_sin.sin_addr.s_addr)
       FUNC_4(0);
     } else if (VAR_23->ai_family ==
         VAR_1 && VAR_23->ai_addrlen >=
         sizeof(VAR_25)) {
      FUNC_10(&VAR_25, VAR_23->ai_addr,
          sizeof(VAR_25));
      if (FUNC_0(&VAR_25,
          &VAR_18[VAR_32].dsf_sin6.sin6_addr))
       FUNC_4(0);
     }
    }
    VAR_23 = VAR_23->ai_next;
   }
  }
  FUNC_6(VAR_22);
 }


 if (VAR_17.curdspath != ((void*)0)) {

  if (FUNC_13(VAR_17.curdspath, &VAR_19) < 0)
   FUNC_3(1, "Can't stat %s", VAR_17.curdspath);
  if (!FUNC_1(VAR_19.st_mode))
   FUNC_3(1, "%s is not a directory", VAR_17.curdspath);
  if (FUNC_14(VAR_17.curdspath, &VAR_20) < 0)
   FUNC_3(1, "Can't fsstat %s", VAR_17.curdspath);
  if (FUNC_16(VAR_20.f_fstypename, "nfs") != 0)
   FUNC_3(1, "%s is not an NFS mount", VAR_17.curdspath);
  if (FUNC_16(VAR_20.f_mntonname, VAR_17.curdspath) != 0)
   FUNC_3(1, "%s is not the mounted-on dir of the cur DS",
       VAR_17.curdspath);





  FUNC_17(VAR_38, VAR_20.f_mntfromname, sizeof(VAR_38));
  VAR_39 = FUNC_15(VAR_38, ':');
  if (VAR_39 == ((void*)0))
   FUNC_3(1, "No <host>: in mount %s", VAR_38);
  *VAR_39 = '\0';
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.ai_family = VAR_8;
  VAR_21.ai_socktype = VAR_10;
  if (FUNC_7(VAR_38, ((void*)0), &VAR_21, &VAR_22) != 0)
   FUNC_3(1, "Can't get address for %s", VAR_38);
  VAR_30 = 0;
  for (VAR_32 = 0; VAR_32 < VAR_34 && VAR_30 == 0; VAR_32++) {
   VAR_23 = VAR_22;
   while (VAR_23 != ((void*)0)) {
    if (VAR_18[VAR_32].dsf_sin.sin_family ==
        VAR_23->ai_family) {



     if (VAR_23->ai_family == VAR_0 &&
         VAR_23->ai_addrlen >= sizeof(VAR_24)) {
      FUNC_10(&VAR_24, VAR_23->ai_addr,
          sizeof(VAR_24));
      if (VAR_24.sin_addr.s_addr ==
          VAR_18[VAR_32].dsf_sin.sin_addr.s_addr) {
       VAR_30 = 1;
       break;
      }
     } else if (VAR_23->ai_family ==
         VAR_1 && VAR_23->ai_addrlen >=
         sizeof(VAR_25)) {
      FUNC_10(&VAR_25, VAR_23->ai_addr,
          sizeof(VAR_25));
      if (FUNC_0(&VAR_25,
          &VAR_18[VAR_32].dsf_sin6.sin6_addr)) {
       VAR_30 = 1;
       break;
      }
     }
    }
    VAR_23 = VAR_23->ai_next;
   }
  }
  FUNC_6(VAR_22);




  if (VAR_30 == 0)
   FUNC_4(0);
 }


 VAR_17.op = VAR_9;
 VAR_17.mdspath = *VAR_16;
 VAR_36 = FUNC_12(VAR_6, &VAR_17);
 if (VAR_36 < 0 && VAR_11 != VAR_2)
  FUNC_2(1, "Copymr failed for file %s", *VAR_16);
 FUNC_4(0);
}
