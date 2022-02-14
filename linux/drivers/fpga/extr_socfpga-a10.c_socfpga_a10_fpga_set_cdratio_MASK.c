
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {struct a10_fpga_priv* priv; } ;
struct a10_fpga_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,size_t) ;
 unsigned int FUNC_3 (unsigned int,int,int) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_4,
     unsigned int VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct a10_fpga_priv *VAR_8 = VAR_4->priv;
 unsigned int VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_2((u32 *)VAR_6, VAR_7 / 4);
 if (VAR_10 < 0)
  return -VAR_3;

 VAR_11 = FUNC_1((u32 *)VAR_6, VAR_7 / 4);
 if (VAR_11 < 0)
  return -VAR_3;

 VAR_9 = FUNC_3(VAR_5, VAR_10, VAR_11);

 FUNC_0(VAR_8->regmap, VAR_2,
      VAR_0,
      VAR_9 << VAR_1);

 return 0;
}
