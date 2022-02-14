
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 struct commit* FUNC_2 (int ,struct object_id const*) ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (struct object_id const*,int *) ;
 int VAR_0 ;
 int FUNC_5 (int ,char const*,int ) ;

struct commit *FUNC_6(const struct object_id *VAR_1, const char *VAR_2)
{
 struct commit *VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3)
  FUNC_1(FUNC_0("could not parse %s"), VAR_2);
 if (!FUNC_4(VAR_1, &VAR_3->object.oid)) {
  FUNC_5(FUNC_0("%s %s is not a commit!"),
   VAR_2, FUNC_3(VAR_1));
 }
 return VAR_3;
}
