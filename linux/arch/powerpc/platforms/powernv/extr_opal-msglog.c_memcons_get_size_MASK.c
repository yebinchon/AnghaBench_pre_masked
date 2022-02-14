
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct memcons {int obuf_size; int ibuf_size; } ;


 scalar_t__ FUNC_0 (int ) ;

u32 FUNC_1(struct memcons *VAR_0)
{
 return FUNC_0(VAR_0->ibuf_size) + FUNC_0(VAR_0->obuf_size);
}
