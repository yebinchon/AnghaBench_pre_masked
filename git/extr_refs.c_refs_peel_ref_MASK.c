
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {char const* refname; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct object_id*,struct object_id*) ;
 int FUNC_1 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct object_id*) ;
 scalar_t__ FUNC_3 (struct ref_store*,char const*,int ,struct object_id*,int*) ;

int FUNC_4(struct ref_store *VAR_2, const char *VAR_3,
    struct object_id *VAR_4)
{
 int VAR_5;
 struct object_id VAR_6;

 if (VAR_1 && VAR_1->refname == VAR_3) {
  struct object_id VAR_7;

  if (FUNC_2(VAR_1, &VAR_7))
   return -1;
  FUNC_0(VAR_4, &VAR_7);
  return 0;
 }

 if (FUNC_3(VAR_2, VAR_3,
          VAR_0, &VAR_6, &VAR_5))
  return -1;

 return FUNC_1(&VAR_6, VAR_4);
}
