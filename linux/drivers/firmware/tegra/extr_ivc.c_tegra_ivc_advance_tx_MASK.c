
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int position; TYPE_2__* channel; } ;
struct tegra_ivc {int num_frames; TYPE_3__ tx; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct tegra_ivc *VAR_0)
{
 FUNC_1(VAR_0->tx.channel->tx.count,
     FUNC_0(VAR_0->tx.channel->tx.count) + 1);

 if (VAR_0->tx.position == VAR_0->num_frames - 1)
  VAR_0->tx.position = 0;
 else
  VAR_0->tx.position++;
}
