
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct TYPE_4__ {int oid; } ;
struct replace_object {int replacement; TYPE_2__ original; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {int replace_map; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct replace_object*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *,struct object_id const*) ;
 scalar_t__ FUNC_5 (int ,struct replace_object*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (int ,char const*) ;
 struct replace_object* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct repository *VAR_0,
    const char *VAR_1,
    const struct object_id *VAR_2,
    int VAR_3, void *VAR_4)
{

 const char *VAR_5 = FUNC_6(VAR_1, '/');
 const char *VAR_6 = VAR_5 ? VAR_5 + 1 : VAR_1;
 struct replace_object *VAR_7 = FUNC_8(sizeof(*VAR_7));

 if (FUNC_3(VAR_6, &VAR_7->original.oid)) {
  FUNC_2(VAR_7);
  FUNC_7(FUNC_0("bad replace ref name: %s"), VAR_1);
  return 0;
 }


 FUNC_4(&VAR_7->replacement, VAR_2);


 if (FUNC_5(VAR_0->objects->replace_map, VAR_7))
  FUNC_1(FUNC_0("duplicate replace ref: %s"), VAR_1);

 return 0;
}
