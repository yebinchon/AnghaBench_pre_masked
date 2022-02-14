
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mcb_device {struct resource irq; struct resource mem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

struct resource *FUNC_0(struct mcb_device *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 == VAR_1)
  return &VAR_2->mem;
 else if (VAR_3 == VAR_0)
  return &VAR_2->irq;
 else
  return ((void*)0);
}
