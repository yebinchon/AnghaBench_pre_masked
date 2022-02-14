
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_recovery_context {int nr_state; struct nlm_host* nr_host; } ;
struct nlm_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct nlm_recovery_context*) ;
 int VAR_2 ;
 int FUNC_1 (struct nlm_host*) ;
 int FUNC_2 (struct nlm_host*) ;

void
FUNC_3(struct nlm_host *VAR_3)
{
 struct nlm_recovery_context VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_1 | FUNC_2(VAR_3);
 do {
  VAR_4.nr_host = VAR_3;
  VAR_4.nr_state = FUNC_1(VAR_3);
  VAR_6 = FUNC_0(VAR_5,
      VAR_2, &VAR_4);
 } while (VAR_6 == VAR_0);
}
