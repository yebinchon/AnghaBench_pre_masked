
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int max; int min; } ;
struct TYPE_15__ {TYPE_6__ autoload; } ;
struct TYPE_10__ {int OctetsPerSecond; } ;
struct TYPE_9__ {int OctetsPerSecond; } ;
struct TYPE_11__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_12__ {TYPE_3__ total; } ;
struct TYPE_13__ {TYPE_4__ stats; } ;
struct mp {TYPE_8__* bundle; TYPE_7__ cfg; TYPE_5__ link; } ;
struct TYPE_16__ {int bandwidth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_8__*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
  struct mp *VAR_4 = (struct mp *)VAR_3;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4->link.stats.total.in.OctetsPerSecond,
                VAR_4->link.stats.total.out.OctetsPerSecond) * 800 /
            VAR_4->bundle->bandwidth;
  if (VAR_5 >= VAR_4->cfg.autoload.max) {
    FUNC_2(VAR_2, "%d%% saturation - bring a link up ?\n", VAR_5);
    FUNC_1(VAR_4->bundle, VAR_5, VAR_1);
  } else if (VAR_5 <= VAR_4->cfg.autoload.min) {
    FUNC_2(VAR_2, "%d%% saturation - bring a link down ?\n", VAR_5);
    FUNC_1(VAR_4->bundle, VAR_5, VAR_0);
  }
}
