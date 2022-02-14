
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__,int ) ;

const char *
FUNC_1(dev_t VAR_2)
{
 static dev_t VAR_3 = (dev_t)-1;
 static const char *VAR_4;

 if (VAR_2 == VAR_0)
  return ("__");
 if (VAR_2 == VAR_3)
  return (VAR_4);
 VAR_3 = VAR_2;
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 return (VAR_4);
}
