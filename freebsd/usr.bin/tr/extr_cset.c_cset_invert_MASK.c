
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cset {int cs_invert; int cs_havecache; } ;



void
FUNC_0(struct cset *VAR_0)
{

 VAR_0->cs_invert ^= 1;
 VAR_0->cs_havecache = 0;
}
