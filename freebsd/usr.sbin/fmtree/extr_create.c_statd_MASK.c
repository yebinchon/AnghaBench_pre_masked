
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
typedef scalar_t__ u_short ;
typedef scalar_t__ u_long ;
typedef int u ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int mode_t ;
typedef int m ;
typedef int gid_t ;
typedef int g ;
typedef int f ;
struct TYPE_7__ {TYPE_1__* fts_statp; struct TYPE_7__* fts_link; } ;
struct TYPE_6__ {int st_mode; int st_gid; int st_uid; scalar_t__ st_flags; } ;
typedef TYPE_2__ FTSENT ;
typedef int FTS ;


 size_t FUNC_0 (scalar_t__) ;
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
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int,char*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int,char*,int) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 struct group* FUNC_9 (int) ;
 struct passwd* FUNC_10 (int) ;
 int VAR_14 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int
FUNC_13(FTS *VAR_16, FTSENT *VAR_17, uid_t *VAR_18, gid_t *VAR_19, mode_t *VAR_20, u_long *VAR_21)
{
 FTSENT *VAR_22;
 gid_t VAR_23;
 uid_t VAR_24;
 mode_t VAR_25;
 u_long VAR_26;
 struct group *VAR_27;
 struct passwd *VAR_28;
 gid_t VAR_29 = *VAR_19;
 uid_t VAR_30 = *VAR_18;
 mode_t VAR_31 = *VAR_20;
 u_long VAR_32 = *VAR_21;
 u_short VAR_33, VAR_34, VAR_35, VAR_36;
 u_short VAR_37[VAR_8], VAR_38[VAR_10], VAR_39[VAR_9], VAR_40[VAR_7];
 char *VAR_41;
 static int VAR_42 = 1;

 if ((VAR_22 = FUNC_8(VAR_16, 0)) == ((void*)0)) {
  if (VAR_13)
   FUNC_4(1, "%s", FUNC_1(VAR_17));
  return (1);
 }

 FUNC_3(VAR_37, sizeof(VAR_37));
 FUNC_3(VAR_38, sizeof(VAR_38));
 FUNC_3(VAR_39, sizeof(VAR_39));
 FUNC_3(VAR_40, sizeof(VAR_40));

 VAR_34 = VAR_33 = VAR_35 = VAR_36 = 0;
 for (; VAR_22; VAR_22 = VAR_22->fts_link) {
  if (!VAR_12 || (VAR_12 && FUNC_2(VAR_22->fts_statp->st_mode))) {
   VAR_25 = VAR_22->fts_statp->st_mode & VAR_11;
   if (VAR_25 < VAR_9 && ++VAR_39[VAR_25] > VAR_35) {
    VAR_31 = VAR_25;
    VAR_35 = VAR_39[VAR_25];
   }
   VAR_23 = VAR_22->fts_statp->st_gid;
   if (VAR_23 < VAR_8 && ++VAR_37[VAR_23] > VAR_33) {
    VAR_29 = VAR_23;
    VAR_33 = VAR_37[VAR_23];
   }
   VAR_24 = VAR_22->fts_statp->st_uid;
   if (VAR_24 < VAR_10 && ++VAR_38[VAR_24] > VAR_34) {
    VAR_30 = VAR_24;
    VAR_34 = VAR_38[VAR_24];
   }
   VAR_26 = VAR_22->fts_statp->st_flags;
   if (((VAR_26 & 0xf) | ((VAR_26 >> 12) & 0xf0)) < VAR_7 &&
       ++VAR_40[((VAR_26 & 0xf) | ((VAR_26 >> 12) & 0xf0))] > VAR_36) {
    VAR_32 = VAR_26;
    VAR_36 = VAR_40[((VAR_26 & 0xf) | ((VAR_26 >> 12) & 0xf0))];
   }
  }
 }





 if ((((VAR_14 & VAR_6) | (VAR_14 & VAR_5)) && (*VAR_18 != VAR_30)) ||
     (((VAR_14 & VAR_2) | (VAR_14 & VAR_1)) && (*VAR_19 != VAR_29)) ||
     ((VAR_14 & VAR_3) && (*VAR_20 != VAR_31)) ||
     ((VAR_14 & VAR_0) && (*VAR_21 != VAR_32)) ||
     (VAR_42)) {
  VAR_42 = 0;
  if (VAR_12)
   (void)FUNC_11("/set type=dir");
  else
   (void)FUNC_11("/set type=file");
  if (VAR_14 & VAR_6) {
   VAR_28 = FUNC_10(VAR_30);
   if (VAR_28 != ((void*)0))
    (void)FUNC_11(" uname=%s", VAR_28->pw_name);
   else if (VAR_15)
    FUNC_12( "Could not get uname for uid=%u", VAR_30);
   else
    FUNC_5(1, "Could not get uname for uid=%u", VAR_30);
  }
  if (VAR_14 & VAR_5)
   (void)FUNC_11(" uid=%lu", (u_long)VAR_30);
  if (VAR_14 & VAR_2) {
   VAR_27 = FUNC_9(VAR_29);
   if (VAR_27 != ((void*)0))
    (void)FUNC_11(" gname=%s", VAR_27->gr_name);
   else if (VAR_15)
    FUNC_12("Could not get gname for gid=%u", VAR_29);
   else
    FUNC_5(1, "Could not get gname for gid=%u", VAR_29);
  }
  if (VAR_14 & VAR_1)
   (void)FUNC_11(" gid=%lu", (u_long)VAR_29);
  if (VAR_14 & VAR_3)
   (void)FUNC_11(" mode=%#o", VAR_31);
  if (VAR_14 & VAR_4)
   (void)FUNC_11(" nlink=1");
  if (VAR_14 & VAR_0) {
   VAR_41 = FUNC_6(VAR_32);
   (void)FUNC_11(" flags=%s", VAR_41);
   FUNC_7(VAR_41);
  }
  (void)FUNC_11("\n");
  *VAR_18 = VAR_30;
  *VAR_19 = VAR_29;
  *VAR_20 = VAR_31;
  *VAR_21 = VAR_32;
 }
 return (0);
}
