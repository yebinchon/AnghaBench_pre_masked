
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct picolcd_data {int addr_sz; } ;



__attribute__((used)) static int FUNC_0(struct picolcd_data *VAR_0, u8 *VAR_1, long VAR_2)
{
 VAR_1[0] = VAR_2 & 0xff;
 VAR_1[1] = (VAR_2 >> 8) & 0xff;
 if (VAR_0->addr_sz == 3)
  VAR_1[2] = (VAR_2 >> 16) & 0xff;
 return VAR_0->addr_sz == 2 ? 2 : 3;
}
