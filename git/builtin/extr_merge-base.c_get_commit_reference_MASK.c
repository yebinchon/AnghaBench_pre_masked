
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 struct commit* FUNC_2 (int ,struct object_id*) ;
 int VAR_0 ;

__attribute__((used)) static struct commit *FUNC_3(const char *VAR_1)
{
 struct object_id VAR_2;
 struct commit *VAR_3;

 if (FUNC_1(VAR_1, &VAR_2))
  FUNC_0("Not a valid object name %s", VAR_1);
 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_3)
  FUNC_0("Not a valid commit name %s", VAR_1);

 return VAR_3;
}
