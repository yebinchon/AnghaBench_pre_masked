
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct object_id const*) ;

int FUNC_3(const char *VAR_1,
      const struct object_id *VAR_2,
      unsigned int VAR_3)
{
 if (VAR_3 & VAR_0)
  return 0;
 if (!FUNC_2(VAR_2)) {
  FUNC_1(FUNC_0("%s does not point to a valid object!"), VAR_1);
  return 0;
 }
 return 1;
}
