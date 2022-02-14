
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {int dev; struct altera_cvp_conf* priv; } ;
struct altera_cvp_conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int*) ;
 int FUNC_1 (int *,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct fpga_manager *VAR_3, size_t VAR_4)
{
 struct altera_cvp_conf *VAR_5 = VAR_3->priv;
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_6);
 if (VAR_7 || (VAR_6 & VAR_2)) {
  FUNC_1(&VAR_3->dev, "CVP_CONFIG_ERROR after %zu bytes!\n",
   VAR_4);
  return -VAR_0;
 }
 return 0;
}
