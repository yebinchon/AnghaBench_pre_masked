
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oid_array {int nr; } ;
struct object_id {int dummy; } ;
struct git_transport_options {struct oid_array* negotiation_tips; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {char* string; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*,struct oid_array*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (char const*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (struct oid_array*,struct object_id*) ;
 int FUNC_5 (char*,char const*) ;
 struct oid_array* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct git_transport_options *VAR_2)
{
 struct oid_array *VAR_3 = FUNC_6(1, sizeof(*VAR_3));
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1.nr; VAR_4++) {
  const char *VAR_5 = VAR_1.items[VAR_4].string;
  int VAR_6;
  if (!FUNC_3(VAR_5)) {
   struct object_id VAR_7;
   if (FUNC_2(VAR_5, &VAR_7))
    FUNC_0("%s is not a valid object", VAR_5);
   FUNC_4(VAR_3, &VAR_7);
   continue;
  }
  VAR_6 = VAR_3->nr;
  FUNC_1(VAR_0, VAR_5, VAR_3);
  if (VAR_6 == VAR_3->nr)
   FUNC_5("Ignoring --negotiation-tip=%s because it does not match any refs",
    VAR_5);
 }
 VAR_2->negotiation_tips = VAR_3;
}
