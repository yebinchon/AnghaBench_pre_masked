
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_filespec {int path; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct diff_filespec*,struct object_id*,int,unsigned short) ;
 scalar_t__ FUNC_2 (struct repository*,int *,int ,struct object_id*,unsigned short*) ;

__attribute__((used)) static void FUNC_3(struct repository *VAR_0, struct commit *VAR_1,
      struct diff_filespec *VAR_2)
{
 unsigned short VAR_3;
 struct object_id VAR_4;

 if (FUNC_2(VAR_0, &VAR_1->object.oid, VAR_2->path, &VAR_4, &VAR_3))
  FUNC_0("There is no path %s in the commit", VAR_2->path);
 FUNC_1(VAR_2, &VAR_4, 1, VAR_3);

 return;
}
