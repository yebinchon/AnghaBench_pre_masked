
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cjobinfo {char* cji_fname; int * cji_acctuser; int * cji_accthost; int cji_dfcount; void* cji_mailto; void* cji_headruser; void* cji_jobname; void* cji_class; void* cji_curqueue; struct cjprivate* cji_priv; } ;
struct cjprivate {char* cji_buff; int cji_buffsize; char* cji_eobuff; struct cjobinfo pub; scalar_t__ cji_dumpit; int * cji_fstream; } ;
typedef int FILE ;


 size_t VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,struct cjobinfo*) ;
 char* FUNC_1 (struct cjobinfo*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,char const*,void*,long,char*,char*,char*) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (void*,int ,size_t) ;
 size_t FUNC_8 (size_t,int) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char*,char const*) ;
 void* FUNC_11 (char const*) ;
 int FUNC_12 (int ) ;
 size_t FUNC_13 (char const*) ;
 int FUNC_14 (int ,char*,char const*,char const*,int ) ;

struct cjobinfo *
FUNC_15(const char *VAR_7, const char *VAR_8)
{
 int VAR_9;
 char *VAR_10;
 void *VAR_11;
 FILE *VAR_12;
 struct cjprivate *VAR_13;
 struct cjobinfo *VAR_14;
 size_t VAR_15, VAR_16, VAR_17;

 VAR_12 = FUNC_3(VAR_8, "r");
 if (VAR_12 == ((void*)0)) {
  FUNC_14(VAR_2, "%s: ctl_readcf error fopen(%s): %s",
      VAR_7, VAR_8, FUNC_12(VAR_6));
  return ((void*)0);
 }

 VAR_16 = FUNC_8(sizeof(struct cjprivate), 8);
 VAR_17 = VAR_16 + FUNC_13(VAR_8) + 1;
 VAR_17 = FUNC_8(VAR_17, 8);
 VAR_15 = VAR_17 + VAR_0;
 VAR_15 = FUNC_8(VAR_15, 8);
 VAR_11 = FUNC_6(VAR_15);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_12);
  return ((void*)0);
 }
 FUNC_7(VAR_11, 0, VAR_15);
 VAR_13 = (struct cjprivate *)VAR_11;
 VAR_13->pub.cji_priv = VAR_13;

 VAR_13->pub.cji_fname = (char *)VAR_11 + VAR_16;
 FUNC_10(VAR_13->pub.cji_fname, VAR_8);
 VAR_13->cji_buff = (char *)VAR_11 + VAR_17;
 VAR_13->cji_buffsize = (int)(VAR_15 - VAR_17);
 VAR_13->cji_eobuff = (char *)VAR_11 + VAR_15 - 1;

 VAR_13->cji_fstream = VAR_12;
 VAR_13->pub.cji_curqueue = FUNC_11(VAR_7);

 VAR_4 = 0;
 VAR_14 = &(VAR_13->pub);
 VAR_10 = FUNC_1(VAR_14);
 while (VAR_10 != ((void*)0)) {
  VAR_9 = *VAR_10++;
  switch (VAR_9) {
  case 'C':
   VAR_13->pub.cji_class = FUNC_11(VAR_10);
   break;
  case 'H':
   if (*VAR_10 == '\0')
    break;
   VAR_13->pub.cji_accthost = FUNC_11(VAR_10);
   break;
  case 'J':
   VAR_13->pub.cji_jobname = FUNC_11(VAR_10);
   break;
  case 'L':
   VAR_13->pub.cji_headruser = FUNC_11(VAR_10);
   break;
  case 'M':





   if (*VAR_10 == '-')
    break;
   if (*VAR_10 == '\0')
    break;
   VAR_13->pub.cji_mailto = FUNC_11(VAR_10);
   break;
  case 'P':
   if (*VAR_10 == '\0')
    break;

   if (*VAR_10 == '-')
    *VAR_10 = '_';
   VAR_13->pub.cji_acctuser = FUNC_11(VAR_10);
   break;
  default:
   if (FUNC_5(VAR_9)) {
    VAR_13->pub.cji_dfcount++;
   }
   break;
  }
  VAR_10 = FUNC_1(VAR_14);
 }


 if (VAR_13->pub.cji_accthost == ((void*)0))
  VAR_13->pub.cji_accthost = FUNC_11(".na.");
 if (VAR_13->pub.cji_acctuser == ((void*)0))
  VAR_13->pub.cji_acctuser = FUNC_11(".na.");
 return &(VAR_13->pub);
}
