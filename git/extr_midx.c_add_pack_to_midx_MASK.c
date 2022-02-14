
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_list {int nr; TYPE_1__* info; int alloc; scalar_t__ m; int pack_paths_checked; int progress; } ;
struct TYPE_2__ {size_t orig_pack_int_id; scalar_t__ expired; int pack_name; int p; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (scalar_t__,char const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_0, size_t VAR_1,
        const char *VAR_2, void *VAR_3)
{
 struct pack_list *VAR_4 = (struct pack_list *)VAR_3;

 if (FUNC_6(VAR_2, ".idx")) {
  FUNC_5(VAR_4->progress, ++VAR_4->pack_paths_checked);
  if (VAR_4->m && FUNC_7(VAR_4->m, VAR_2))
   return;

  FUNC_0(VAR_4->info, VAR_4->nr + 1, VAR_4->alloc);

  VAR_4->info[VAR_4->nr].p = FUNC_3(VAR_0,
         VAR_1,
         0);

  if (!VAR_4->info[VAR_4->nr].p) {
   FUNC_9(FUNC_2("failed to add packfile '%s'"),
    VAR_0);
   return;
  }

  if (FUNC_8(VAR_4->info[VAR_4->nr].p)) {
   FUNC_9(FUNC_2("failed to open pack-index '%s'"),
    VAR_0);
   FUNC_4(VAR_4->info[VAR_4->nr].p);
   FUNC_1(VAR_4->info[VAR_4->nr].p);
   return;
  }

  VAR_4->info[VAR_4->nr].pack_name = FUNC_10(VAR_2);
  VAR_4->info[VAR_4->nr].orig_pack_int_id = VAR_4->nr;
  VAR_4->info[VAR_4->nr].expired = 0;
  VAR_4->nr++;
 }
}
