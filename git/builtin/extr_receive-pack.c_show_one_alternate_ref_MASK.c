
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int dummy; } ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (struct oidset*,struct object_id const*) ;
 int FUNC_1 (char*,struct object_id const*) ;

__attribute__((used)) static void FUNC_2(const struct object_id *VAR_0,
       void *VAR_1)
{
 struct oidset *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2, VAR_0))
  return;

 FUNC_1(".have", VAR_0);
}
