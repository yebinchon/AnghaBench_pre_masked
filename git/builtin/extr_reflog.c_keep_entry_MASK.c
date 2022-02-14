
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*) ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 struct commit* FUNC_2 (int ,struct object_id*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct commit **VAR_1, struct object_id *VAR_2)
{
 struct commit *VAR_3;

 if (FUNC_1(VAR_2))
  return 1;
 VAR_3 = FUNC_2(VAR_0, VAR_2, 1);
 if (!VAR_3)
  return 0;
 if (!FUNC_0(VAR_3))
  return 0;
 *VAR_1 = VAR_3;
 return 1;
}
