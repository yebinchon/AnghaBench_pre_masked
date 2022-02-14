
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct object_id {int dummy; } ;
struct TYPE_5__ {int diffopt; } ;


 int FUNC_0 (int *,int *,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 struct tree* FUNC_4 (int ,struct object_id*) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_7 (struct tree*) ;
 int FUNC_8 (char*,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct tree *VAR_2, const char *VAR_3)
{
 struct object_id VAR_4;
 struct tree *VAR_5;
 if (!FUNC_2(*VAR_3++) || FUNC_6(VAR_3, &VAR_4, &VAR_3) || *VAR_3)
  return FUNC_1("Need exactly two trees, separated by a space");
 VAR_5 = FUNC_4(VAR_1, &VAR_4);
 if (!VAR_5 || FUNC_7(VAR_5))
  return -1;
 FUNC_8("%s %s\n", FUNC_5(&VAR_2->object.oid),
     FUNC_5(&VAR_5->object.oid));
 FUNC_0(&VAR_2->object.oid, &VAR_5->object.oid,
        "", &VAR_0.diffopt);
 FUNC_3(&VAR_0);
 return 0;
}
