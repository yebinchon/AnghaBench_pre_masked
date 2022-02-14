
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 char* FUNC_3 (struct object_id*) ;
 struct tree* FUNC_4 (struct object_id*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *,int *,struct object_id*,int) ;
 int VAR_0 ;

int FUNC_8(int VAR_1, const char **VAR_2)
{
 struct object_id VAR_3, VAR_4, VAR_5;
 struct tree *VAR_6, *VAR_7;

 FUNC_6();

 if (FUNC_2(VAR_2[1], &VAR_3))
  FUNC_0("cannot parse %s as an object name", VAR_2[1]);
 if (FUNC_2(VAR_2[2], &VAR_4))
  FUNC_0("cannot parse %s as an object name", VAR_2[2]);
 VAR_6 = FUNC_4(&VAR_3);
 if (!VAR_6)
  FUNC_0("not a tree-ish %s", VAR_2[1]);
 VAR_7 = FUNC_4(&VAR_4);
 if (!VAR_7)
  FUNC_0("not a tree-ish %s", VAR_2[2]);

 FUNC_7(VAR_0, &VAR_6->object.oid, &VAR_7->object.oid, &VAR_5, -1);
 FUNC_5("shifted: %s\n", FUNC_3(&VAR_5));

 FUNC_1(0);
}
