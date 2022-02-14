
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_5)
{

 if (!VAR_2)
  return (0);

 if (VAR_3 && VAR_5->if_type == VAR_1)
  return (0);

 if (VAR_4 && VAR_5->if_type != VAR_1)
  return (0);

 return (VAR_0);
}
