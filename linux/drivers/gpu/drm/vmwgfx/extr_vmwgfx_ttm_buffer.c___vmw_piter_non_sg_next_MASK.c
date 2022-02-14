
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {scalar_t__ i; scalar_t__ num_pages; } ;



__attribute__((used)) static bool FUNC_0(struct vmw_piter *VAR_0)
{
 return ++(VAR_0->i) < VAR_0->num_pages;
}
