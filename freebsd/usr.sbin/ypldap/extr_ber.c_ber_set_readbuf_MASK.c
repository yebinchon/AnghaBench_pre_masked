
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ber {int * br_rend; void* br_rptr; void* br_rbuf; } ;



void
FUNC_0(struct ber *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->br_rbuf = VAR_0->br_rptr = VAR_1;
 VAR_0->br_rend = (u_int8_t *)VAR_1 + VAR_2;
}
