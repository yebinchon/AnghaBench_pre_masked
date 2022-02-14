
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct object_id {int dummy; } ;
struct merge_ref_iterator {int * current; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct object_id*) ;

__attribute__((used)) static int FUNC_2(struct ref_iterator *VAR_0,
       struct object_id *VAR_1)
{
 struct merge_ref_iterator *VAR_2 =
  (struct merge_ref_iterator *)VAR_0;

 if (!VAR_2->current) {
  FUNC_0("peel called before advance for merge iterator");
 }
 return FUNC_1(*VAR_2->current, VAR_1);
}
