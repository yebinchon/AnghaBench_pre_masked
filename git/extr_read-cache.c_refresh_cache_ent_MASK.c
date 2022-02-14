
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; scalar_t__ ce_namelen; int name; int ce_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*) ;
 scalar_t__ FUNC_3 (struct cache_entry*) ;
 scalar_t__ FUNC_4 (struct cache_entry*) ;
 int FUNC_5 (struct cache_entry*,struct cache_entry*) ;
 int VAR_10 ;
 int FUNC_6 (struct index_state*,struct cache_entry*,struct stat*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct index_state*,struct cache_entry*,struct stat*,unsigned int) ;
 scalar_t__ FUNC_9 (struct index_state*,struct cache_entry*,struct stat*,unsigned int) ;
 scalar_t__ FUNC_10 (int ,struct stat*) ;
 struct cache_entry* FUNC_11 (struct index_state*,int ) ;
 int FUNC_12 (struct index_state*,struct cache_entry*) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 (struct index_state*) ;

__attribute__((used)) static struct cache_entry *FUNC_15(struct index_state *VAR_11,
          struct cache_entry *VAR_12,
          unsigned int VAR_13, int *VAR_14,
          int *VAR_15)
{
 struct stat VAR_16;
 struct cache_entry *VAR_17;
 int VAR_18;
 int VAR_19 = VAR_13 & VAR_5;
 int VAR_20 = VAR_13 & VAR_4;
 int VAR_21 = VAR_13 & VAR_3;
 int VAR_22 = VAR_13 & VAR_2;
 int VAR_23 = VAR_13 & VAR_1;

 if (!VAR_19 || FUNC_4(VAR_12))
  return VAR_12;

 if (!VAR_23)
  FUNC_14(VAR_11);





 if (!VAR_21 && FUNC_3(VAR_12)) {
  FUNC_1(VAR_12);
  return VAR_12;
 }
 if (!VAR_20 && (VAR_12->ce_flags & VAR_6)) {
  FUNC_1(VAR_12);
  return VAR_12;
 }
 if (!VAR_23 && (VAR_12->ce_flags & VAR_0)) {
  FUNC_1(VAR_12);
  return VAR_12;
 }

 if (FUNC_7(VAR_12->name, FUNC_2(VAR_12))) {
  if (VAR_22)
   return VAR_12;
  if (VAR_14)
   *VAR_14 = VAR_8;
  return ((void*)0);
 }

 if (FUNC_10(VAR_12->name, &VAR_16) < 0) {
  if (VAR_22 && VAR_10 == VAR_8)
   return VAR_12;
  if (VAR_14)
   *VAR_14 = VAR_10;
  return ((void*)0);
 }

 VAR_18 = FUNC_8(VAR_11, VAR_12, &VAR_16, VAR_13);
 if (VAR_15)
  *VAR_15 = VAR_18;
 if (!VAR_18) {







  if (VAR_20 && VAR_9 &&
      !(VAR_12->ce_flags & VAR_6))
   ;
  else {





   if (!FUNC_0(VAR_12->ce_mode)) {
    FUNC_1(VAR_12);
    FUNC_12(VAR_11, VAR_12);
   }
   return VAR_12;
  }
 }

 if (FUNC_9(VAR_11, VAR_12, &VAR_16, VAR_13)) {
  if (VAR_14)
   *VAR_14 = VAR_7;
  return ((void*)0);
 }

 VAR_17 = FUNC_11(VAR_11, FUNC_2(VAR_12));
 FUNC_5(VAR_17, VAR_12);
 FUNC_13(VAR_17->name, VAR_12->name, VAR_12->ce_namelen + 1);
 FUNC_6(VAR_11, VAR_17, &VAR_16);






 if (!VAR_20 && VAR_9 &&
     !(VAR_12->ce_flags & VAR_6))
  VAR_17->ce_flags &= ~VAR_6;


 return VAR_17;
}
