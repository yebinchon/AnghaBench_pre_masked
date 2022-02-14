
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct fsi_master_acf {int lock; scalar_t__ sram; void* t_echo_delay; void* t_send_delay; int dev; } ;
struct fsi_master {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,void*,void*) ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fsi_master_acf* FUNC_4 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_5(struct fsi_master *VAR_3, int VAR_4,
          u8 VAR_5, u8 VAR_6)
{
 struct fsi_master_acf *VAR_7 = FUNC_4(VAR_3);

 if (VAR_4 != 0)
  return -VAR_1;

 FUNC_2(&VAR_7->lock);
 VAR_7->t_send_delay = VAR_5;
 VAR_7->t_echo_delay = VAR_6;
 FUNC_0(VAR_7->dev, "Changing delays: send=%d echo=%d\n",
  VAR_5, VAR_6);
 FUNC_1(VAR_7->t_send_delay, VAR_7->sram + VAR_2);
 FUNC_1(VAR_7->t_echo_delay, VAR_7->sram + VAR_0);
 FUNC_3(&VAR_7->lock);

 return 0;
}
