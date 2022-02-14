
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list_item {scalar_t__ string; struct push_info* util; } ;
struct TYPE_3__ {int nr; struct refspec_item* items; } ;
struct remote {TYPE_1__ push; scalar_t__ mirror; } ;
struct refspec_item {scalar_t__ dst; int force; int src; scalar_t__ matching; } ;
struct TYPE_4__ {int strdup_strings; } ;
struct ref_states {TYPE_2__ push; struct remote* remote; } ;
struct push_info {void* dest; void* status; int forced; } ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 struct string_list_item* FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int,int) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ref_states *VAR_1)
{
 int VAR_2;
 struct remote *VAR_3 = VAR_1->remote;
 struct string_list_item *VAR_4;
 struct push_info *VAR_5;

 if (VAR_3->mirror)
  return 0;

 VAR_1->push.strdup_strings = 1;
 if (!VAR_3->push.nr) {
  VAR_4 = FUNC_1(&VAR_1->push, FUNC_0("(matching)"));
  VAR_5 = VAR_4->util = FUNC_3(1, sizeof(struct push_info));
  VAR_5->status = VAR_0;
  VAR_5->dest = FUNC_4(VAR_4->string);
 }
 for (VAR_2 = 0; VAR_2 < VAR_3->push.nr; VAR_2++) {
  const struct refspec_item *VAR_6 = &VAR_3->push.items[VAR_2];
  if (VAR_6->matching)
   VAR_4 = FUNC_1(&VAR_1->push, FUNC_0("(matching)"));
  else if (FUNC_2(VAR_6->src))
   VAR_4 = FUNC_1(&VAR_1->push, VAR_6->src);
  else
   VAR_4 = FUNC_1(&VAR_1->push, FUNC_0("(delete)"));

  VAR_5 = VAR_4->util = FUNC_3(1, sizeof(struct push_info));
  VAR_5->forced = VAR_6->force;
  VAR_5->status = VAR_0;
  VAR_5->dest = FUNC_4(VAR_6->dst ? VAR_6->dst : VAR_4->string);
 }
 return 0;
}
