
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_state {int last_tx_not_done; } ;
struct mbox_chan {struct pdc_state* con_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct pdc_state*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct mbox_chan *VAR_1)
{
 struct pdc_state *VAR_2 = VAR_1->con_priv;
 bool VAR_3;

 if (FUNC_1(FUNC_0(VAR_2, VAR_0,
        VAR_0))) {
  VAR_2->last_tx_not_done++;
  VAR_3 = 0;
 } else {
  VAR_3 = 1;
 }
 return VAR_3;
}
