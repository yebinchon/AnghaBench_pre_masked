
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct fpga_manager {struct spi_device* priv; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 (struct spi_device*,unsigned long*) ;
 scalar_t__ FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_3(struct fpga_manager *VAR_5)
{
 struct spi_device *VAR_6 = VAR_5->priv;
 unsigned long VAR_7;

 FUNC_1(VAR_6, &VAR_7);
 if (!FUNC_2(VAR_0, &VAR_7) && FUNC_2(VAR_1, &VAR_7) &&
     FUNC_0(&VAR_7) == VAR_2)
  return VAR_3;

 return VAR_4;
}
