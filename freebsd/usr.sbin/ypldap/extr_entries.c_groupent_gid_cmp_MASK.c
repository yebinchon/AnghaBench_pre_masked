
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct groupent {int ge_gid; } ;



int
FUNC_0(struct groupent *VAR_0, struct groupent *VAR_1)
{
 return (VAR_0->ge_gid - VAR_1->ge_gid);
}
