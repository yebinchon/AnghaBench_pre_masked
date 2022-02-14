
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ data; } ;
struct tegra_bpmp_message {TYPE_2__ rx; TYPE_1__ tx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct tegra_bpmp_message *VAR_1)
{
 return (VAR_1->tx.size <= VAR_0) &&
        (VAR_1->rx.size <= VAR_0) &&
        (VAR_1->tx.size == 0 || VAR_1->tx.data) &&
        (VAR_1->rx.size == 0 || VAR_1->rx.data);
}
