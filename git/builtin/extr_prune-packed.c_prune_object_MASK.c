
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_id const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct object_id *VAR_1, const char *VAR_2,
    void *VAR_3)
{
 int *VAR_4 = VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;

 if (*VAR_4 & VAR_0)
  FUNC_1("rm -f %s\n", VAR_2);
 else
  FUNC_2(VAR_2);
 return 0;
}
