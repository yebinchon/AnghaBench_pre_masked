
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dphy_timing {int clkmiss; int clkpost; int clkpre; int clkprepare; int clksettle; int clktermen; int clktrail; int clkzero; int dtermen; int eot; int hsexit; int hsprepare; int hszero; int hssettle; int hsskip; scalar_t__ hstrail; int init; int lpx; int taget; int tago; int tasure; int wakeup; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

int FUNC_1(struct mipi_dphy_timing *VAR_1,
         unsigned long VAR_2)
{
 if (VAR_1->clkmiss > 60)
  return -VAR_0;

 if (VAR_1->clkpost < (60 + 52 * VAR_2))
  return -VAR_0;

 if (VAR_1->clkpre < 8)
  return -VAR_0;

 if (VAR_1->clkprepare < 38 || VAR_1->clkprepare > 95)
  return -VAR_0;

 if (VAR_1->clksettle < 95 || VAR_1->clksettle > 300)
  return -VAR_0;

 if (VAR_1->clktermen > 38)
  return -VAR_0;

 if (VAR_1->clktrail < 60)
  return -VAR_0;

 if (VAR_1->clkprepare + VAR_1->clkzero < 300)
  return -VAR_0;

 if (VAR_1->dtermen > 35 + 4 * VAR_2)
  return -VAR_0;

 if (VAR_1->eot > 105 + 12 * VAR_2)
  return -VAR_0;

 if (VAR_1->hsexit < 100)
  return -VAR_0;

 if (VAR_1->hsprepare < 40 + 4 * VAR_2 ||
     VAR_1->hsprepare > 85 + 6 * VAR_2)
  return -VAR_0;

 if (VAR_1->hsprepare + VAR_1->hszero < 145 + 10 * VAR_2)
  return -VAR_0;

 if ((VAR_1->hssettle < 85 + 6 * VAR_2) ||
     (VAR_1->hssettle > 145 + 10 * VAR_2))
  return -VAR_0;

 if (VAR_1->hsskip < 40 || VAR_1->hsskip > 55 + 4 * VAR_2)
  return -VAR_0;

 if (VAR_1->hstrail < FUNC_0(8 * VAR_2, 60 + 4 * VAR_2))
  return -VAR_0;

 if (VAR_1->init < 100000)
  return -VAR_0;

 if (VAR_1->lpx < 50)
  return -VAR_0;

 if (VAR_1->taget != 5 * VAR_1->lpx)
  return -VAR_0;

 if (VAR_1->tago != 4 * VAR_1->lpx)
  return -VAR_0;

 if (VAR_1->tasure < VAR_1->lpx || VAR_1->tasure > 2 * VAR_1->lpx)
  return -VAR_0;

 if (VAR_1->wakeup < 1000000)
  return -VAR_0;

 return 0;
}
