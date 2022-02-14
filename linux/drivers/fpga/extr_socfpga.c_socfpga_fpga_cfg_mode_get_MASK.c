
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct socfpga_fpga_priv {int dummy; } ;
struct TYPE_3__ {int valid; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t FUNC_1 (struct socfpga_fpga_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct socfpga_fpga_priv *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 VAR_6 &= VAR_1;
 VAR_6 >>= VAR_2;


 if ((VAR_6 >= FUNC_0(VAR_4)) || !VAR_4[VAR_6].valid)
  return -VAR_0;

 return VAR_6;
}
