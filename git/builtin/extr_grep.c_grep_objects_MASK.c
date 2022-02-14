
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int dummy; } ;
struct object_array {unsigned int nr; TYPE_1__* objects; } ;
struct object {int oid; } ;
struct grep_opt {scalar_t__ status_only; int repo; } ;
struct TYPE_2__ {int path; int name; int item; } ;


 struct object* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct grep_opt*,struct pathspec const*,struct object*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct grep_opt *VAR_1, const struct pathspec *VAR_2,
   const struct object_array *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;
 const unsigned int VAR_6 = VAR_3->nr;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  struct object *VAR_7;
  VAR_7 = FUNC_0(VAR_1->repo, VAR_3->objects[VAR_4].item,
         ((void*)0), 0);


  if (VAR_0) {
   FUNC_3(VAR_1->repo);
   FUNC_1(&VAR_7->oid);
  }
  if (FUNC_2(VAR_1, VAR_2, VAR_7, VAR_3->objects[VAR_4].name,
    VAR_3->objects[VAR_4].path)) {
   VAR_5 = 1;
   if (VAR_1->status_only)
    break;
  }
 }
 return VAR_5;
}
