
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int,int ) ;
 struct device_node* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

struct device_node *FUNC_6(const char *VAR_3)
{
 struct device_node *VAR_4;
 char *VAR_5 = "/";
 const char *VAR_6;


 VAR_6 = FUNC_1(VAR_3) - 1;


 if (!FUNC_5(VAR_3, "/"))
  return FUNC_0(-VAR_0);

 if (VAR_6 > VAR_3) {
  VAR_5 = FUNC_3(VAR_3, VAR_6 - VAR_3, VAR_2);
  if (!VAR_5)
   return FUNC_0(-VAR_1);
 }
 VAR_4 = FUNC_4(VAR_5);
 if (FUNC_5(VAR_5, "/"))
  FUNC_2(VAR_5);
 return VAR_4 ? VAR_4 : FUNC_0(-VAR_0);
}
