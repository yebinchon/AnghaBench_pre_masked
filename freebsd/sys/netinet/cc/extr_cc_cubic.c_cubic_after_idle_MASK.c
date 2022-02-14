
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cubic {int max_cwnd; int t_last_cong; int K; } ;
struct cc_var {struct cubic* cc_data; } ;
struct TYPE_2__ {int (* after_idle ) (struct cc_var*) ;} ;


 int FUNC_0 (struct cc_var*,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cc_var*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct cc_var *VAR_4)
{
 struct cubic *VAR_5;

 VAR_5 = VAR_4->cc_data;

 VAR_5->max_cwnd = FUNC_3(VAR_5->max_cwnd, FUNC_0(VAR_4, VAR_1));
 VAR_5->K = FUNC_1(VAR_5->max_cwnd / FUNC_0(VAR_4, VAR_2));

 VAR_0.after_idle(VAR_4);
 VAR_5->t_last_cong = VAR_3;
}
