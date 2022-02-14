
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int dummy; } ;
struct srp_rport {struct srp_target_port* lld_data; } ;


 int FUNC_0 (struct srp_target_port*) ;

__attribute__((used)) static void FUNC_1(struct srp_rport *VAR_0)
{
 struct srp_target_port *VAR_1 = VAR_0->lld_data;

 FUNC_0(VAR_1);
}
