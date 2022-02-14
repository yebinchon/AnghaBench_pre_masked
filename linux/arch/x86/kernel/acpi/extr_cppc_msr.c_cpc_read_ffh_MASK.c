
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpc_reg {int bit_offset; scalar_t__ bit_width; int address; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int ,int*) ;

int FUNC_2(int VAR_0, struct cpc_reg *VAR_1, u64 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->address, VAR_2);
 if (!VAR_3) {
  u64 VAR_4 = FUNC_0(VAR_1->bit_offset + VAR_1->bit_width - 1,
           VAR_1->bit_offset);

  *VAR_2 &= VAR_4;
  *VAR_2 >>= VAR_1->bit_offset;
 }
 return VAR_3;
}
