
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct fsi_gpio_msg {int msg; int bits; } ;



__attribute__((used)) static void FUNC_0(struct fsi_gpio_msg *VAR_0, uint64_t VAR_1, int VAR_2)
{
 VAR_0->msg <<= VAR_2;
 VAR_0->msg |= VAR_1 & ((1ull << VAR_2) - 1);
 VAR_0->bits += VAR_2;
}
