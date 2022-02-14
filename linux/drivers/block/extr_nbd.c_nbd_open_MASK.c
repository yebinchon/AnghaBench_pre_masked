
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {struct nbd_config* config; int config_lock; int refs; int config_refs; } ;
struct nbd_config {int dummy; } ;
struct block_device {int bd_invalidated; TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct nbd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nbd_config* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct nbd_config*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct block_device *VAR_3, fmode_t VAR_4)
{
 struct nbd_device *VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_2);
 VAR_5 = VAR_3->bd_disk->private_data;
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto out;
 }
 if (!FUNC_5(&VAR_5->refs)) {
  VAR_6 = -VAR_1;
  goto out;
 }
 if (!FUNC_5(&VAR_5->config_refs)) {
  struct nbd_config *VAR_7;

  FUNC_0(&VAR_5->config_lock);
  if (FUNC_5(&VAR_5->config_refs)) {
   FUNC_1(&VAR_5->config_lock);
   goto out;
  }
  VAR_7 = VAR_5->config = FUNC_2();
  if (!VAR_7) {
   VAR_6 = -VAR_0;
   FUNC_1(&VAR_5->config_lock);
   goto out;
  }
  FUNC_6(&VAR_5->config_refs, 1);
  FUNC_4(&VAR_5->refs);
  FUNC_1(&VAR_5->config_lock);
  VAR_3->bd_invalidated = 1;
 } else if (FUNC_3(VAR_5->config)) {
  VAR_3->bd_invalidated = 1;
 }
out:
 FUNC_1(&VAR_2);
 return VAR_6;
}
