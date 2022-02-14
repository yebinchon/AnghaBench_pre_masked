
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct socfpga_fpga_priv {int dummy; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct socfpga_fpga_priv*) ;
 int FUNC_1 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_2 (struct socfpga_fpga_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct socfpga_fpga_priv *VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6 = FUNC_1(VAR_5, VAR_3);
 VAR_6 &= ~VAR_0;
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_4[VAR_7].ctrl;


 VAR_6 &= ~VAR_2;
 FUNC_2(VAR_5, VAR_3, VAR_6);

 return 0;
}
