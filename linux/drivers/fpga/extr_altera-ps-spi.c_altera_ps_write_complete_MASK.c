
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {int dev; struct altera_ps_conf* priv; } ;
struct fpga_image_info {int dummy; } ;
struct altera_ps_conf {int spi; scalar_t__ confd; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_1,
        struct fpga_image_info *VAR_2)
{
 struct altera_ps_conf *VAR_3 = VAR_1->priv;
 static const char VAR_4[] = {0};
 int VAR_5;

 if (FUNC_2(VAR_3->status)) {
  FUNC_0(&VAR_1->dev, "Error during configuration.\n");
  return -VAR_0;
 }

 if (VAR_3->confd) {
  if (!FUNC_1(VAR_3->confd)) {
   FUNC_0(&VAR_1->dev, "CONF_DONE is inactive!\n");
   return -VAR_0;
  }
 }





 VAR_5 = FUNC_3(VAR_3->spi, VAR_4, 1);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "spi error during end sequence: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
