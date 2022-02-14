
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dphy_timing {int clkpost; int clkpre; int clkprepare; int clksettle; int clktrail; int clkzero; int hsexit; int hsprepare; int hszero; int hssettle; int hsskip; int init; int lpx; int taget; int tago; int tasure; int wakeup; int hstrail; scalar_t__ eot; scalar_t__ dtermen; scalar_t__ clktermen; scalar_t__ clkmiss; } ;


 int FUNC_0 (int,int) ;

int FUNC_1(struct mipi_dphy_timing *VAR_0,
     unsigned long VAR_1)
{
 VAR_0->clkmiss = 0;
 VAR_0->clkpost = 70 + 52 * VAR_1;
 VAR_0->clkpre = 8;
 VAR_0->clkprepare = 65;
 VAR_0->clksettle = 95;
 VAR_0->clktermen = 0;
 VAR_0->clktrail = 80;
 VAR_0->clkzero = 260;
 VAR_0->dtermen = 0;
 VAR_0->eot = 0;
 VAR_0->hsexit = 120;
 VAR_0->hsprepare = 65 + 5 * VAR_1;
 VAR_0->hszero = 145 + 5 * VAR_1;
 VAR_0->hssettle = 85 + 6 * VAR_1;
 VAR_0->hsskip = 40;
 VAR_0->hstrail = FUNC_0(4 * 8 * VAR_1, 60 + 4 * 4 * VAR_1);

 VAR_0->init = 100000;
 VAR_0->lpx = 60;
 VAR_0->taget = 5 * VAR_0->lpx;
 VAR_0->tago = 4 * VAR_0->lpx;
 VAR_0->tasure = 2 * VAR_0->lpx;
 VAR_0->wakeup = 1000000;

 return 0;
}
