
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct voltagedomain {int (* rmw ) (int,int,int ) ;struct omap_vc_channel* vc; } ;
struct omap_vc_channel {int flags; int cfg_channel; int cfg_channel_sa_shift; int cfg_channel_reg; } ;
struct TYPE_2__ {int racen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct voltagedomain *VAR_3)
{
 struct omap_vc_channel *VAR_4 = VAR_3->vc;





 if (VAR_4->flags & VAR_1)
  VAR_4->cfg_channel &= VAR_2->racen;

 VAR_3->rmw(VAR_0 << VAR_4->cfg_channel_sa_shift,
      VAR_4->cfg_channel << VAR_4->cfg_channel_sa_shift,
      VAR_4->cfg_channel_reg);

 return 0;
}
