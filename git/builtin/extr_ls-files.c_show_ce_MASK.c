
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct dir_struct {int dummy; } ;
struct cache_entry {char* ce_mode; int oid; int name; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char const*,int ) ;
 char* FUNC_6 (struct cache_entry const*,char const*) ;
 scalar_t__ FUNC_7 (struct repository*,int ) ;
 scalar_t__ FUNC_8 (int ,int *,char const*,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct cache_entry const*) ;
 int FUNC_10 (char*,char const*,char*,int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct repository*,struct dir_struct*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (int ,struct cache_entry const*,char const*) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static void FUNC_15(struct repository *VAR_7, struct dir_struct *VAR_8,
      const struct cache_entry *VAR_9, const char *VAR_10,
      const char *VAR_11)
{
 if (VAR_1 > FUNC_12(VAR_10))
  FUNC_3("git ls-files: internal error - cache entry not superset of prefix");

 if (VAR_4 && FUNC_1(VAR_9->ce_mode) &&
     FUNC_7(VAR_7, VAR_9->name)) {
  FUNC_11(VAR_7, VAR_8, VAR_9->name);
 } else if (FUNC_8(VAR_7->index, &VAR_2, VAR_10, FUNC_12(VAR_10),
      VAR_1, VAR_3,
      FUNC_0(VAR_9->ce_mode) ||
      FUNC_1(VAR_9->ce_mode))) {
  VAR_11 = FUNC_6(VAR_9, VAR_11);

  if (!VAR_5) {
   FUNC_5(VAR_11, VAR_6);
  } else {
   FUNC_10("%s%06o %s %d\t",
          VAR_11,
          VAR_9->ce_mode,
          FUNC_4(&VAR_9->oid, VAR_0),
          FUNC_2(VAR_9));
  }
  FUNC_13(VAR_7->index, VAR_9, VAR_10);
  FUNC_14(VAR_10);
  FUNC_9(VAR_9);
 }
}
