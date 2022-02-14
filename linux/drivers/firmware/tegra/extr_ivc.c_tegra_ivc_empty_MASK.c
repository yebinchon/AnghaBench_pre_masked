
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct tegra_ivc_header {TYPE_2__ rx; TYPE_1__ tx; } ;
struct tegra_ivc {scalar_t__ num_frames; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct tegra_ivc *VAR_0,
       struct tegra_ivc_header *VAR_1)
{





 u32 VAR_2 = FUNC_0(VAR_1->tx.count);
 u32 VAR_3 = FUNC_0(VAR_1->rx.count);
 if (VAR_2 - VAR_3 > VAR_0->num_frames)
  return 1;

 return VAR_2 == VAR_3;
}
