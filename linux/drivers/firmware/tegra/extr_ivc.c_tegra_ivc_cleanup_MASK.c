
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phys; } ;
struct TYPE_3__ {int phys; } ;
struct tegra_ivc {int num_frames; int frame_size; TYPE_2__ tx; scalar_t__ peer; TYPE_1__ rx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,size_t,int ) ;
 size_t FUNC_1 (int) ;

void FUNC_2(struct tegra_ivc *VAR_1)
{
 if (VAR_1->peer) {
  size_t VAR_2 = FUNC_1(VAR_1->num_frames *
        VAR_1->frame_size);

  FUNC_0(VAR_1->peer, VAR_1->rx.phys, VAR_2,
     VAR_0);
  FUNC_0(VAR_1->peer, VAR_1->tx.phys, VAR_2,
     VAR_0);
 }
}
