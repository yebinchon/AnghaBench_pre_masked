
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct object_id {int dummy; } ;
struct files_ref_iterator {int iter0; } ;


 int FUNC_0 (int ,struct object_id*) ;

__attribute__((used)) static int FUNC_1(struct ref_iterator *VAR_0,
       struct object_id *VAR_1)
{
 struct files_ref_iterator *VAR_2 =
  (struct files_ref_iterator *)VAR_0;

 return FUNC_0(VAR_2->iter0, VAR_1);
}
