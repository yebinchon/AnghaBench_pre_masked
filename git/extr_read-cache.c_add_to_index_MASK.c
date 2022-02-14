
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
struct index_state {struct cache_entry** cache; } ;
struct cache_entry {int ce_namelen; scalar_t__ ce_mode; int oid; int ce_flags; int name; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_6 (struct index_state*,int ) ;
 int FUNC_7 (struct cache_entry*) ;
 scalar_t__ FUNC_8 (struct cache_entry*,int ) ;
 int FUNC_9 (struct cache_entry*) ;
 int FUNC_10 (struct cache_entry*) ;
 struct cache_entry* FUNC_11 (struct index_state*,struct cache_entry*,struct cache_entry*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct cache_entry*,struct cache_entry*) ;
 int FUNC_14 (struct cache_entry*) ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (struct index_state*,struct cache_entry*,struct stat*) ;
 scalar_t__ VAR_14 ;
 int FUNC_17 (struct index_state*,struct cache_entry*,struct stat*,unsigned int) ;
 scalar_t__ VAR_15 ;
 struct cache_entry* FUNC_18 (struct index_state*,int ,int ,scalar_t__) ;
 int FUNC_19 (struct index_state*,char const*,int) ;
 scalar_t__ FUNC_20 (struct index_state*,int *,char const*,struct stat*,int) ;
 struct cache_entry* FUNC_21 (struct index_state*,int) ;
 int FUNC_22 (int ,char const*,int) ;
 scalar_t__ FUNC_23 (int *,int *) ;
 int FUNC_24 (char*,char const*) ;
 scalar_t__ FUNC_25 (char const*,char*,struct object_id*) ;
 int FUNC_26 (struct cache_entry*) ;
 int FUNC_27 (char const*) ;
 scalar_t__ VAR_16 ;

int FUNC_28(struct index_state *VAR_17, const char *VAR_18, struct stat *VAR_19, int VAR_20)
{
 int VAR_21, VAR_22;
 mode_t VAR_23 = VAR_19->st_mode;
 struct cache_entry *VAR_24, *VAR_25 = ((void*)0);
 unsigned VAR_26 = VAR_10|VAR_9|VAR_11;
 int VAR_27 = VAR_20 & (VAR_6 | VAR_4);
 int VAR_28 = VAR_20 & VAR_4;
 int VAR_29 = VAR_20 & VAR_0;
 int VAR_30 = (VAR_2|VAR_3|
     (VAR_29 ? VAR_1 : 0));
 int VAR_31 = VAR_13;
 struct object_id VAR_32;

 if (VAR_20 & VAR_5)
  VAR_31 |= VAR_12;

 if (!FUNC_3(VAR_23) && !FUNC_2(VAR_23) && !FUNC_0(VAR_23))
  return FUNC_15(FUNC_4("%s: can only add regular files, symbolic links or git-directories"), VAR_18);

 VAR_21 = FUNC_27(VAR_18);
 if (FUNC_0(VAR_23)) {
  if (FUNC_25(VAR_18, "HEAD", &VAR_32) < 0)
   return FUNC_15(FUNC_4("'%s' does not have a commit checked out"), VAR_18);
  while (VAR_21 && VAR_18[VAR_21-1] == '/')
   VAR_21--;
 }
 VAR_24 = FUNC_21(VAR_17, VAR_21);
 FUNC_22(VAR_24->name, VAR_18, VAR_21);
 VAR_24->ce_namelen = VAR_21;
 if (!VAR_29)
  FUNC_16(VAR_17, VAR_24, VAR_19);
 else
  VAR_24->ce_flags |= VAR_8;


 if (VAR_16 && VAR_14) {
  VAR_24->ce_mode = FUNC_12(VAR_23);
 } else {



  struct cache_entry *VAR_33;
  int VAR_34 = FUNC_19(VAR_17, VAR_18, VAR_21);

  VAR_33 = (0 <= VAR_34) ? VAR_17->cache[VAR_34] : ((void*)0);
  VAR_24->ce_mode = FUNC_8(VAR_33, VAR_23);
 }






 if (VAR_15) {
  FUNC_6(VAR_17, VAR_24->name);
 }
 if (!(VAR_20 & VAR_5)) {
  VAR_25 = FUNC_18(VAR_17, VAR_24->name,
       FUNC_9(VAR_24), VAR_15);
  if (VAR_25 &&
      !FUNC_10(VAR_25) &&
      !FUNC_17(VAR_17, VAR_25, VAR_19, VAR_26)) {

   if (!FUNC_1(VAR_25->ce_mode))
    FUNC_7(VAR_25);
   VAR_25->ce_flags |= VAR_7;

   FUNC_14(VAR_24);
   return 0;
  }
 }
 if (!VAR_29) {
  if (FUNC_20(VAR_17, &VAR_24->oid, VAR_18, VAR_19, VAR_31)) {
   FUNC_14(VAR_24);
   return FUNC_15(FUNC_4("unable to index file '%s'"), VAR_18);
  }
 } else
  FUNC_26(VAR_24);

 if (VAR_15 && VAR_25 && FUNC_13(VAR_24, VAR_25))
  VAR_24 = FUNC_11(VAR_17, VAR_24, VAR_25);
 VAR_24->ce_flags |= VAR_7;


 VAR_22 = (VAR_25 &&
      !FUNC_10(VAR_25) &&
      FUNC_23(&VAR_25->oid, &VAR_24->oid) &&
      VAR_24->ce_mode == VAR_25->ce_mode);

 if (VAR_28)
  FUNC_14(VAR_24);
 else if (FUNC_5(VAR_17, VAR_24, VAR_30)) {
  FUNC_14(VAR_24);
  return FUNC_15(FUNC_4("unable to add '%s' to index"), VAR_18);
 }
 if (VAR_27 && !VAR_22)
  FUNC_24("add '%s'\n", VAR_18);
 return 0;
}
