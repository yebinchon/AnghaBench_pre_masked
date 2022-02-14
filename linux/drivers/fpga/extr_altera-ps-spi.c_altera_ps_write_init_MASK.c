
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_manager {int dev; struct altera_ps_conf* priv; } ;
struct fpga_image_info {int flags; } ;
struct altera_ps_conf {int info_flags; TYPE_1__* data; int status; int config; } ;
struct TYPE_2__ {int status_wait_min_us; int status_wait_max_us; int t_st2ck_us; int t_cfg_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_3,
    struct fpga_image_info *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct altera_ps_conf *VAR_7 = VAR_3->priv;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_7->info_flags = VAR_4->flags;

 if (VAR_4->flags & VAR_2) {
  FUNC_1(&VAR_3->dev, "Partial reconfiguration not supported.\n");
  return -VAR_0;
 }

 FUNC_3(VAR_7->config, 1);


 FUNC_0(VAR_7->data->t_cfg_us);

 if (!FUNC_2(VAR_7->status)) {
  FUNC_1(&VAR_3->dev, "Status pin failed to show a reset\n");
  return -VAR_1;
 }

 FUNC_3(VAR_7->config, 0);

 VAR_8 = VAR_7->data->status_wait_min_us;
 VAR_9 = VAR_7->data->status_wait_max_us;
 VAR_10 = VAR_9 / VAR_8;
 if (VAR_9 % VAR_8)
  VAR_10++;


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  FUNC_4(VAR_8, VAR_8 + 10);
  if (!FUNC_2(VAR_7->status)) {

   FUNC_0(VAR_7->data->t_st2ck_us);
   return 0;
  }
 }

 FUNC_1(&VAR_3->dev, "Status pin not ready.\n");
 return -VAR_1;
}
