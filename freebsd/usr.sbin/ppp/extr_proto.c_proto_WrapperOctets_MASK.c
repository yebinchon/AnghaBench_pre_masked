
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct lcp {scalar_t__ his_protocomp; } ;



int
FUNC_0(struct lcp *VAR_0, u_short VAR_1)
{
  return (VAR_0->his_protocomp && !(VAR_1 & 0xff00)) ? 1 : 2;
}
