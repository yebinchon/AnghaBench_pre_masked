
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_ctx_list {int dummy; } ;
struct bounce_zone {struct sysctl_ctx_list sysctl_tree; } ;



__attribute__((used)) static struct sysctl_ctx_list *
FUNC_0(struct bounce_zone *VAR_0)
{

 return (&VAR_0->sysctl_tree);
}
