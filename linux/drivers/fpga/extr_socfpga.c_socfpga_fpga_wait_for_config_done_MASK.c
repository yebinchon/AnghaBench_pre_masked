
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socfpga_fpga_priv {int status_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct socfpga_fpga_priv*) ;
 int FUNC_3 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct socfpga_fpga_priv *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->status_complete);
 FUNC_3(VAR_2, VAR_1);

 VAR_3 = FUNC_4(
      &VAR_2->status_complete,
      FUNC_1(10));
 if (VAR_3 == 0)
  VAR_4 = -VAR_0;

 FUNC_2(VAR_2);
 return VAR_4;
}
