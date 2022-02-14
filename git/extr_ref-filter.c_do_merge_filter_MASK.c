
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int limited; } ;
struct ref_filter_cbdata {struct ref_array* array; struct ref_filter* filter; } ;
struct ref_filter {scalar_t__ merge; TYPE_1__* merge_commit; } ;
struct ref_array_item {char* refname; struct commit* commit; } ;
struct ref_array {int nr; struct ref_array_item** items; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {TYPE_2__ object; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int,struct commit**,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct commit**) ;
 int FUNC_6 (struct ref_array_item*) ;
 scalar_t__ FUNC_7 (struct rev_info*) ;
 int FUNC_8 (int ,struct rev_info*,int *) ;
 int VAR_3 ;
 struct commit** FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct ref_filter_cbdata *VAR_4)
{
 struct rev_info VAR_5;
 int VAR_6, VAR_7;
 struct ref_filter *VAR_8 = VAR_4->filter;
 struct ref_array *VAR_9 = VAR_4->array;
 struct commit **VAR_10 = FUNC_9(sizeof(struct commit *), VAR_9->nr);

 FUNC_8(VAR_3, &VAR_5, ((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_9->nr; VAR_6++) {
  struct ref_array_item *VAR_11 = VAR_9->items[VAR_6];
  FUNC_1(&VAR_5, &VAR_11->commit->object, VAR_11->refname);
  VAR_10[VAR_6] = VAR_11->commit;
 }

 VAR_8->merge_commit->object.flags |= VAR_2;
 FUNC_1(&VAR_5, &VAR_8->merge_commit->object, "");

 VAR_5.limited = 1;
 if (FUNC_7(&VAR_5))
  FUNC_4(FUNC_0("revision walk setup failed"));

 VAR_7 = VAR_9->nr;
 VAR_9->nr = 0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct ref_array_item *VAR_12 = VAR_9->items[VAR_6];
  struct commit *VAR_13 = VAR_12->commit;

  int VAR_14 = !!(VAR_13->object.flags & VAR_2);

  if (VAR_14 == (VAR_8->merge == VAR_1))
   VAR_9->items[VAR_9->nr++] = VAR_9->items[VAR_6];
  else
   FUNC_6(VAR_12);
 }

 FUNC_3(VAR_7, VAR_10, VAR_0);
 FUNC_2(VAR_8->merge_commit, VAR_0);
 FUNC_5(VAR_10);
}
