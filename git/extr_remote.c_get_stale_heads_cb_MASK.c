
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct stale_heads_info {int stale_refs_tail; int ref_names; int rs; } ;
struct refspec_item {char* dst; } ;
struct ref {int new_oid; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 struct ref* FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct refspec_item*,int ,int) ;
 int FUNC_2 (int *,struct object_id const*) ;
 int FUNC_3 (int ,struct refspec_item*,struct string_list*) ;
 int FUNC_4 (struct string_list*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, const struct object_id *VAR_3,
         int VAR_4, void *VAR_5)
{
 struct stale_heads_info *VAR_6 = VAR_5;
 struct string_list VAR_7 = VAR_1;
 struct refspec_item VAR_8;
 int VAR_9, VAR_10 = 1;
 FUNC_1(&VAR_8, 0, sizeof(struct refspec_item));
 VAR_8.dst = (char *)VAR_2;

 FUNC_3(VAR_6->rs, &VAR_8, &VAR_7);
 if (VAR_7.nr == 0)
  goto clean_exit;
 if (VAR_4 & VAR_0)
  goto clean_exit;

 for (VAR_9 = 0; VAR_10 && VAR_9 < VAR_7.nr; VAR_9++)
  if (FUNC_5(VAR_6->ref_names, VAR_7.items[VAR_9].string))
   VAR_10 = 0;

 if (VAR_10) {
  struct ref *VAR_11 = FUNC_0(VAR_2, &VAR_6->stale_refs_tail);
  FUNC_2(&VAR_11->new_oid, VAR_3);
 }

clean_exit:
 FUNC_4(&VAR_7, 0);
 return 0;
}
