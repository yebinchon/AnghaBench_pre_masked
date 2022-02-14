
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* bw; } ;
struct dib7000p_state {int timf; int current_bandwidth; TYPE_2__ cfg; } ;
struct TYPE_3__ {int timf; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dib7000p_state *VAR_0)
{
 u32 VAR_1 = (FUNC_0(VAR_0, 427) << 16) | FUNC_0(VAR_0, 428);
 VAR_0->timf = VAR_1 * 160 / (VAR_0->current_bandwidth / 50);
 FUNC_1(VAR_0, 23, (u16) (VAR_1 >> 16));
 FUNC_1(VAR_0, 24, (u16) (VAR_1 & 0xffff));
 FUNC_2("updated timf_frequency: %d (default: %d)\n", VAR_0->timf, VAR_0->cfg.bw->timf);

}
