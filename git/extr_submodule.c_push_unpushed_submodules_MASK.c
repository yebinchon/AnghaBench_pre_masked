
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct repository {int dummy; } ;
struct remote {scalar_t__ origin; int name; } ;
struct refspec {int dummy; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {char* string; } ;


 scalar_t__ VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct repository*,struct oid_array*,int ,struct string_list*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,struct remote const*,struct refspec const*,struct string_list const*,int) ;
 char* FUNC_6 (char*,int ,struct object_id*,int *) ;
 int VAR_2 ;
 int FUNC_7 (struct string_list*,int ) ;
 int FUNC_8 (char*,char*,struct remote const*,struct refspec const*) ;

int FUNC_9(struct repository *VAR_3,
        struct oid_array *VAR_4,
        const struct remote *VAR_5,
        const struct refspec *VAR_6,
        const struct string_list *VAR_7,
        int VAR_8)
{
 int VAR_9, VAR_10 = 1;
 struct string_list VAR_11 = VAR_1;

 if (!FUNC_2(VAR_3, VAR_4,
          VAR_5->name, &VAR_11))
  return 1;







 if (VAR_5->origin != VAR_0) {
  char *VAR_12;
  struct object_id VAR_13;

  VAR_12 = FUNC_6("HEAD", 0, &VAR_13, ((void*)0));
  if (!VAR_12)
   FUNC_1(FUNC_0("Failed to resolve HEAD as a valid ref."));

  for (VAR_9 = 0; VAR_9 < VAR_11.nr; VAR_9++)
   FUNC_8(VAR_11.items[VAR_9].string,
          VAR_12, VAR_5, VAR_6);
  FUNC_4(VAR_12);
 }


 for (VAR_9 = 0; VAR_9 < VAR_11.nr; VAR_9++) {
  const char *VAR_14 = VAR_11.items[VAR_9].string;
  FUNC_3(VAR_2, "Pushing submodule '%s'\n", VAR_14);
  if (!FUNC_5(VAR_14, VAR_5, VAR_6,
        VAR_7, VAR_8)) {
   FUNC_3(VAR_2, "Unable to push submodule '%s'\n", VAR_14);
   VAR_10 = 0;
  }
 }

 FUNC_7(&VAR_11, 0);

 return VAR_10;
}
