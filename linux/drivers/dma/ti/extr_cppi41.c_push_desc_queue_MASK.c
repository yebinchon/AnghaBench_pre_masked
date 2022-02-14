
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cppi41_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cppi41_dd {int descs_phys; scalar_t__ qmgr_mem; struct cppi41_channel** chan_busy; TYPE_1__ ddev; } ;
struct cppi41_channel {size_t q_comp_num; int q_num; int desc_phys; scalar_t__ gcr_reg; int is_tx; scalar_t__ residue; struct cppi41_dd* cdd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cppi41_channel*) ;
 int FUNC_2 () ;
 int FUNC_3 (size_t,scalar_t__) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cppi41_channel *VAR_3)
{
 struct cppi41_dd *VAR_4 = VAR_3->cdd;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_3->residue = 0;

 VAR_7 = VAR_0;
 if (!VAR_3->is_tx) {
  VAR_7 |= VAR_2;
  VAR_7 |= VAR_1;
  VAR_7 |= VAR_3->q_comp_num;
 }

 FUNC_3(VAR_7, VAR_3->gcr_reg);






 FUNC_2();
 FUNC_5(VAR_4->ddev.dev);

 VAR_6 = FUNC_4(VAR_3->desc_phys);
 VAR_5 = (VAR_6 - VAR_4->descs_phys) / sizeof(struct cppi41_desc);
 FUNC_1(VAR_4->chan_busy[VAR_5]);
 VAR_4->chan_busy[VAR_5] = VAR_3;

 VAR_7 = (sizeof(struct cppi41_desc) - 24) / 4;
 VAR_7 |= VAR_6;
 FUNC_3(VAR_7, VAR_4->qmgr_mem + FUNC_0(VAR_3->q_num));
}
