
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_fpga_priv {int status_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_2 (struct socfpga_fpga_priv*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct socfpga_fpga_priv *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11;
 bool VAR_12, VAR_13;


 VAR_10 = FUNC_1(VAR_9, VAR_3);

 FUNC_2(VAR_9, VAR_4, VAR_10);

 VAR_11 = FUNC_1(VAR_9, VAR_1);
 VAR_12 = (VAR_11 & VAR_5) != 0;
 VAR_13 = (VAR_11 & VAR_6) != 0;


 if (VAR_12 && VAR_13) {

  FUNC_2(VAR_9,
     VAR_2, 0);
  FUNC_0(&VAR_9->status_complete);
 }

 return VAR_0;
}
