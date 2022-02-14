
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901318_lli {scalar_t__ link_addr; scalar_t__ virt_link_addr; } ;



__attribute__((used)) static struct coh901318_lli *
FUNC_0(struct coh901318_lli *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->link_addr == 0)
  return ((void*)0);

 return (struct coh901318_lli *) VAR_0->virt_link_addr;
}
