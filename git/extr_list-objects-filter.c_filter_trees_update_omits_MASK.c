
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int dummy; } ;
struct object {int oid; } ;


 int FUNC_0 (struct oidset*,int *) ;
 int FUNC_1 (struct oidset*,int *) ;

__attribute__((used)) static int FUNC_2(
 struct object *VAR_0,
 struct oidset *VAR_1,
 int VAR_2)
{
 if (!VAR_1)
  return 0;

 if (VAR_2)
  return FUNC_1(VAR_1, &VAR_0->oid);
 else
  return FUNC_0(VAR_1, &VAR_0->oid);
}
