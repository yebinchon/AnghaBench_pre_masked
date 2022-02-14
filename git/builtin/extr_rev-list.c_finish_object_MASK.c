
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_list_info {TYPE_1__* revs; } ;
struct object {scalar_t__ type; int oid; int parsed; } ;
struct TYPE_2__ {scalar_t__ verify_objects; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct object*) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct object *VAR_2, const char *VAR_3, void *VAR_4)
{
 struct rev_list_info *VAR_5 = VAR_4;
 if (FUNC_1(VAR_1, &VAR_2->oid, ((void*)0), 0) < 0) {
  FUNC_0(VAR_2);
  return 1;
 }
 if (VAR_5->revs->verify_objects && !VAR_2->parsed && VAR_2->type != VAR_0)
  FUNC_2(VAR_1, &VAR_2->oid);
 return 0;
}
