
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct object {int dummy; } ;
struct TYPE_2__ {int parsed; } ;
struct commit {TYPE_1__ object; } ;


 struct commit* FUNC_0 (struct repository*) ;
 int FUNC_1 (struct commit*,struct tree*) ;
 int FUNC_2 (struct commit*,char const*,struct object*) ;

__attribute__((used)) static struct commit *FUNC_3(struct repository *VAR_0,
       struct tree *VAR_1,
       const char *VAR_2)
{
 struct commit *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3, VAR_2, (struct object *)VAR_3);
 FUNC_1(VAR_3, VAR_1);
 VAR_3->object.parsed = 1;
 return VAR_3;
}
