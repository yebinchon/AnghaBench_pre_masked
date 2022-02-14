
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int ,struct object_id*,char**) ;
 struct commit* FUNC_2 (char*,struct commit*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 struct commit* FUNC_4 (int ,struct object_id*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(int VAR_1, const char **VAR_2)
{
 struct object_id VAR_3;
 char *VAR_4;
 struct commit *VAR_5, *VAR_6;
 const char *VAR_7;

 switch (FUNC_1(VAR_2[0], FUNC_7(VAR_2[0]), &VAR_3, &VAR_4)) {
 case 0:
  FUNC_0("No such ref: '%s'", VAR_2[0]);
 case 1:
  break;
 default:
  FUNC_0("Ambiguous refname: '%s'", VAR_2[0]);
 }

 VAR_7 = (VAR_1 == 2) ? VAR_2[1] : "HEAD";
 if (FUNC_3(VAR_7, &VAR_3))
  FUNC_0("Not a valid object name: '%s'", VAR_7);

 VAR_5 = FUNC_4(VAR_0, &VAR_3);

 VAR_6 = FUNC_2(VAR_4, VAR_5);

 if (!VAR_6)
  return 1;

 FUNC_6("%s\n", FUNC_5(&VAR_6->object.oid));
 return 0;
}
