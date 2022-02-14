
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list_item {char* string; struct stage_data* util; } ;
struct string_list {int nr; struct string_list_item* items; int cmp; } ;
struct stage_data {TYPE_2__* stages; } ;
struct merge_options {TYPE_1__* priv; } ;
struct TYPE_6__ {struct stage_data* util; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_4__ {struct string_list df_conflict_file_set; scalar_t__ call_depth; } ;


 struct string_list VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 TYPE_3__* FUNC_3 (struct string_list*,char*) ;
 int FUNC_4 (struct string_list*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct string_list*,char const*) ;
 int FUNC_6 (struct string_list*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(struct merge_options *VAR_2,
         struct string_list *VAR_3)
{
 struct string_list VAR_4 = VAR_0;
 const char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7;





 if (VAR_2->priv->call_depth)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_3->nr; VAR_7++) {
  struct string_list_item *VAR_8 = &VAR_3->items[VAR_7];
  FUNC_3(&VAR_4, VAR_8->string)->util =
       VAR_8->util;
 }
 VAR_4.cmp = VAR_1;
 FUNC_6(&VAR_4);

 FUNC_4(&VAR_2->priv->df_conflict_file_set, 1);
 for (VAR_7 = 0; VAR_7 < VAR_4.nr; VAR_7++) {
  const char *VAR_9 = VAR_4.items[VAR_7].string;
  int VAR_10 = FUNC_7(VAR_9);
  struct stage_data *VAR_11 = VAR_4.items[VAR_7].util;







  if (VAR_5 &&
      VAR_10 > VAR_6 &&
      FUNC_2(VAR_9, VAR_5, VAR_6) == 0 &&
      VAR_9[VAR_6] == '/') {
   FUNC_5(&VAR_2->priv->df_conflict_file_set, VAR_5);
  }







  if (FUNC_1(VAR_11->stages[2].mode) || FUNC_0(VAR_11->stages[2].mode)) {
   VAR_5 = VAR_9;
   VAR_6 = VAR_10;
  } else {
   VAR_5 = ((void*)0);
  }
 }
 FUNC_4(&VAR_4, 0);
}
