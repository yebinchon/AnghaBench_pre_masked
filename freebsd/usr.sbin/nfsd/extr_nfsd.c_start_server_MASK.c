
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_nfsd_args {char* principal; scalar_t__ minthreads; scalar_t__ maxthreads; } ;
struct addrinfo {char* ai_canonname; int ai_flags; } ;
typedef int principal ;
typedef int hostname ;
typedef int hints ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (void*,int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (int ,struct nfsd_nfsd_args*) ;
 int VAR_14 ;
 int FUNC_9 (char*,int,char*,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void
FUNC_13(int VAR_15, struct nfsd_nfsd_args *VAR_16, const char *VAR_17)
{
 char VAR_18[VAR_4 + 5];
 int VAR_19, VAR_20;
 char VAR_21[VAR_4 + 1], *VAR_22;
 struct addrinfo *VAR_23, VAR_24;

 VAR_19 = 0;
 if (VAR_17 == ((void*)0))
  FUNC_4(VAR_21, sizeof (VAR_21));
 else
  FUNC_11(VAR_21, VAR_17, sizeof (VAR_21));
 FUNC_9(VAR_18, sizeof (VAR_18), "nfs@%s", VAR_21);
 if ((VAR_22 = FUNC_10(VAR_21, '.')) == ((void*)0) ||
     *(VAR_22 + 1) == '\0') {

  FUNC_6((void *)&VAR_24, 0, sizeof (VAR_24));
  VAR_24.ai_flags = VAR_0;
  VAR_20 = FUNC_3(VAR_21, ((void*)0), &VAR_24, &VAR_23);
  if (VAR_20 == 0) {
   if (VAR_23->ai_canonname != ((void*)0) &&
       (VAR_22 = FUNC_10(VAR_23->ai_canonname, '.')) !=
       ((void*)0) && *(VAR_22 + 1) != '\0')
    FUNC_9(VAR_18, sizeof (VAR_18),
        "nfs@%s", VAR_23->ai_canonname);
   FUNC_1(VAR_23);
  }
 }
 VAR_16->principal = VAR_18;

 if (VAR_13)
  VAR_16->minthreads = VAR_16->maxthreads = VAR_12;
 else {
  VAR_16->minthreads = VAR_11 ? VAR_10 : FUNC_2();
  VAR_16->maxthreads = VAR_9 ? VAR_8 : VAR_16->minthreads;
  if (VAR_16->maxthreads < VAR_16->minthreads)
   VAR_16->maxthreads = VAR_16->minthreads;
 }
 VAR_20 = FUNC_8(VAR_14, VAR_16);
 if (VAR_20 < 0 && VAR_6 == VAR_1) {






  FUNC_12(VAR_3, "No gssd, using AUTH_SYS only");
  VAR_18[0] = '\0';
  VAR_20 = FUNC_8(VAR_14, VAR_16);
 }
 if (VAR_20 < 0) {
  if (VAR_6 == VAR_2) {
   FUNC_12(VAR_3, "Bad -p option, cannot run");
   if (VAR_7 != 0 && VAR_15 == 0)
    FUNC_5(VAR_7, VAR_5);
  } else
   FUNC_12(VAR_3, "nfssvc: %m");
  VAR_19 = 1;
 }
 if (VAR_15)
  FUNC_7(VAR_19);
 else
  FUNC_0(VAR_19);
}
