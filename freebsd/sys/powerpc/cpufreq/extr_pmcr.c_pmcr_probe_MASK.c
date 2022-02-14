
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 if (FUNC_1("pmcr", 0))
  return (VAR_0);

 if (VAR_1 == 0)
  return (VAR_0);

 FUNC_0(VAR_2, "Power Management Control Register");
 return (0);
}
