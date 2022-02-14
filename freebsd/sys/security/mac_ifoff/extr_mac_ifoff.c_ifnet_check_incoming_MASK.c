
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_6, int VAR_7)
{
 if (!VAR_3)
  return (0);

 if (VAR_4 && VAR_6->if_type == VAR_1)
  return (0);

 if (VAR_5 && VAR_6->if_type != VAR_1)
  return (0);

 if (VAR_7 && VAR_2)
  return (0);

 return (VAR_0);
}
