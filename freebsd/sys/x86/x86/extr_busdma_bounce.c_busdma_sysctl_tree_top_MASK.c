
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct bounce_zone {struct sysctl_oid* sysctl_tree_top; } ;



__attribute__((used)) static struct sysctl_oid *
FUNC_0(struct bounce_zone *VAR_0)
{

 return (VAR_0->sysctl_tree_top);
}
