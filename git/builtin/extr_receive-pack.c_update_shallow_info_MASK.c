
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {struct oid_array* ref; int nr_theirs; int nr_ours; } ;
struct oid_array {int nr; } ;
struct command {size_t index; char* error_string; int skip_update; int new_oid; struct command* next; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (struct shallow_info*,int *,int*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct oid_array*,int *) ;
 int FUNC_5 (struct shallow_info*) ;
 int FUNC_6 (struct shallow_info*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_7(struct command *VAR_1,
    struct shallow_info *VAR_2,
    struct oid_array *VAR_3)
{
 struct command *VAR_4;
 int *VAR_5;
 FUNC_6(VAR_2);
 if (!VAR_2->nr_ours && !VAR_2->nr_theirs) {
  VAR_0 = 0;
  return;
 }

 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_3(&VAR_4->new_oid))
   continue;
  FUNC_4(VAR_3, &VAR_4->new_oid);
  VAR_4->index = VAR_3->nr - 1;
 }
 VAR_2->ref = VAR_3;

 if (VAR_0) {
  FUNC_5(VAR_2);
  return;
 }

 FUNC_0(VAR_5, VAR_3->nr);
 FUNC_1(VAR_2, ((void*)0), VAR_5);
 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_3(&VAR_4->new_oid))
   continue;
  if (VAR_5[VAR_4->index]) {
   VAR_4->error_string = "shallow update not allowed";
   VAR_4->skip_update = 1;
  }
 }
 FUNC_2(VAR_5);
}
