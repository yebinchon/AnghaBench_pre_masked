
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct stale_heads_info {struct refspec* rs; struct ref** stale_refs_tail; struct string_list* ref_names; } ;
struct refspec {int dummy; } ;
struct ref {int name; struct ref* next; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (int ,struct stale_heads_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*) ;

struct ref *FUNC_4(struct refspec *VAR_2, struct ref *VAR_3)
{
 struct ref *VAR_4, *VAR_5 = ((void*)0);
 struct string_list VAR_6 = VAR_0;
 struct stale_heads_info VAR_7;

 VAR_7.ref_names = &VAR_6;
 VAR_7.stale_refs_tail = &VAR_5;
 VAR_7.rs = VAR_2;
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  FUNC_1(&VAR_6, VAR_4->name);
 FUNC_3(&VAR_6);
 FUNC_0(VAR_1, &VAR_7);
 FUNC_2(&VAR_6, 0);
 return VAR_5;
}
