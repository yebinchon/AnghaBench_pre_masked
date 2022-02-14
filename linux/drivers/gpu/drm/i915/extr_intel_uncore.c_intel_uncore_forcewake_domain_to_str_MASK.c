
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum forcewake_domain_id { ____Placeholder_forcewake_domain_id } forcewake_domain_id ;


 scalar_t__ FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int const) ;
 char const** VAR_1 ;

const char *
FUNC_3(const enum forcewake_domain_id VAR_2)
{
 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 if (VAR_2 >= 0 && VAR_2 < VAR_0)
  return VAR_1[VAR_2];

 FUNC_2(VAR_2);

 return "unknown";
}
