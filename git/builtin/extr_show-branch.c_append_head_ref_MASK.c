
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char const*,struct object_id const*,int ) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 int FUNC_2 (struct object_id*,struct object_id const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const struct object_id *VAR_1,
      int VAR_2, void *VAR_3)
{
 struct object_id VAR_4;
 int VAR_5 = 11;
 if (!FUNC_3(VAR_0, "refs/heads/"))
  return 0;



 if (FUNC_1(VAR_0 + VAR_5, &VAR_4) || !FUNC_2(&VAR_4, VAR_1))
  VAR_5 = 5;
 return FUNC_0(VAR_0 + VAR_5, VAR_1, 0);
}
