
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 struct commit* FUNC_2 (struct repository*,struct object_id const*) ;
 int FUNC_3 (struct object_id const*) ;

__attribute__((used)) static struct commit *FUNC_4(struct repository *VAR_0,
        const struct object_id *VAR_1)
{
 struct commit *VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_1(FUNC_0("Not a valid commit name %s"), FUNC_3(VAR_1));
 return VAR_2;
}
