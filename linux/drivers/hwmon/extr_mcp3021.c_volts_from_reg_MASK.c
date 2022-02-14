
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mcp3021_data {int vdd; int output_res; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline u16 FUNC_1(struct mcp3021_data *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_0->vdd * VAR_1, 1 << VAR_0->output_res);
}
