
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static git_object_t FUNC_1(const char *VAR_5)
{
 if (!FUNC_0(VAR_5, "commit"))
  return VAR_1;

 if (!FUNC_0(VAR_5, "tree"))
  return VAR_4;

 if (!FUNC_0(VAR_5, "blob"))
  return VAR_0;

 if (!FUNC_0(VAR_5, "tag"))
  return VAR_3;

 return VAR_2;
}
