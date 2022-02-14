
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in6 {scalar_t__ sin_family; scalar_t__ sin6_family; int sin_len; void* sin_port; TYPE_1__ sin_addr; void* sin6_port; int sin6_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin6_family; int sin_len; void* sin_port; TYPE_1__ sin_addr; void* sin6_port; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct pnfsdsfile {int dsf_dir; char* dsf_filename; struct sockaddr_in6 dsf_sin; struct sockaddr_in6 dsf_sin6; int dsf_fh; } ;
struct addrinfo {int ai_addrlen; TYPE_2__* ai_addr; struct addrinfo* ai_next; } ;
typedef int ssize_t ;
typedef void* in_port_t ;
typedef int hostn ;
typedef int fhandle_t ;
typedef int dsfile ;
typedef int adsin6 ;
typedef int adsin ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,int ,char*,struct pnfsdsfile*,int) ;
 int FUNC_5 (char*,int ,char*,struct pnfsdsfile*,int) ;
 int FUNC_6 (char*,int *,int *,struct addrinfo**) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_9 (int,char**,char*,int ,int *) ;
 int VAR_5 ;
 int FUNC_10 (struct sockaddr_in6*,TYPE_2__*,int) ;
 int FUNC_11 (int *,int ,int) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,...) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_8, char *VAR_9[])
{
 struct addrinfo *VAR_10, *VAR_11, *VAR_12;
 struct sockaddr_in *VAR_13, VAR_14;
 struct sockaddr_in6 *VAR_15, VAR_16;
 char VAR_17[2 * VAR_4 + 2], *VAR_18;
 struct pnfsdsfile VAR_19[VAR_3];
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 in_port_t VAR_28;
 ssize_t VAR_29, VAR_30;

 VAR_26 = 0;
 VAR_27 = 0;
 VAR_24 = 0;
 VAR_25 = 0;
 VAR_21 = 0;
 VAR_10 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_18 = ((void*)0);
 while ((VAR_20 = FUNC_9(VAR_8, VAR_9, "c:m:qr:s:z", VAR_5, ((void*)0))) !=
     -1) {
  switch (VAR_20) {
  case 'c':

   if (VAR_27 != 0 || VAR_26 != 0 || VAR_24 != 0 ||
       VAR_12 != ((void*)0) || VAR_10 != ((void*)0))
    FUNC_3(1, "-c, -m, -r, -s and -z are mutually "
        "exclusive and only can be used once");
   FUNC_14(VAR_17, VAR_6, 2 * VAR_4 + 2);
   VAR_18 = FUNC_13(VAR_17, ',');
   if (VAR_18 == ((void*)0))
    FUNC_3(1, "Bad -c argument %s", VAR_17);
   *VAR_18 = '\0';
   if (FUNC_6(VAR_17, ((void*)0), ((void*)0), &VAR_10) != 0)
    FUNC_3(1, "Can't get IP# for %s", VAR_17);
   *VAR_18++ = ',';
   if (FUNC_6(VAR_18, ((void*)0), ((void*)0), &VAR_12) != 0)
    FUNC_3(1, "Can't get IP# for %s", VAR_18);
   break;
  case 'm':

   if (VAR_27 != 0 || VAR_26 != 0 || VAR_24 != 0 ||
       VAR_12 != ((void*)0) || VAR_10 != ((void*)0))
    FUNC_3(1, "-c, -m, -r, -s and -z are mutually "
        "exclusive and only can be used once");
   VAR_24 = FUNC_1(VAR_6);
   if (VAR_24 < 2 || VAR_24 > VAR_3)
    FUNC_3(1, "-m %d out of range", VAR_24);
   break;
  case 'q':
   VAR_25 = 1;
   break;
  case 'r':

   if (VAR_27 != 0 || VAR_26 != 0 || VAR_24 != 0 ||
       VAR_12 != ((void*)0) || VAR_10 != ((void*)0))
    FUNC_3(1, "-c, -m, -r, -s and -z are mutually "
        "exclusive and only can be used once");
   VAR_26 = 1;

   if (FUNC_6(VAR_6, ((void*)0), ((void*)0), &VAR_10) != 0)
    FUNC_3(1, "Can't get IP# for %s", VAR_6);
   break;
  case 's':

   if (VAR_26 != 0 || VAR_24 != 0 || VAR_12 != ((void*)0) ||
       VAR_10 != ((void*)0))
    FUNC_3(1, "-c, -m and -r are mutually exclusive "
        "from use with -s and -z");
   if (FUNC_6(VAR_6, ((void*)0), ((void*)0), &VAR_10) != 0)
    FUNC_3(1, "Can't get IP# for %s", VAR_6);
   break;
  case 'z':
   if (VAR_27 != 0 || VAR_26 != 0 || VAR_24 != 0 ||
       VAR_12 != ((void*)0))
    FUNC_3(1, "-c, -m and -r are mutually exclusive "
        "from use with -s and -z");
   VAR_27 = 1;
   break;
  default:
   FUNC_15();
  }
 }
 VAR_8 -= VAR_7;
 if (VAR_8 != 1)
  FUNC_15();
 VAR_9 += VAR_7;





 VAR_29 = FUNC_4(*VAR_9, VAR_2,
     "pnfsd.dsfile", VAR_19, sizeof(VAR_19));
 VAR_23 = VAR_29 / sizeof(struct pnfsdsfile);
 VAR_30 = VAR_23 * sizeof(struct pnfsdsfile);
 if (VAR_23 < 1 || VAR_29 != VAR_30)
  FUNC_2(1, "Can't get extattr pnfsd.dsfile for %s", *VAR_9);

 if (VAR_25 == 0)
  FUNC_12("%s:\t", *VAR_9);
 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  if (VAR_22 > 0 && VAR_25 == 0)
   FUNC_12("\t");

  if (VAR_27 != 0) {
   if (FUNC_7() != 0)
    FUNC_3(1, "Must be root/su to zerofh");





   VAR_13 = &VAR_19[VAR_22].dsf_sin;
   VAR_15 = &VAR_19[VAR_22].dsf_sin6;
   VAR_11 = VAR_10;
   while (VAR_11 != ((void*)0)) {
    if (VAR_11->ai_addr->sa_family == VAR_0 &&
        VAR_13->sin_family == VAR_0 &&
        VAR_11->ai_addrlen >= sizeof(VAR_14)) {
     FUNC_10(&VAR_14, VAR_11->ai_addr,
         sizeof(VAR_14));
     if (VAR_13->sin_addr.s_addr ==
         VAR_14.sin_addr.s_addr)
      break;
    }
    if (VAR_11->ai_addr->sa_family == VAR_1 &&
        VAR_15->sin6_family == VAR_1 &&
        VAR_11->ai_addrlen >= sizeof(VAR_16)) {
     FUNC_10(&VAR_16, VAR_11->ai_addr,
         sizeof(VAR_16));
     if (FUNC_0(&VAR_15->sin6_addr,
         &VAR_16))
      break;
    }
    VAR_11 = VAR_11->ai_next;
   }
   if (VAR_10 == ((void*)0) || VAR_11 != ((void*)0)) {
    FUNC_11(&VAR_19[VAR_22].dsf_fh, 0, sizeof(fhandle_t));
    VAR_21 = 1;
   }
  }


  if (VAR_26 != 0 && VAR_23 > 1) {
   if (FUNC_7() != 0)
    FUNC_3(1, "Must be root/su to zerods");




   VAR_13 = &VAR_19[VAR_22].dsf_sin;
   VAR_15 = &VAR_19[VAR_22].dsf_sin6;
   VAR_11 = VAR_10;
   while (VAR_11 != ((void*)0)) {
    if (VAR_11->ai_addr->sa_family == VAR_0 &&
        VAR_13->sin_family == VAR_0 &&
        VAR_11->ai_addrlen >= sizeof(VAR_14)) {
     FUNC_10(&VAR_14, VAR_11->ai_addr,
         sizeof(VAR_14));
     if (VAR_13->sin_addr.s_addr ==
         VAR_14.sin_addr.s_addr)
      break;
    }
    if (VAR_11->ai_addr->sa_family == VAR_1 &&
        VAR_15->sin6_family == VAR_1 &&
        VAR_11->ai_addrlen >= sizeof(VAR_16)) {
     FUNC_10(&VAR_16, VAR_11->ai_addr,
         sizeof(VAR_16));
     if (FUNC_0(&VAR_15->sin6_addr,
         &VAR_16))
      break;
    }
    VAR_11 = VAR_11->ai_next;
   }
   if (VAR_11 != ((void*)0)) {
    VAR_13->sin_family = VAR_0;
    VAR_13->sin_len = sizeof(*VAR_13);
    VAR_13->sin_port = 0;
    VAR_13->sin_addr.s_addr = 0;
    VAR_21 = 1;
   }
  }


  if (VAR_12 != ((void*)0)) {
   if (FUNC_7() != 0)
    FUNC_3(1, "Must be root/su to replace the host"
        " addr");




   VAR_13 = &VAR_19[VAR_22].dsf_sin;
   VAR_15 = &VAR_19[VAR_22].dsf_sin6;
   VAR_11 = VAR_10;
   while (VAR_11 != ((void*)0)) {
    if (VAR_11->ai_addr->sa_family == VAR_0 &&
        VAR_13->sin_family == VAR_0 &&
        VAR_11->ai_addrlen >= sizeof(VAR_14)) {
     FUNC_10(&VAR_14, VAR_11->ai_addr,
         sizeof(VAR_14));
     if (VAR_13->sin_addr.s_addr ==
         VAR_14.sin_addr.s_addr)
      break;
    }
    if (VAR_11->ai_addr->sa_family == VAR_1 &&
        VAR_15->sin6_family == VAR_1 &&
        VAR_11->ai_addrlen >= sizeof(VAR_16)) {
     FUNC_10(&VAR_16, VAR_11->ai_addr,
         sizeof(VAR_16));
     if (FUNC_0(&VAR_15->sin6_addr,
         &VAR_16))
      break;
    }
    VAR_11 = VAR_11->ai_next;
   }
   if (VAR_11 != ((void*)0)) {
    if (VAR_13->sin_family == VAR_0)
     VAR_28 = VAR_13->sin_port;
    else
     VAR_28 = VAR_15->sin6_port;





    while (VAR_12->ai_addr->sa_family != VAR_0 &&
        VAR_12->ai_addr->sa_family != VAR_1) {
     VAR_12 = VAR_12->ai_next;
     if (VAR_12 == ((void*)0))
      FUNC_3(1, "Hostname %s has no"
          " IP#", VAR_18);
    }
    if (VAR_12->ai_addr->sa_family == VAR_0) {
     FUNC_10(VAR_13, VAR_12->ai_addr,
         sizeof(*VAR_13));
     VAR_13->sin_port = VAR_28;
    } else if (VAR_12->ai_addr->sa_family ==
        VAR_1) {
     FUNC_10(VAR_15, VAR_12->ai_addr,
         sizeof(*VAR_15));
     VAR_15->sin6_port = VAR_28;
    }
    VAR_21 = 1;
   }
  }

  if (VAR_25 == 0) {

   if (FUNC_8((struct sockaddr *)&VAR_19[VAR_22].dsf_sin,
       VAR_19[VAR_22].dsf_sin.sin_len, VAR_17, sizeof(VAR_17),
       ((void*)0), 0, 0) < 0)
    FUNC_2(1, "Can't get hostname");
   FUNC_12("%s\tds%d/%s", VAR_17, VAR_19[VAR_22].dsf_dir,
       VAR_19[VAR_22].dsf_filename);
  }
 }

 for (VAR_22 = VAR_23; VAR_22 < VAR_24; VAR_22++) {
  VAR_19[VAR_22] = VAR_19[0];
  VAR_19[VAR_22].dsf_sin.sin_family = VAR_0;
  VAR_19[VAR_22].dsf_sin.sin_len = sizeof(struct sockaddr_in);
  VAR_19[VAR_22].dsf_sin.sin_addr.s_addr = 0;
  VAR_19[VAR_22].dsf_sin.sin_port = 0;
  if (VAR_25 == 0) {

   FUNC_12("\t0.0.0.0\tds%d/%s", VAR_19[VAR_22].dsf_dir,
       VAR_19[VAR_22].dsf_filename);
  }
 }
 if (VAR_24 > VAR_23) {
  VAR_29 = VAR_24 * sizeof(struct pnfsdsfile);
  VAR_21 = 1;
 }
 if (VAR_25 == 0)
  FUNC_12("\n");

 if (VAR_21 != 0 && FUNC_5(*VAR_9, VAR_2,
     "pnfsd.dsfile", VAR_19, VAR_29) != VAR_29)
  FUNC_2(1, "Can't set pnfsd.dsfile");
}
