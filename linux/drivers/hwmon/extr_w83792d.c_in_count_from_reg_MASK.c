
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int* in; int low_bits; } ;



__attribute__((used)) static inline long FUNC_0(int VAR_0, struct w83792d_data *VAR_1)
{

 return (VAR_1->in[VAR_0] << 2) | ((VAR_1->low_bits >> (2 * VAR_0)) & 0x03);
}
