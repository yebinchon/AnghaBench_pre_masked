
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct child_process {int out; } ;
struct TYPE_2__ {unsigned int hexsz; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct child_process*,struct object_array*,struct object_array*) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 struct object* FUNC_4 (int) ;
 int FUNC_5 () ;
 struct object* FUNC_6 (int ,struct object_id*) ;
 scalar_t__ FUNC_7 (char*,struct object_id*,char const**) ;
 int FUNC_8 (int ,char*,unsigned int const) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct object_array *VAR_6,
         struct object_array *VAR_7)
{
 struct child_process VAR_8 = VAR_0;
 int VAR_9;
 struct object *VAR_10;
 char VAR_11[VAR_1 + 2];
 const unsigned VAR_12 = VAR_4->hexsz;

 if (FUNC_2(&VAR_8, VAR_6, VAR_7) < 0)
  return -1;

 while ((VAR_9 = FUNC_8(VAR_8.out, VAR_11, VAR_12 + 1)) == VAR_12 + 1) {
  struct object_id VAR_13;
  const char *VAR_14;

  if (FUNC_7(VAR_11, &VAR_13, &VAR_14) || *VAR_14 != '\n')
   break;

  VAR_10 = FUNC_6(VAR_5, &VAR_13);
  if (VAR_10 && VAR_10->type == VAR_2) {
   VAR_10->flags &= ~VAR_3;
  }
 }
 for (VAR_9 = FUNC_5(); 0 < VAR_9; VAR_9--) {
  VAR_10 = FUNC_4(VAR_9 - 1);
  if (VAR_10 && VAR_10->type == VAR_2 &&
      (VAR_10->flags & VAR_3)) {
   FUNC_0(VAR_10, ((void*)0), VAR_7);
    VAR_10->flags &= ~VAR_3;
  }
 }
 FUNC_1(VAR_8.out);

 if (FUNC_3(&VAR_8))
  return -1;

 return 0;
}
