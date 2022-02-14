
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {int dummy; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_dma_channel*) ;

__attribute__((used)) static inline int FUNC_2(struct tegra_dma_channel *VAR_4,
  enum dma_slave_buswidth VAR_5)
{
 switch (VAR_5) {
 case 131:
  return VAR_3;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  FUNC_0(FUNC_1(VAR_4),
   "slave bw is not supported, using 32bits\n");
  return VAR_1;
 }
}
