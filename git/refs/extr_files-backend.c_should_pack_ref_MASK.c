
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,struct object_id const*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3,
      const struct object_id *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{

 if (FUNC_1(VAR_3) != VAR_2)
  return 0;


 if (!(VAR_6 & VAR_0) && !FUNC_2(VAR_3, "refs/tags/"))
  return 0;


 if (VAR_5 & VAR_1)
  return 0;


 if (!FUNC_0(VAR_3, VAR_4, VAR_5))
  return 0;

 return 1;
}
