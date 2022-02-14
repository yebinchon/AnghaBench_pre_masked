
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_4)
{

 if ((strcasecmp(VAR_4,"mgt") == 0))
  return VAR_2 >> VAR_3;
 else if ((FUNC_0(VAR_4,"ctl") == 0))
  return VAR_0 >> VAR_3;
 else if ((FUNC_0(VAR_4,"data") == 0))
  return VAR_1 >> VAR_3;

 return FUNC_0(VAR_4) & 3;

}
