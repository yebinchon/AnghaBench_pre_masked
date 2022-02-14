
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpc_reg {int address; int bit_offset; scalar_t__ bit_width; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int,int ,int ) ;

int FUNC_3(int VAR_0, struct cpc_reg *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->address, &VAR_3);
 if (!VAR_4) {
  u64 VAR_5 = FUNC_0(VAR_1->bit_offset + VAR_1->bit_width - 1,
           VAR_1->bit_offset);

  VAR_2 <<= VAR_1->bit_offset;
  VAR_2 &= VAR_5;
  VAR_3 &= ~VAR_5;
  VAR_3 |= VAR_2;
  VAR_4 = FUNC_2(VAR_0, VAR_1->address, VAR_3);
 }
 return VAR_4;
}
