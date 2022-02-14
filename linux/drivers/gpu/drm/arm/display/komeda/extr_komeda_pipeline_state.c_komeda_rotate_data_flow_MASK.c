
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_data_flow_cfg {int total_in_w; int total_in_h; int in_w; int in_h; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct komeda_data_flow_cfg *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_0->in_h, VAR_0->in_w);
  FUNC_1(VAR_0->total_in_h, VAR_0->total_in_w);
 }
}
