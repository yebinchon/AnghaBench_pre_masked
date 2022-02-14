
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mtk_clk_pll {TYPE_1__* data; } ;
struct TYPE_2__ {int pcwbits; int pcwibits; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct mtk_clk_pll *VAR_1, u32 VAR_2,
  u32 VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1->data->pcwbits;
 int VAR_6 = 0;
 int VAR_7;
 u64 VAR_8;
 u8 VAR_9 = 0;


 VAR_7 = VAR_1->data->pcwibits ? VAR_1->data->pcwibits : VAR_0;
 if (VAR_5 > VAR_7)
  VAR_6 = VAR_5 - VAR_7;

 VAR_8 = (u64)VAR_2 * VAR_3;

 if (VAR_6 && (VAR_8 & FUNC_0(VAR_6 - 1, 0)))
  VAR_9 = 1;

 VAR_8 >>= VAR_6;

 if (VAR_9)
  VAR_8++;

 return ((unsigned long)VAR_8 + VAR_4 - 1) / VAR_4;
}
