
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {TYPE_1__* vtable; struct helper_data* data; } ;
struct ref {int dummy; } ;
struct helper_data {scalar_t__ export; scalar_t__ push; } ;
struct TYPE_2__ {int (* push_refs ) (struct transport*,struct ref*,int) ;} ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (struct transport*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct transport*,int) ;
 int FUNC_4 (struct transport*,struct ref*,int) ;
 int FUNC_5 (struct transport*,struct ref*,int) ;
 int VAR_0 ;
 int FUNC_6 (struct transport*,struct ref*,int) ;

__attribute__((used)) static int FUNC_7(struct transport *VAR_1,
  struct ref *VAR_2, int VAR_3)
{
 struct helper_data *VAR_4 = VAR_1->data;

 if (FUNC_3(VAR_1, 1)) {
  FUNC_1(VAR_1);
  return VAR_1->vtable->push_refs(VAR_1, VAR_2, VAR_3);
 }

 if (!VAR_2) {
  FUNC_2(VAR_0,
   "%s", FUNC_0("No refs in common and none specified; doing nothing.\n"
     "Perhaps you should specify a branch such as 'master'.\n"));
  return 0;
 }

 if (VAR_4->push)
  return FUNC_5(VAR_1, VAR_2, VAR_3);

 if (VAR_4->export)
  return FUNC_4(VAR_1, VAR_2, VAR_3);

 return -1;
}
