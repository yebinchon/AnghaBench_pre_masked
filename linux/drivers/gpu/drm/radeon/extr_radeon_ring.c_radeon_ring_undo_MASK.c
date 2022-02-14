
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int wptr_old; int wptr; } ;



void FUNC_0(struct radeon_ring *VAR_0)
{
 VAR_0->wptr = VAR_0->wptr_old;
}
