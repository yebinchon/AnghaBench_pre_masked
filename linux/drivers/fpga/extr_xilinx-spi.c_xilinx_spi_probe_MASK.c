
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_spi_conf {void* done; void* prog_b; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,int) ;
 struct fpga_manager* FUNC_3 (int *,char*,int *,struct xilinx_spi_conf*) ;
 void* FUNC_4 (int *,char*,int ) ;
 struct xilinx_spi_conf* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct fpga_manager*) ;
 int FUNC_7 (struct spi_device*,struct fpga_manager*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_5)
{
 struct xilinx_spi_conf *VAR_6;
 struct fpga_manager *VAR_7;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->spi = VAR_5;


 VAR_6->prog_b = FUNC_4(&VAR_5->dev, "prog_b", VAR_3);
 if (FUNC_0(VAR_6->prog_b)) {
  FUNC_2(&VAR_5->dev, "Failed to get PROGRAM_B gpio: %ld\n",
   FUNC_1(VAR_6->prog_b));
  return FUNC_1(VAR_6->prog_b);
 }

 VAR_6->done = FUNC_4(&VAR_5->dev, "done", VAR_2);
 if (FUNC_0(VAR_6->done)) {
  FUNC_2(&VAR_5->dev, "Failed to get DONE gpio: %ld\n",
   FUNC_1(VAR_6->done));
  return FUNC_1(VAR_6->done);
 }

 VAR_7 = FUNC_3(&VAR_5->dev,
       "Xilinx Slave Serial FPGA Manager",
       &VAR_4, VAR_6);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(VAR_5, VAR_7);

 return FUNC_6(VAR_7);
}
