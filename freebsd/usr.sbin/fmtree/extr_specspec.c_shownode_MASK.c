
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int intmax_t ;
struct TYPE_3__ {char* name; int st_gid; int st_mode; int st_uid; char* md5digest; char* sha1digest; char* rmd160digest; char* sha256digest; int st_flags; scalar_t__ st_size; scalar_t__ st_nlink; int cksum; int type; } ;
typedef TYPE_1__ NODE ;


 int VAR_0 ;
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
 int VAR_12 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct group* FUNC_2 (int) ;
 struct passwd* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(NODE *VAR_13, int VAR_14, char const *VAR_15)
{
 struct group *VAR_16;
 struct passwd *VAR_17;

 FUNC_4("%s%s %s", VAR_15, VAR_13->name, FUNC_1(VAR_13->type));
 if (VAR_14 & VAR_0)
  FUNC_4(" cksum=%lu", VAR_13->cksum);
 if (VAR_14 & VAR_2)
  FUNC_4(" gid=%d", VAR_13->st_gid);
 if (VAR_14 & VAR_3) {
  VAR_16 = FUNC_2(VAR_13->st_gid);
  if (VAR_16 == ((void*)0))
   FUNC_4(" gid=%d", VAR_13->st_gid);
  else
   FUNC_4(" gname=%s", VAR_16->gr_name);
 }
 if (VAR_14 & VAR_5)
  FUNC_4(" mode=%o", VAR_13->st_mode);
 if (VAR_14 & VAR_6)
  FUNC_4(" nlink=%ju", (uintmax_t)VAR_13->st_nlink);
 if (VAR_14 & VAR_10)
  FUNC_4(" size=%jd", (intmax_t)VAR_13->st_size);
 if (VAR_14 & VAR_11)
  FUNC_4(" uid=%d", VAR_13->st_uid);
 if (VAR_14 & VAR_12) {
  VAR_17 = FUNC_3(VAR_13->st_uid);
  if (VAR_17 == ((void*)0))
   FUNC_4(" uid=%d", VAR_13->st_uid);
  else
   FUNC_4(" uname=%s", VAR_17->pw_name);
 }
 if (VAR_14 & VAR_4)
  FUNC_4(" md5digest=%s", VAR_13->md5digest);
 if (VAR_14 & VAR_8)
  FUNC_4(" sha1digest=%s", VAR_13->sha1digest);
 if (VAR_14 & VAR_7)
  FUNC_4(" rmd160digest=%s", VAR_13->rmd160digest);
 if (VAR_14 & VAR_9)
  FUNC_4(" sha256digest=%s", VAR_13->sha256digest);
 if (VAR_14 & VAR_1)
  FUNC_4(" flags=%s", FUNC_0(VAR_13->st_flags));
 FUNC_4("\n");
}
