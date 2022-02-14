
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct TYPE_2__ {int object_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct object*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,...) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct object_id const*) ;
 int FUNC_5 (struct object*) ;
 scalar_t__ VAR_7 ;
 char* FUNC_6 (struct object_id const*) ;
 struct object* FUNC_7 (int ,struct object_id const*) ;
 int VAR_8 ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_9, const struct object_id *VAR_10,
      int VAR_11, void *VAR_12)
{
 struct object *VAR_13;

 VAR_13 = FUNC_7(VAR_8, VAR_10);
 if (!VAR_13) {
  if (FUNC_4(VAR_10)) {




    VAR_4++;
    return 0;
  }
  FUNC_2(FUNC_0("%s: invalid sha1 pointer %s"),
        VAR_9, FUNC_6(VAR_10));
  VAR_5 |= VAR_0;

  return 0;
 }
 if (VAR_13->type != VAR_2 && FUNC_3(VAR_9)) {
  FUNC_2(FUNC_0("%s: not a commit"), VAR_9);
  VAR_5 |= VAR_1;
 }
 VAR_4++;
 VAR_13->flags |= VAR_3;
 if (VAR_7)
  FUNC_1(VAR_6.object_names,
   VAR_13, FUNC_8(VAR_9));
 FUNC_5(VAR_13);

 return 0;
}
