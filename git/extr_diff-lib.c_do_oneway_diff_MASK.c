
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {scalar_t__ index_only; struct rev_info* unpack_data; } ;
struct TYPE_2__ {scalar_t__ ita_invisible_in_index; } ;
struct rev_info {TYPE_1__ diffopt; int ignore_merges; } ;
struct diff_filepair {int one; } ;
struct cache_entry {int ce_flags; int ce_mode; int oid; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 scalar_t__ FUNC_1 (struct cache_entry const*) ;
 scalar_t__ FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct rev_info*,char*,struct cache_entry const*,int *,int,int ,int ) ;
 struct diff_filepair* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (struct rev_info*,struct cache_entry const*,struct cache_entry const*,int,int,int) ;
 int FUNC_7 (struct rev_info*,struct cache_entry const*,int,int) ;

__attribute__((used)) static void FUNC_8(struct unpack_trees_options *VAR_1,
      const struct cache_entry *VAR_2,
      const struct cache_entry *VAR_3)
{
 struct rev_info *VAR_4 = VAR_1->unpack_data;
 int VAR_5, VAR_6;





 if (VAR_1->index_only &&
     VAR_4->diffopt.ita_invisible_in_index &&
     VAR_2 && FUNC_0(VAR_2)) {
  VAR_2 = ((void*)0);
  if (!VAR_3)
   return;
 }


 VAR_6 = VAR_1->index_only ||
  (VAR_2 && ((VAR_2->ce_flags & VAR_0) || FUNC_1(VAR_2)));







 VAR_5 = !VAR_4->ignore_merges;

 if (VAR_6 && VAR_2 && FUNC_2(VAR_2)) {
  struct diff_filepair *VAR_7;
  VAR_7 = FUNC_4(&VAR_4->diffopt, VAR_2->name);
  if (VAR_3)
   FUNC_5(VAR_7->one, &VAR_3->oid, 1,
          VAR_3->ce_mode);
  return;
 }




 if (!VAR_3) {
  FUNC_7(VAR_4, VAR_2, VAR_6, VAR_5);
  return;
 }




 if (!VAR_2) {
  FUNC_3(VAR_4, "-", VAR_3, &VAR_3->oid, 1,
         VAR_3->ce_mode, 0);
  return;
 }


 FUNC_6(VAR_4, VAR_3, VAR_2, 1, VAR_6, VAR_5);
}
