
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int config_lock; int recv_workq; struct nbd_config* config; } ;
struct nbd_config {int runtime_flags; int recv_threads; int recv_wq; } ;
struct block_device {int bd_invalidated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct nbd_device*) ;
 int FUNC_6 (struct nbd_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct nbd_device *VAR_4, struct block_device *VAR_5)
{
 struct nbd_config *VAR_6 = VAR_4->config;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_3)
  VAR_5->bd_invalidated = 1;
 FUNC_3(&VAR_4->config_lock);
 VAR_7 = FUNC_8(VAR_6->recv_wq,
      FUNC_0(&VAR_6->recv_threads) == 0);
 if (VAR_7) {
  FUNC_6(VAR_4);
  FUNC_1(VAR_4->recv_workq);
 }
 FUNC_2(&VAR_4->config_lock);
 FUNC_4(VAR_5);

 if (FUNC_7(VAR_1, &VAR_6->runtime_flags))
  VAR_7 = 0;
 if (FUNC_7(VAR_2, &VAR_6->runtime_flags))
  VAR_7 = -VAR_0;
 return VAR_7;
}
