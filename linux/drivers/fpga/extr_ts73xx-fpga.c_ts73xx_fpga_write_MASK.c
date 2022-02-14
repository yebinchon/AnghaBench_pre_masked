
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts73xx_fpga_priv {scalar_t__ io_base; } ;
struct fpga_manager {struct ts73xx_fpga_priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,int,int,int ) ;
 int FUNC_1 (char const,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fpga_manager *VAR_4, const char *VAR_5,
        size_t VAR_6)
{
 struct ts73xx_fpga_priv *VAR_7 = VAR_4->priv;
 size_t VAR_8 = 0;
 int VAR_9;
 u8 VAR_10;

 while (VAR_6--) {
  VAR_9 = FUNC_0(VAR_7->io_base + VAR_0,
      VAR_10, !(VAR_10 & VAR_2),
      1, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;

  FUNC_1(VAR_5[VAR_8], VAR_7->io_base + VAR_1);
  VAR_8++;
 }

 return 0;
}
