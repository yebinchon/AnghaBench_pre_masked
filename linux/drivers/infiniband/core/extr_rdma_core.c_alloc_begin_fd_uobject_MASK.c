
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_api_object {int dummy; } ;
struct ib_uverbs_file {int dummy; } ;
struct ib_uobject {int id; struct ib_uverbs_file* ufile; } ;


 struct ib_uobject* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ib_uobject*) ;
 int VAR_0 ;
 struct ib_uobject* FUNC_2 (struct ib_uverbs_file*,struct uverbs_api_object const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static struct ib_uobject *
FUNC_5(const struct uverbs_api_object *VAR_1,
         struct ib_uverbs_file *VAR_2)
{
 int VAR_3;
 struct ib_uobject *VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0)
  return FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_1(VAR_4)) {
  FUNC_4(VAR_3);
  return VAR_4;
 }

 VAR_4->id = VAR_3;
 VAR_4->ufile = VAR_2;

 return VAR_4;
}
