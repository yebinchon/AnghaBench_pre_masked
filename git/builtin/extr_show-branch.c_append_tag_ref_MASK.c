
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char const*,struct object_id const*,int ) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const struct object_id *VAR_1,
     int VAR_2, void *VAR_3)
{
 if (!FUNC_1(VAR_0, "refs/tags/"))
  return 0;
 return FUNC_0(VAR_0 + 5, VAR_1, 0);
}
