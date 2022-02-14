
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dctcp {int save_sndnxt; scalar_t__ num_cong_events; scalar_t__ ece_prev; scalar_t__ ece_curr; int alpha; scalar_t__ bytes_total; scalar_t__ bytes_ecn; } ;
struct cc_var {struct dctcp* cc_data; } ;
struct TYPE_2__ {int (* after_idle ) (struct cc_var*) ;} ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cc_var*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct cc_var *VAR_5)
{
 struct dctcp *VAR_6;

 if (FUNC_0(VAR_5, VAR_4) & VAR_0) {
  VAR_6 = VAR_5->cc_data;


  VAR_6->bytes_ecn = 0;
  VAR_6->bytes_total = 0;
  VAR_6->save_sndnxt = FUNC_0(VAR_5, VAR_3);
  VAR_6->alpha = VAR_1;
  VAR_6->ece_curr = 0;
  VAR_6->ece_prev = 0;
  VAR_6->num_cong_events = 0;
 }

 VAR_2.after_idle(VAR_5);
}
