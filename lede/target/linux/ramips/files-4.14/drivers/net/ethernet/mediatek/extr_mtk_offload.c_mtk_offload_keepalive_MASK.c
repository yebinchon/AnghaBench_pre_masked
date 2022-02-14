
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_offload {scalar_t__ timeout; } ;
struct fe_priv {int * foe_flow_table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct flow_offload* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct fe_priv *VAR_2, unsigned int VAR_3)
{
 struct flow_offload *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_2->foe_flow_table[VAR_3]);
 if (VAR_4)
  VAR_4->timeout = VAR_1 + 30 * VAR_0;
 FUNC_2();
}
