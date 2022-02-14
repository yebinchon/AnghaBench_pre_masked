
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {int xi_pirq; } ;
struct physdev_unmap_pirq {int pirq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct physdev_unmap_pirq*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct xenisrc*) ;

int
FUNC_3(int VAR_2)
{
 struct physdev_unmap_pirq VAR_3;
 struct xenisrc *VAR_4;
 int VAR_5;

 VAR_4 = (struct xenisrc *)FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_3.pirq = VAR_4->xi_pirq;
 VAR_5 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_2(VAR_4);

 return (0);
}
