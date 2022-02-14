
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct progress {int dummy; } ;
struct pathspec {int dummy; } ;
struct index_state {int cache_nr; int cache_changed; struct cache_entry** cache; } ;
struct cache_entry {int name; int ce_flags; int ce_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct cache_entry*) ;
 int FUNC_3 (struct index_state*,struct cache_entry*,struct pathspec const*,char*) ;
 scalar_t__ FUNC_4 (struct cache_entry*) ;
 int FUNC_5 (struct progress*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct index_state*,struct cache_entry*) ;
 int FUNC_8 (struct index_state*,struct pathspec const*,int ) ;
 struct cache_entry* FUNC_9 (struct index_state*,struct cache_entry*,unsigned int,int*,int*) ;
 int FUNC_10 (struct index_state*,int,struct cache_entry*) ;
 int FUNC_11 (char const*,int ,int,int*,char const*) ;
 struct progress* FUNC_12 (int ,int) ;
 int FUNC_13 (struct progress**) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int FUNC_17(struct index_state *VAR_16, unsigned int VAR_17,
    const struct pathspec *VAR_18,
    char *VAR_19, const char *VAR_20)
{
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23 = (VAR_17 & VAR_13) != 0;
 int VAR_24 = (VAR_17 & VAR_14) != 0;
 int VAR_25 = (VAR_17 & VAR_12) != 0;
 int VAR_26 = (VAR_17 & VAR_8) != 0;
 int VAR_27 = (VAR_17 & VAR_9) != 0;
 int VAR_28 = 1;
 int VAR_29 = (VAR_17 & VAR_10);
 unsigned int VAR_30 = (VAR_3 |
    (VAR_23 ? VAR_2 : 0) |
    (VAR_26 ? VAR_1 : 0));
 const char *VAR_31;
 const char *VAR_32;
 const char *VAR_33;
 const char *VAR_34;
 const char *VAR_35;
 struct progress *VAR_36 = ((void*)0);

 if (VAR_17 & VAR_11 && FUNC_6(2))
  VAR_36 = FUNC_12(FUNC_1("Refresh index"),
        VAR_16->cache_nr);

 FUNC_15();
 VAR_31 = VAR_29 ? "M\t%s\n" : "%s: needs update\n";
 VAR_32 = VAR_29 ? "D\t%s\n" : "%s: needs update\n";
 VAR_33 = VAR_29 ? "T\t%s\n" : "%s: needs update\n";
 VAR_34 = VAR_29 ? "A\t%s\n" : "%s: needs update\n";
 VAR_35 = VAR_29 ? "U\t%s\n" : "%s: needs merge\n";





 FUNC_8(VAR_16, VAR_18, 0);
 for (VAR_21 = 0; VAR_21 < VAR_16->cache_nr; VAR_21++) {
  struct cache_entry *VAR_37, *VAR_38;
  int VAR_39 = 0;
  int VAR_40 = 0;
  int VAR_41 = 0;

  VAR_37 = VAR_16->cache[VAR_21];
  if (VAR_27 && FUNC_0(VAR_37->ce_mode))
   continue;

  if (VAR_18 && !FUNC_3(VAR_16, VAR_37, VAR_18, VAR_19))
   VAR_41 = 1;

  if (FUNC_4(VAR_37)) {
   while ((VAR_21 < VAR_16->cache_nr) &&
          ! FUNC_14(VAR_16->cache[VAR_21]->name, VAR_37->name))
    VAR_21++;
   VAR_21--;
   if (VAR_24)
    continue;
   if (!VAR_41)
    FUNC_11(VAR_35, VAR_37->name, VAR_29,
       &VAR_28, VAR_20);
   VAR_22 = 1;
   continue;
  }

  if (VAR_41)
   continue;

  VAR_38 = FUNC_9(VAR_16, VAR_37, VAR_30, &VAR_39, &VAR_40);
  if (VAR_38 == VAR_37)
   continue;
  if (VAR_36)
   FUNC_5(VAR_36, VAR_21);
  if (!VAR_38) {
   const char *VAR_42;

   if (VAR_23 && VAR_39 == VAR_6) {



    VAR_37->ce_flags &= ~VAR_5;
    VAR_37->ce_flags |= VAR_4;
    FUNC_7(VAR_16, VAR_37);
    VAR_16->cache_changed |= VAR_0;
   }
   if (VAR_25)
    continue;

   if (VAR_39 == VAR_7)
    VAR_42 = VAR_32;
   else if (FUNC_2(VAR_37))
    VAR_42 = VAR_34;
   else if (VAR_40 & VAR_15)
    VAR_42 = VAR_33;
   else
    VAR_42 = VAR_31;
   FUNC_11(VAR_42,
      VAR_37->name, VAR_29, &VAR_28, VAR_20);
   VAR_22 = 1;
   continue;
  }

  FUNC_10(VAR_16, VAR_21, VAR_38);
 }
 if (VAR_36) {
  FUNC_5(VAR_36, VAR_16->cache_nr);
  FUNC_13(&VAR_36);
 }
 FUNC_16("refresh index");
 return VAR_22;
}
