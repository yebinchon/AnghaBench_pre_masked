
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int num_flush_bios; int num_discard_bios; int per_io_data_size; struct delay_c* private; } ;
struct dm_delay_info {int dummy; } ;
struct delay_c {unsigned int argc; int kdelayd_wq; int flush; int write; int read; int may_delay; int timer_lock; int delayed_bios; int flush_expired_bios; int delay_timer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct dm_target*,int *,char**) ;
 int FUNC_6 (struct dm_target*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct delay_c* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_6, unsigned int VAR_7, char **VAR_8)
{
 struct delay_c *VAR_9;
 int VAR_10;

 if (VAR_7 != 3 && VAR_7 != 6 && VAR_7 != 9) {
  VAR_6->error = "Requires exactly 3, 6 or 9 arguments";
  return -VAR_0;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_6->error = "Cannot allocate context";
  return -VAR_1;
 }

 VAR_6->private = VAR_9;
 FUNC_9(&VAR_9->delay_timer, VAR_5, 0);
 FUNC_2(&VAR_9->flush_expired_bios, VAR_4);
 FUNC_1(&VAR_9->delayed_bios);
 FUNC_8(&VAR_9->timer_lock);
 FUNC_4(&VAR_9->may_delay, 1);
 VAR_9->argc = VAR_7;

 VAR_10 = FUNC_5(VAR_6, &VAR_9->read, VAR_8);
 if (VAR_10)
  goto bad;

 if (VAR_7 == 3) {
  VAR_10 = FUNC_5(VAR_6, &VAR_9->write, VAR_8);
  if (VAR_10)
   goto bad;
  VAR_10 = FUNC_5(VAR_6, &VAR_9->flush, VAR_8);
  if (VAR_10)
   goto bad;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_6, &VAR_9->write, VAR_8 + 3);
 if (VAR_10)
  goto bad;
 if (VAR_7 == 6) {
  VAR_10 = FUNC_5(VAR_6, &VAR_9->flush, VAR_8 + 3);
  if (VAR_10)
   goto bad;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_6, &VAR_9->flush, VAR_8 + 6);
 if (VAR_10)
  goto bad;

out:
 VAR_9->kdelayd_wq = FUNC_3("kdelayd", VAR_3, 0);
 if (!VAR_9->kdelayd_wq) {
  VAR_10 = -VAR_0;
  FUNC_0("Couldn't start kdelayd");
  goto bad;
 }

 VAR_6->num_flush_bios = 1;
 VAR_6->num_discard_bios = 1;
 VAR_6->per_io_data_size = sizeof(struct dm_delay_info);
 return 0;

bad:
 FUNC_6(VAR_6);
 return VAR_10;
}
