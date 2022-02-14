
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct recent_data {scalar_t__ timestamp; int revs; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;






 int FUNC_0 (int ,struct object*,char*) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ FUNC_2 (int ,struct object_id const*) ;
 scalar_t__ FUNC_3 (int ,struct object_id const*) ;
 int FUNC_4 (int ,struct object_id const*,int *) ;
 int FUNC_5 (struct object_id const*) ;
 struct object* FUNC_6 (struct object_id const*,int *) ;
 int VAR_0 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(const struct object_id *VAR_1,
         timestamp_t VAR_2,
         struct recent_data *VAR_3)
{
 struct object *VAR_4;
 enum object_type VAR_5;

 if (VAR_2 <= VAR_3->timestamp)
  return;
 VAR_5 = FUNC_4(VAR_0, VAR_1, ((void*)0));
 if (VAR_5 < 0)
  FUNC_1("unable to get object info for %s", FUNC_5(VAR_1));

 switch (VAR_5) {
 case 129:
 case 130:
  VAR_4 = FUNC_6(VAR_1, ((void*)0));
  break;
 case 128:
  VAR_4 = (struct object *)FUNC_3(VAR_0, VAR_1);
  break;
 case 131:
  VAR_4 = (struct object *)FUNC_2(VAR_0, VAR_1);
  break;
 default:
  FUNC_1("unknown object type for %s: %s",
      FUNC_5(VAR_1), FUNC_7(VAR_5));
 }

 if (!VAR_4)
  FUNC_1("unable to lookup %s", FUNC_5(VAR_1));

 FUNC_0(VAR_3->revs, VAR_4, "");
}
