
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int type; int flags; int oid; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct object *VAR_2, int VAR_3, void *VAR_4, struct fsck_options *VAR_5)
{
 if (!VAR_2)
  return -1;

 if (VAR_3 != VAR_1 && VAR_2->type != VAR_3)
  FUNC_1(FUNC_0("object type mismatch at %s"), FUNC_2(&VAR_2->oid));

 VAR_2->flags |= VAR_0;
 return 0;
}
