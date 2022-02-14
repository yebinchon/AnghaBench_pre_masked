
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mlx4_ib_dev {TYPE_3__* dev; int ib_dev; } ;
struct mlx4_ib_demux_pv_ctx {int dummy; } ;
struct mlx4_ib_demux_ctx {int port; int * tun; int * wq; void* ud_wq; int * ib_dev; struct mlx4_ib_dev* dev; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_5__ {int sqp_demux; } ;
struct TYPE_6__ {TYPE_2__ caps; TYPE_1__* persist; } ;
struct TYPE_4__ {scalar_t__ num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_ib_dev*,int,int) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 struct mlx4_active_ports FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (struct mlx4_ib_demux_ctx*,int) ;
 int FUNC_9 (struct mlx4_ib_demux_ctx*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct mlx4_ib_dev *VAR_3,
           struct mlx4_ib_demux_ctx *VAR_4,
           int VAR_5)
{
 char VAR_6[12];
 int VAR_7 = 0;
 int VAR_8;

 VAR_4->tun = FUNC_4(VAR_3->dev->caps.sqp_demux,
      sizeof (struct mlx4_ib_demux_pv_ctx *), VAR_1);
 if (!VAR_4->tun)
  return -VAR_0;

 VAR_4->dev = VAR_3;
 VAR_4->port = VAR_5;
 VAR_4->ib_dev = &VAR_3->ib_dev;

 for (VAR_8 = 0;
      VAR_8 < FUNC_6(VAR_3->dev->caps.sqp_demux,
      (u16)(VAR_3->dev->persist->num_vfs + 1));
      VAR_8++) {
  struct mlx4_active_ports VAR_9 =
   FUNC_7(VAR_3->dev, VAR_8);

  if (!FUNC_12(VAR_5 - 1, VAR_9.ports))
   continue;

  VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_5, &VAR_4->tun[VAR_8]);
  if (VAR_7) {
   VAR_7 = -VAR_0;
   goto err_mcg;
  }
 }

 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7) {
  FUNC_10("Failed initializing mcg para-virt (%d)\n", VAR_7);
  goto err_mcg;
 }

 FUNC_11(VAR_6, sizeof VAR_6, "mlx4_ibt%d", VAR_5);
 VAR_4->wq = FUNC_0(VAR_6, VAR_2);
 if (!VAR_4->wq) {
  FUNC_10("Failed to create tunnelling WQ for port %d\n", VAR_5);
  VAR_7 = -VAR_0;
  goto err_wq;
 }

 FUNC_11(VAR_6, sizeof VAR_6, "mlx4_ibud%d", VAR_5);
 VAR_4->ud_wq = FUNC_0(VAR_6, VAR_2);
 if (!VAR_4->ud_wq) {
  FUNC_10("Failed to create up/down WQ for port %d\n", VAR_5);
  VAR_7 = -VAR_0;
  goto err_udwq;
 }

 return 0;

err_udwq:
 FUNC_2(VAR_4->wq);
 VAR_4->wq = ((void*)0);

err_wq:
 FUNC_8(VAR_4, 1);
err_mcg:
 for (VAR_8 = 0; VAR_8 < VAR_3->dev->caps.sqp_demux; VAR_8++)
  FUNC_3(VAR_3, VAR_8, VAR_5);
 FUNC_5(VAR_4->tun);
 VAR_4->tun = ((void*)0);
 return VAR_7;
}
