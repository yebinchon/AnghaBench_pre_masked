
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chd {int shadow_w; scalar_t__ loss_compete; scalar_t__ maxrtt_in_rtt; scalar_t__ prev_backoff_qdly; } ;
struct cc_var {struct chd* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct cc_var *VAR_1)
{
 struct chd *VAR_2;

 VAR_2 = VAR_1->cc_data;
 VAR_2->prev_backoff_qdly = 0;
 VAR_2->maxrtt_in_rtt = 0;
 VAR_2->loss_compete = 0;




 VAR_2->shadow_w = FUNC_0(VAR_1, VAR_0);
}
