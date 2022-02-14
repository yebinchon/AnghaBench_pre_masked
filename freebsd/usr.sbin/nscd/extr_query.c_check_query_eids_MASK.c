
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ uid; scalar_t__ euid; scalar_t__ gid; scalar_t__ egid; } ;



int
FUNC_0(struct query_state *VAR_0)
{

 return ((VAR_0->uid != VAR_0->euid) || (VAR_0->gid != VAR_0->egid) ? -1 : 0);
}
