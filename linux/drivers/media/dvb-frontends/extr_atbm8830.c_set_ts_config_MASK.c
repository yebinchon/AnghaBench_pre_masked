
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atbm_state {struct atbm8830_config* config; } ;
struct atbm8830_config {scalar_t__ ts_clk_gated; scalar_t__ ts_sampling_edge; scalar_t__ serial_ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atbm_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct atbm_state *VAR_4)
{
 const struct atbm8830_config *VAR_5 = VAR_4->config;


 FUNC_0(VAR_4, VAR_3, VAR_5->serial_ts ? 1 : 0);
 FUNC_0(VAR_4, VAR_1, VAR_5->serial_ts ? 1 : 0);

 FUNC_0(VAR_4, VAR_2,
  VAR_5->ts_sampling_edge ? 1 : 0);

 FUNC_0(VAR_4, VAR_0,
  VAR_5->ts_clk_gated ? 0 : 1);

 return 0;
}
