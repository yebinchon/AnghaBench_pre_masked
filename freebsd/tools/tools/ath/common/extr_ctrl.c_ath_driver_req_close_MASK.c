
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_driver_req {int s; int * ifname; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct ath_driver_req *VAR_0)
{
 if (VAR_0->s == -1)
  return (0);
 FUNC_0(VAR_0->s);
 FUNC_1(VAR_0->ifname);
 VAR_0->s = -1;
 VAR_0->ifname = ((void*)0);
 return (0);
}
