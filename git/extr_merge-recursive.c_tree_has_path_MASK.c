
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct repository*,int *,char const*,struct object_id*,unsigned short*) ;

__attribute__((used)) static int FUNC_1(struct repository *VAR_0, struct tree *VAR_1,
    const char *VAR_2)
{
 struct object_id VAR_3;
 unsigned short VAR_4;

 return !FUNC_0(VAR_0,
          &VAR_1->object.oid, VAR_2,
          &VAR_3, &VAR_4);
}
